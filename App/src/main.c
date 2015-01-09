#include "main.h"

int main()
{
	//define values
	int state = 0x00;
	int _state = 0x00;
	int menu = 0x00;
	int inx = 0x00;
	int reg[COUNT] = {0x00,0x00};
	char input[0x10] = {'0'};
	int cmp = 0x00;
	
	//print VERSION
	#ifdef VERSION
	printf(VERSION);
	#endif
	
	printf("Define Sensor ON/OFF\n");
	for_start:
	printf("Select %s SENSOR ON?    ON-1 OFF-0  ", sensor_string[inx]);
	scanf("%s",input);

	if (inx == 0) 
	{ 
		inx++;
		if(strcmp(input,"0") != 0 AND strcmp(input,"1") != 0)
		{
			inx--;
		}
		
		if(strcmp(input,"0") == 0) reg[inx-1] = 0;
		else if(strcmp(input,"1") == 0) reg[inx-1] = 1;
		goto for_start;
	}
	else
	{
		if(strcmp(input,"0") != 0 AND strcmp(input,"1") != 0)
		{
			goto for_start;
		} 
			
		if(strcmp(input,"0") == 0) reg[inx] = 0;
		else if(strcmp(input,"1") == 0) reg[inx] = 1;
		
		goto for_end;
	}

	for_end:
	printf("\n");
		
	state = (reg[1] << TEM) + (reg[0] << WET);
	
	// call SENSOR
	_state = sensor_main(state);
	
	return _state;
}
