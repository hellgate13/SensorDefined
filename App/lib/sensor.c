#include "sensor.h"
#include "sensor_func.h"

int sensor_main(int state)
{
int inx = 3;
int bit;
//#define DEBUG
#ifdef DEBUG
goto binary;
#endif

sensor_setting_load("temp");

printf("Setting load Complete\n");
printf("TAG index : %lf \n",info.tag_inx);
printf("TAG nic : %s \n",info.tag_nic);
goto func_end_NE;

binary:
	while(true)
	{
		if(inx < 0x00) break;
		bit = (state & (0x1 << inx))?1:0;
		
		if(bit == 0x1)
		{
			printf("%d",bit);
		}
		else
		{
			printf("%d",bit);
		}	
		
		inx--;
	}
	printf("\n");
	goto func_end_NE;

func_end_E:
	return -1;

func_end_NE:
	return 0x0;
}
