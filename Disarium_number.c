#include<stdio.h>
#include<math.h>
int main()
{
    int n,z=0,r,t,d;
    scanf("%d",&n);
    t=n;
    d=(int)log10(n)+1;
    while(n>0)
    {
        r=n%10;
        z=z+ceil(pow(r,d));
        n=n/10;
        d--;
    }
    if(z==t)
        printf("True");
    else
       printf("False");
    return 0;   
}