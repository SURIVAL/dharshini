#include <stdio.h>
void main()
{
	char str[30];
	int x,i;
	printf("enter the string:");
	scanf("%s",str);
	x=strlen(str);
	if(x%2==0)
	{
		str[x/2]='*','*';
		str[(x/2)-1]='*','*';
	}
	else
	{
		str[x/2]='*';
	}
	printf("\n%s",str);
	return 0;
}
