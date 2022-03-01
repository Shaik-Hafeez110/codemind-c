#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,k,s=0;
    scanf("%d",&n);
    k=pow(n,2);
    while(k!=0)
    {
        r=k%10;
        s=s+r;
        k=k/10;
    }
    if(n==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}