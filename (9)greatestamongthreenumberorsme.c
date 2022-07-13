#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	printf("%d is greater than %d and %d",num1,num2,num3);
	else if(num2>num1&&num2>num3)
		printf("%d is greater than %d and %d",num2,num1,num3);
	else if(num1==num2&&num3>num1)
		printf("The greatest value appears two times that is %d",num1);
		else if(num1==num2&&num3==num1)
		printf("The greatest value appears three times that is %d",num3);
	else if(num3>num2)
		printf("%d is greater than %d and %d",num3,num1,num2);
	
     return 0;
		
}