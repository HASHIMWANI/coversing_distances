//conversion of distances
#include<stdio.h>
int main()
{
	float dis_km,dis_cm,dis_inch,dis_m,dis_ft;
	printf("enter the distance in kilometers:\n");
	scanf("%f",&dis_km);
	dis_m=dis_km *1000;
	dis_cm=dis_m *100;
	dis_inch=dis_cm/2.54;
	dis_ft=dis_inch/12;
	printf(" the distance in meters=%f and distance in centimeters=%f  and distance in inches=%f and distance in feets=%f",dis_m,dis_cm,dis_inch,dis_ft);
	return 0;
}
