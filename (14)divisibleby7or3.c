#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num%7==0)
		printf("%d is divisible by 7",num);
	else if(num%3==0)
		printf("%d is divisible by 3 ",num);
	return 0;
	
	

}