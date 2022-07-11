#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
        if(a[n]%2!=0)
        o+=a[n];
    }
    printf("%d",o);
    return 0;
}