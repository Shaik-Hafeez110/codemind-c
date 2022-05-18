#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,n,z;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    n=z%m;
    printf("%d",n);
}