#include<stdio.h>
void main()
{
        int n,k,i,res=1;
        printf("enter the  n and k value ");
        scanf("%d %d",&n,&k);
        for(i=0;i<=n;i++)
        {
       res=res*n;
        }
        printf("%d",res);
        return 0;
}
