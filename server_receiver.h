/*
 *  server_receiver.h
 *  systemDev
 *
 *  Created by Asher Hensley on 10/10/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "systemc.h"

SC_MODULE(server_receiver) {
	
	sc_in<sc_uint<16> > ctrlIn1, dataIn1;
	sc_out<sc_uint<16> > ctrlOut1;
	
	bool networkBusy;
	
	void prc_server_receive_data();
	
	SC_CTOR(server_receiver) {
		
		networkBusy = false;
	
		SC_METHOD(prc_server_receive_data);
		sensitive << ctrlIn1;
		
	}
	
};




