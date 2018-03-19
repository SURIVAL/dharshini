#include <stdio.h>
void main()
{
	int n,i;
	printf("enter the value");
	scanf("%d",&n);
	int n1,rem;
	while(n!=1)
	{
	rem=n%2;
	n1=n/2;
	printf("%d\n",n1);
	n=rem;
	break;
	}
	return 0;
}
