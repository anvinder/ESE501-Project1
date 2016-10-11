/*
 *  prc_server_receive_data.cpp
 *  systemDev
 *
 *  Created by Asher Hensley on 10/11/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "server_receiver.h"

void server_receiver::prc_server_receive_data() {
	
	//Set Defaults
	ctrlOut1.write(10);
	
	//Update Network Status
	networkBusy = false;
	if (dataIn1.read()>0) {
		networkBusy = true;
	}
	
	//Update
	if (networkBusy) {
		if (ctrlIn1.read()>0) {
			ctrlOut1.write(10);
		}
	}
	else {
		if (ctrlIn1.read()>0) {
			ctrlOut1.write(1);
		}
	}
	
};


