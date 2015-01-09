#ifndef __SENSOR__FUNC__HEADER__
#define __SENSOR__FUNC__HEADER__

#include "tem.h"
#include "wet.h"
#include "define.h"
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>

typedef struct sensor_data
{
	double data;
	double w_max;
	double w_min;
} DATA;

typedef struct sensor_info
{
	double tag_inx;
	char * tag_nic;
	double latitude;
	double longitude;
	struct sensor_data data;
} INFO;

INFO info;
DATA data;

#endif
