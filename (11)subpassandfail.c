#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,pm=33;
	printf("Enter marks of 5 subject which you obtained : ");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	if(sub1>=pm&&sub1<=100&&sub2>=pm&&sub2<=100&&sub3>=pm&&sub3<=100&&sub4>=pm&&sub4<=100&&sub5>=pm&&sub5<=100)
		printf("\nYou are passed in all subjects");
	else
		printf("\nYou are failed");
	return 0;
}