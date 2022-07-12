#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,e=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
        if(a[n]%2==0)
        e+=a[n];
    }
    printf("%d",e);
    return 0;
}