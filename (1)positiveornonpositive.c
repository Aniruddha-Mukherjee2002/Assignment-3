#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number to check it id positve or non positve :");
	scanf("%d",&num);
	if(num>0)
		printf("%d is positive number",num);
	else
		printf("%d is non positive number",num);
	return 0;
}