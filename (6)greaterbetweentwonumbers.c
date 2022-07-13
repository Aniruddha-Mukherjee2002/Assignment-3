#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two values : ");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	    printf("%d is greater than %d",num1,num2);
	 else if(num2>num1)
		printf("%d is greater than %d",num2,num1);
	else if(num1==num2)
			printf("Both are same one of them is %d",num1);
		return 0;
	 

	
}