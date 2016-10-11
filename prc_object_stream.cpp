/*
 *  prc_object_stream.cpp
 *  systemDev
 *
 *  Created by Asher Hensley on 10/9/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "mobile_data_compressor.h"

void mobile_data_compressor::prc_object_stream() {
	
	//Set Default Values
	newTupleFlag.write(false);
	
	//Only Update on Positive Edge
	if (newObjectFlag.read()) {
		
		//New Image Case
		if (newImageFlag.read()) {
			if (runlength>1) {
				newTupleFlag = true;
			}
			runlength = 1;
			curObject = objectId.read();
		} 
		
		//Current Image Case
		else {
			if (curObject==objectId.read()) {
				runlength = runlength+1;
			}
			else {
				newTupleFlag = true;
				runlength = 1;
				curObject = objectId.read();
			}
		}
	}
	
	
};


