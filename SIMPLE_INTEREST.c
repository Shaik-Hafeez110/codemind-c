#include<stdio.h> 
main()
{
    int p, t, r;
    //printf("enter principle, time, rateofinterest") ;
    scanf("%d%d%d",&p,&t,&r);
    printf("%d",(p*t*r)/100);
    return 0;
}