#include<stdio.h>
main()
{
	char s;
	int line=0,spaces=0,characters=0;
	printf("enter program(enter ctrl+z after finishing the program)");
	while((s=getchar())!=EOF)
	{
		if(s==' '||s=='\t')
		    spaces++;
		else if(s=='\n')
		    line++;
		else if(s!=' '&&s!='\n')
		    characters++;
	}
	printf("\n no of spaces:%d",spaces);
	printf("\n no of lines:%d",line);
	printf("\n no of characters:%d",characters);
}
