#include<stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j||j==n||j==1)
            printf("* ");
            else
            printf("  ");
        }
        printf("
");
    }
    return 0;
}

