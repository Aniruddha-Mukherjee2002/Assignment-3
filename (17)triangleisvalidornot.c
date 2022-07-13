#include<stdio.h>
int main()
{
	int side1,side2,side3,sumOfsides;
	printf("Enter three sides of a triangle : ");
	scanf("%d%d%d",&side1,&side2,&side3);
	sumOfsides=side1+side2+side3;
	if(sumOfsides==180)
		printf("This triangle is valid");
	else
		printf("This triangle is not valid");
	return 0;
}