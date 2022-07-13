#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num<=999&&num>=100)
		printf("%d is three digit number",num);
	else
	{
		printf("%d is not a three digit number",num);
	}
}