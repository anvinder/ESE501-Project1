
#include "system_driver.h"
#include "mobile_data_compressor.h"
#include "mobile_packet_builder.h"
#include "mobile_transmit_buffer.h"
#include "mobile_transmitter.h"
#include "server_receiver.h"

int sc_main (int argc, char * argv[]) {
	
	//Signals
	sc_signal<sc_uint<8> > objectId;
	sc_signal<bool> newImageFlag, newObjectFlag, newTupleFlag, copyNewPacket, deleteOldPacket;
	sc_signal<sc_uint<16> > numBufferPackets, m2sCtrl1, m2sData1, s2mCtrl1;
	
	//Clock
	sc_clock clock("CLOCK",1,SC_MS);
	
	//Objects
	system_driver my_system_driver("MY_SYSTEM_DRIVER");
	mobile_data_compressor my_mobile_data_compressor("MY_MOBILE_DATA_COMPRESSOR");
	mobile_packet_builder my_mobile_packet_builder("MY_MOBILE_PACKET_BUILDER");
	mobile_transmit_buffer my_mobile_transmit_buffer("MY_MOBILE_TRANSMIT_BUFFER");
	mobile_transmitter my_mobile_transmitter("MY_MOBILE_TRANSMITTER");
	server_receiver my_server_receiver("MY_SERVER_RECEIVER");
	
	//Connections
	my_system_driver.objectId(objectId);
	my_system_driver.newImageFlag(newImageFlag);
	my_system_driver.newObjectFlag(newObjectFlag);
	
	my_mobile_data_compressor.objectId(objectId);
	my_mobile_data_compressor.newImageFlag(newImageFlag);
	my_mobile_data_compressor.newObjectFlag(newObjectFlag);
	my_mobile_data_compressor.newTupleFlag(newTupleFlag);
	
	my_mobile_packet_builder.newImageFlag(newImageFlag);
	my_mobile_packet_builder.newTupleFlag(newTupleFlag);
	my_mobile_packet_builder.copyNewPacket(copyNewPacket);
	
	my_mobile_transmit_buffer.copyNewPacket(copyNewPacket);
	my_mobile_transmit_buffer.numBufferPackets(numBufferPackets);
	my_mobile_transmit_buffer.deleteOldPacket(deleteOldPacket);
	
	my_mobile_transmitter.numBufferPackets(numBufferPackets);
	my_mobile_transmitter.deleteOldPacket(deleteOldPacket);
	my_mobile_transmitter.ctrlOut(m2sCtrl1);
	my_mobile_transmitter.dataOut(m2sData1);
	my_mobile_transmitter.ctrlIn(s2mCtrl1);
	
	my_server_receiver.ctrlIn1(m2sCtrl1);
	my_server_receiver.dataIn1(m2sData1);
	my_server_receiver.ctrlOut1(s2mCtrl1);
	
	//Setup Trace File
	sc_trace_file *tf = sc_create_vcd_trace_file("TEST");
	sc_trace(tf,objectId,"objectId");
	sc_trace(tf,clock,"clock");
	sc_trace(tf,newTupleFlag,"newTupleFlag");
	sc_trace(tf,newImageFlag,"newImageFlag");
	sc_trace(tf,copyNewPacket,"copyNewPacket");
	sc_trace(tf,numBufferPackets,"numBufferPackets");
	sc_trace(tf,deleteOldPacket,"deleteOldPacket");
	sc_trace(tf,m2sData1,"m2sData1");
	sc_trace(tf,m2sCtrl1,"m2sCtrl1");
	sc_trace(tf,s2mCtrl1,"s2mCtrl1");
	
	//Start Simulation
    sc_start(10000,SC_MS);
	
	//Close Trace File
	sc_close_vcd_trace_file(tf);
	
    return 0;
}
