#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num/2*2==num)
		printf("%d is even number",num);
	else
		printf("%d is odd number",num);
	return 0;
}