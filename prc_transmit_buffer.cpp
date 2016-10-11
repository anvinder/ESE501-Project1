/*
 *  prc_transmit_buffer.cpp
 *  systemDev
 *
 *  Created by Asher Hensley on 10/10/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "mobile_transmit_buffer.h"

void mobile_transmit_buffer::prc_transmit_buffer() {
		
	if (deleteOldPacket.read()==1) {
		if (numBufferPackets.read()>0) {
			numBufferPackets.write(numBufferPackets.read()-1);
		}
	}

	else {
		if (copyNewPacket.read()==1) {
			numBufferPackets.write(numBufferPackets.read()+1);
		}
	}

};
