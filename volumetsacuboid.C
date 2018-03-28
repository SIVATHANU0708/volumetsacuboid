#include<stdio.h>
int main()
{
int l,b,h,volume,tsa;
printf("enter the values:");
scanf("%d%d%d",&l,&b,&h);
volume=l*b*h;
tsa=2*((l*b)+(b*h)+(l*h));
printf("\nVOLUME=%d",volume);
printf("\nTOTAL SURFACE AREA=%d",tsa);
return 0;
}
