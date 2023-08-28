#include<stdio.h>
#include<ctype.h>
main()
{
	char a[10];
	int flag,i=1;
	printf("\n enter an identifier:");
	gets(a);
	if(isalpha(a[0]))
	    flag=1;
	    printf("\n not a valid identifier");
	    while(a[i]!='\0')
	    {
	    	if(!isdigit(a[i])&&!isalpha(a[i]))
	    	{
	    		flag=0;
	    		break;
			}
			i++;
		}
		if(flag==1)
		{
			printf("\n valid identifier");
		}
}
