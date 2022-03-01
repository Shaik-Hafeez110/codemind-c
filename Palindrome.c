#include<stdio.h>
int main()
{
    int n,z=0,r,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        z=(z*10)+r;
        n=n/10;
    }
    if(z==x)
        printf("True");
    else
       printf("False");
    return 0;   
}