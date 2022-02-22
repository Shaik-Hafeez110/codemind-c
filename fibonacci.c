#include<stdio.h>
int x(int);
int main()
{
    int n,i,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=x(i);
        printf("%d ",z);
    }
}
int x(int n)
{
    if(n==1)
       return 0;
    else if(n==2)
        return 1;
    else
        return x(n-1)+x(n-2);
}