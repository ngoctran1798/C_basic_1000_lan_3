#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=pow(i,3);
    }
    printf("S(%d) = %d",n,s);
}
