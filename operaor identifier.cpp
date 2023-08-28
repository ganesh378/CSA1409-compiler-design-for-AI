#include<stdio.h>
main()
{
	char s[5];
	printf("enter any operator:");
	gets(s);
	switch(s[0])
	{
		case'>':
			if(s[1]=='=')
			    printf("\n greater than or equal");
			else
			    printf("\n greater than");
			break;
		case'<':
			if(s[1]=='=')
			    printf("\n less than or equal");
			else
			    printf("\n less than");
			break;
		case'=':
			if(s[1]=='=')
			    printf("\n equal to");
			else
			    printf("\n assignment");
		case'!':
			if(s[1]=='=')
			    printf("\n not equal to");
			else
			    printf("\n bit not");
			break;
		case'&':
			if(s[1]=='&')
			    printf("logical AND");
			else
			    printf("bitwise AND");
			break;
		case'|':
			if(s[1]=='|')
			    printf("\n logical OR");
			else
			    printf("\n bitwise OR");
			break;
		case'+':
			printf("\n addition");
			break;
		case'-':
			printf("\n subtraction");
			break;
		case'*':
			printf("\n multipliaction");
			break;
		case'/':
			printf("\n divison");
			break;
		case'%':
			printf("\n modulus");
			break;
		default:
			printf("\n not operator");
    }
}
