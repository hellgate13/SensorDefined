#ifndef __TEM__FUNC__HEADER__
#define __TEM__FUNC__HEADER__

#include <stdio.h>
#include "sensor_func.h"

#ifdef VIRTUAL

void sensor_setting_load(char *);
void sensor_settign_save();

int virtual_temp_data(); // no device
#else

int i2c_temp_data(); // no virtual
#endif

double set[6];

#endif
