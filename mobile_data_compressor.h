/*
 *  mobile_data_compressor.h
 *  systemDev
 *
 *  Created by Asher Hensley on 10/9/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "systemc.h"

SC_MODULE(mobile_data_compressor) {
	
	//Input/Output
	sc_in<sc_uint<8> > objectId;
	sc_in<bool> newImageFlag, newObjectFlag;
	sc_out<bool> newTupleFlag;
	
	//Internal Variables
	int runlength;
	int curObject;
	
	//Process
	void prc_object_stream();

	//Constructor
	SC_CTOR(mobile_data_compressor) {

		runlength = 0;
		curObject = 0;
		
		SC_METHOD(prc_object_stream);
		sensitive << newObjectFlag.pos() << newObjectFlag.neg();
		
	}
};

