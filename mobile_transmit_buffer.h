/*
 *  mobile_transmit_buffer.h
 *  systemDev
 *
 *  Created by Asher Hensley on 10/10/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "systemc.h"

SC_MODULE(mobile_transmit_buffer) {

	sc_in<bool> copyNewPacket, deleteOldPacket;
	sc_out<sc_uint<16> > numBufferPackets;
	
	void prc_transmit_buffer();
	
	SC_CTOR(mobile_transmit_buffer) {
		
		SC_METHOD(prc_transmit_buffer);
		sensitive << copyNewPacket.pos() << deleteOldPacket.pos();
		
	}
	
};
