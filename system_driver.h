/*
 *  system_driver.h
 *  systemDev
 *
 *  Created by Asher Hensley on 10/9/16.
 *  Copyright 2016. All rights reserved.
 *
 */

#include "systemc.h"

SC_MODULE(system_driver) {
	
	sc_out<sc_uint<8> > objectId;
	sc_out<bool> newImageFlag, newObjectFlag;
	
	void run_driver() {
		
		//Image 1 (4000 MS)
		int i=0;
		while (i<5) {
			if (i==0) {newImageFlag = true;} 
			objectId = 1;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			newImageFlag = false;
			wait(90,SC_MS);
			i++;
		}

		i=0;
		while (i<5) {
			objectId = 6;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<10) {
			objectId = 3;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<10) {
			objectId = 0;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		
		i=0;
		while (i<8) {
			objectId = 4;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<2) {
			objectId = 5;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		
		//Image 2 (4500 MS)
		i=0;
		while (i<7) {
			if (i==0) {newImageFlag = true;} 
			objectId = 0;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			newImageFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<3) {
			objectId = 13;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<12) {
			objectId = 1;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<8) {
			objectId = 5;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<10) {
			objectId = 9;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<1) {
			objectId = 10;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<2) {
			objectId = 11;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
		i=0;
		while (i<2) {
			objectId = 19;
			newObjectFlag = true;
			wait(10,SC_MS);
			newObjectFlag = false;
			wait(90,SC_MS);
			i++;
		}
		
	};
	
	SC_CTOR(system_driver) {
		
		SC_THREAD(run_driver);
		
	}
};

