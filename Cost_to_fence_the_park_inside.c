#include<stdio.h>
int main()
{
    int x,y,a,b,t;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    if((2*x)<a&&(2*x)<b)
    {
        t=((a-(2*x))*(b-(2*x)));
    }
    else{
    printf("Impossible");
    return 0;}
    if(t>=0)
    printf("%d",(((a*b)-t)*y));
    else
    printf("Impossible");
    return 0;
}
