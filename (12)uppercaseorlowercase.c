#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character to checkit is in uppercase or lowercase ; ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("%c is in uppercase ",ch);
	else if(ch>='a'&&ch<='z')
		printf("%c is in lowercase ",ch);
	return 0;
}