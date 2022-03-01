#include<stdio.h>
int main()
{
    int n,i,z=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        if(n%i==0)
        z=z+1;
    }
      if(z==2)
        {
            printf("prime");
            return 0;
        }    
       else
        {
            printf("not a prime");
            return 0;
        }    
    return 0;
}