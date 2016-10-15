#include "systemc.h"

SC_MODULE(mobile_processor)
{

	sc_in <bool> clk;
	sc_out < sc_bigint <8> > x_1;
	sc_out < sc_bigint <8> > x_12, x_13;
	sc_out < sc_bigint <8> > y_1;
	sc_out < sc_bigint <8> > y_12, y_13;
	sc_out < sc_bigint <8> > x_2;
	sc_out < sc_bigint <8> > x_22, x_23;
	sc_out < sc_bigint <8> > y_2;
	sc_out < sc_bigint <8> > y_22, y_23;
	sc_out < sc_bigint <8> > starttime;
	sc_out < sc_bigint <8> > endtime;
	sc_out < sc_bigint <1> > waittime;

		sc_out < sc_bigint <8> > starttime2;
	sc_out < sc_bigint <8> > endtime2;
	sc_out < sc_bigint <1> > waittime2;
		sc_out < sc_bigint <8> > starttime3;
	sc_out < sc_bigint <8> > endtime3;
	sc_out < sc_bigint <1> > waittime3;

	sc_out <sc_bigint<49> > physical_packet_out;
	sc_out <sc_bigint<49> > physical_packet_out2;
	sc_out <sc_bigint<49> > physical_packet_out3;
	sc_in  <sc_bigint<1> > copy_new_image_flag;



	sc_bigint<49>temp_physical_packet_out;
	sc_bigint<49>temp_physical_packet_out2;
	sc_bigint<49>temp_physical_packet_out3;
	sc_bigint<8>  temp_x_1;
	sc_bigint<8>  temp_x_12, temp_x_13;//18
	sc_bigint<8>  temp_y_1;
	sc_bigint<8>  temp_y_12, temp_y_13;//28
	sc_bigint<8>  temp_x_2;
	sc_bigint<8>  temp_x_22, temp_x_23;//38
	sc_bigint<8>  temp_y_2;
	sc_bigint<8>  temp_y_22, temp_y_23;//48
	sc_bigint<8>  temp_starttime;//56
	sc_bigint<8>  temp_endtime;//64
	sc_bigint<1>  temp_waittime;//65

	sc_bigint<8>  temp_starttime2;//56
	sc_bigint<8>  temp_endtime2;//64
	sc_bigint<1>  temp_waittime2;//65
	sc_bigint<8>  temp_starttime3;//56
	sc_bigint<8>  temp_endtime3;//64
	sc_bigint<1>  temp_waittime3;//65

	sc_bigint<1>  temp_copy_new_image_flag;

	void data_file();
	void image_info();
	SC_CTOR(mobile_processor)
	{
		SC_METHOD(image_info)
			sensitive << clk.pos();
	}
		
};
