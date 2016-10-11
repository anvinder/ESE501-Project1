/*
 *  prc_tuple_stream.cpp
 *  systemDev
 *
 *  Created by Asher Hensley on 10/10/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "mobile_packet_builder.h"

void mobile_packet_builder::prc_tuple_stream() {
	
	//Defaults
	copyNewPacket.write(false);
	
	//Chk for Position Edge
	if (newTupleFlag.read()) {
		
		//Reset Condition
		bool resetCond = newImageFlag.read() && newTupleFlag.read();
		
		//Update
		if (resetCond) {
			copyNewPacket.write(true);
			packetCounter = 2;
		} 
		else {
			if (packetCounter==numTuplesPerPacket) {
				copyNewPacket.write(true);
				packetCounter = 1;
			}
			else {
				packetCounter = packetCounter+1;
			}
		}
	}

};


