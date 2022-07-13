#include<stdio.h>
int main()
{
	int num;
	printf("Enter a month number : ");
	scanf("%d",&num);
	if(num>12)
		printf("Warning! You entered greater than 12");
	else if(num==1)
		printf("January month is about of %d days",num*30+1);
	else if(num==2)
		printf("February month is about of %d days",num*15);
	else if(num==3)
		printf("March month is about of %d days",2*15+1);
	else if(num==4)
		printf("April month is about of %d days",2*15);
	else if(num==5)
		printf("May month is about of %d days",2*15+1);
	 else if(num==6)
		printf("June month is about of %d days",2*15);
	 else if(num==7)
		printf("July month is about of %d days",2*15+1);
	 else if(num==8)
		printf("August month is about of %d days",2*15+1);
	 else if(num==9)
		printf("September month is about of %d days",2*15);
	 else if(num==10)
		printf("October month is about of %d days",2*15+1);
	 else if(num==11)
		printf("November month is about of %d days",2*15);
	 else if(num==12)
		printf("December month is about of %d days",2*15+1);
	 return 0;
}