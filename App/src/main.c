#include "main.h"

int main()
{
	//define values
	int state = 0x00;
	int _state = 0x00;
	int menu = 0x00;
	int inx = 0x00;
	int input[COUNT] = {0,0};
	//print VERSION
	#ifdef VERSION
	printf(VERSION);
	#endif
	
menu:
	printf("Define Sensor ON/OFF\n");
	for (inx = 0x00; inx < COUNT; inx++)
	{ 
		printf("Select %s SENSOR ON?    ON-1 OFF-0  ",sensor_string[inx]);
		scanf("%d",&input[inx]);
	}
	printf("\n");
		
	state = (input[1] << TEM) + (input[0] << WET);

	// call SENSOR
	_state = sensor_main(state);
	
	return _state;
}
