#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character to checkit is in uppercase or lowercase or a digit or a special character : ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("%c is an uppercase alphabet ",ch);
	else if(ch>='a'&&ch<='z')
		printf("%c is a lowercase alphabet ",ch);
		else if(ch>='0'&&ch<='9')
			printf("%c is a digit",ch);
		else 
			printf("%c is a special character",ch);
	return 0;
}