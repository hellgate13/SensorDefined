#include "tem.h"
	
char * pre_path = "../conf/";

void sensor_setting_load(char * configure)
{
	FILE * fp = nil;
	char * extension = ".conf";
	char * path = (char * ) malloc (sizeof(char) * 100);
	char * filename = (char * ) malloc (sizeof(char) * 100);
	char * line = (char *) malloc (sizeof(char) * 100);
	char * temp = (char *) malloc (sizeof(char) * 100);
	char * option = nil;
	char * nic = nil;
	double d = 0;
	int size = 0;
	int inx = 0;
	int flag = -1;

	strcat(path,pre_path);	
	strcat(path,configure);
	strcat(filename,configure);
	strcat(path,extension);
	strcat(filename,extension);

	printf("%s \n",path);
	
	fp = fopen(path,"r");
	
	if(fp == nil)
	{
		printf("LOAD FAIL : %s \n",filename);
	}
	
	while(!feof(fp))
	{
		line = fgets(line,101,fp);
		
		if(line == nil) break;
		
		option = strtok(line," =\n");
		
		while(option != nil)
		{
			d = strtod(option,&temp);
			size = (int) strlen(temp);
			
			if(size == 0)
			{
				set[inx] = d;
				inx++;
			}
			else
			{
				printf("flag : %d \n",flag);
				printf("line : %s \n",line);

				if(flag != -1)
				{
					printf("Enter NIC set\n");
					flag = flag * -1;
					nic = temp;
					printf("1st: %s \n", nic);
					printf("1st line : %s \n",temp);
				}
		
				if(strcmp(line,"NICNAME") == 0) 
				{
					printf("Enter NIC check\n");
					flag = flag * -1;
				}
			}
			
			printf("2nd : %s \n",nic);
			printf("--------------------------------\n");	
			option = strtok(nil," =\n");	
		}
	}
	
	fclose(fp);
	
	info.tag_inx = set[0];
	printf("last :%s \n",nic);
	info.tag_nic = nic;
	info.latitude = set[2];
	info.longitude = set[3];
	info.data.w_max = set[4];
	info.data.w_min = set[5];
}

void sensor_setting_save()
{
	FILE * fp = nil;
}
