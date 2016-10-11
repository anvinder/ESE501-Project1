/*
 *  prc_mobile_transmissions.cpp
 *  systemDev
 *
 *  Created by Asher Hensley on 10/10/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "mobile_transmitter.h";

void mobile_transmitter::prc_mobile_transmissions() {
	

	//Process Buffer (max sim time is 16.6 minutes)
	while (i<10000000) {
		
		i++;
		
		//Set Defaults
		ctrlOut.write(0);
		dataOut.write(0);
		deleteOldPacket.write(false);
		
		//Chk for Data to Send
		if (numBufferPackets.read()==0) {
			wait(1,SC_MS);
		}
		else {
			
			//Req to Transmit
			while (ctrlIn.read()!=1) {
				wait(rand()%10+1,SC_MS);
				ctrlOut.write(1);
				wait(1,SC_MS);
				ctrlOut.write(0);
			}
			
			//Transmit Packet
			dataOut.write(100);
			deleteOldPacket.write(true);
			wait(1,SC_MS);
			deleteOldPacket.write(false);
			wait(200,SC_MS);
		}
	}

};


