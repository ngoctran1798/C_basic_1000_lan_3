#include<stdio.h>
void main()
{
int n,i,s=0;
scanf("%d",&n);
for(i=1;i<n;i++)
{
    if(i%2==1)
    {
        s+=i;
    }
}
printf("S(%d) = %d",n,s);
}
