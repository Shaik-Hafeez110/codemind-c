#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            printf("%c ",j+64);
        }
        printf("
");
    }
    return 0;
}