#include "systemc.h"

SC_MODULE(mobile_processor)
{
	//sc_inout <bool> network_busy;
	sc_in <bool> clk;
	sc_out < sc_bigint <8> > x_1;
	sc_out < sc_bigint <8> > y_1;
	sc_out < sc_bigint <8> > x_2;
	sc_out < sc_bigint <8> > y_2;
	sc_out < sc_bigint <8> > starttime;
	sc_out < sc_bigint <8> > endtime;
	sc_out < sc_bigint <1> > waittime;
	sc_out <sc_bigint<49> > physical_packet_out;
	sc_in  <sc_bigint<1> > copy_new_image_flag;


	sc_bigint<49>temp_physical_packet_out;
	sc_bigint<8>  temp_x_1;//18
	sc_bigint<8>  temp_y_1;//28
	sc_bigint<8>  temp_x_2;//38
	sc_bigint<8>  temp_y_2;//48
	sc_bigint<8>  temp_starttime;//56
	sc_bigint<8>  temp_endtime;//64
	sc_bigint<1>  temp_waittime;//65
	sc_bigint<1>  temp_copy_new_image_flag;


	void image_info();
	SC_CTOR(mobile_processor)
	{
		SC_METHOD(image_info)
			sensitive << clk.pos();
		//sensitive<< reset.pos();
	}
};
