/*
 *  mobile_packet_builder.h
 *  systemDev
 *
 *  Created by Asher Hensley on 10/10/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "systemc.h"

SC_MODULE(mobile_packet_builder) {

	sc_in<bool> newImageFlag, newTupleFlag;
	sc_out<bool> copyNewPacket;
	int numTuplesPerPacket, packetCounter;
	
	void prc_tuple_stream();
	
	SC_CTOR(mobile_packet_builder) {
		
		numTuplesPerPacket = 4;
		packetCounter = 1;
		
		SC_METHOD(prc_tuple_stream);
		sensitive << newTupleFlag.pos() << newTupleFlag.neg();
		
	}
};
