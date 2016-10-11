/*
 *  mobile_transmitter.h
 *  systemDev
 *
 *  Created by Asher Hensley on 10/10/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "systemc.h"

SC_MODULE(mobile_transmitter) {

	sc_in<sc_uint<16> > numBufferPackets,ctrlIn;
	sc_out<bool> deleteOldPacket;
	sc_out<sc_uint<16> > dataOut, ctrlOut;
	
	int i;
	
	void prc_mobile_transmissions();
	
	SC_CTOR(mobile_transmitter) {
		
		i = 0;
		SC_THREAD(prc_mobile_transmissions)
		
	}
};

