#include <stdio.h>

int main()
{
	float latitude;
	float longtude;
	char info[80];
	int started = 0;

	puts("data=[");
	while (scanf("%f,%f,%79[^\n]",&latitude, &longtude, info)==3){
		if (started)
			printf(",\n");
		else
			started = 1;
		printf("{latitude: %f, longtude: %f, info: '%s'})", latitude, longtude, info);
		}
	puts("\n]");
	return 0;
}
