#include <stdio.h>
void main()
{
	int x,y,i;
	printf("\nenter the two numbers:");
	scanf("%d %d\n",&x,&y);
	for(i=1;i<=3;i++)
	{
	if(x>y)
	{
		printf("\n%d",x-y);
	}
	else
	{
		printf("\n%d",y-x);
	}
	}
	return 0;
}
