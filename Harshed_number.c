#include<stdio.h>
int main()
{
    int n,r,z=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        z=z+r;
        n=n/10;
    }
    if(t%z==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
