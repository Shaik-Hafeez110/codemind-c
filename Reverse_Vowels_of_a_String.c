#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],b[20];
    int i,k=0;
    scanf("%[^
]s",&s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='o' || s[i]=='O'|| s[i]=='A'|| s[i]=='a'|| s[i]=='e'|| s[i]=='E'|| s[i]=='i'|| s[i]=='I'|| s[i]=='u'|| s[i]=='U')
        {
            b[k]=s[i];
            k++;
        }
    }    
    k-=1;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='o' || s[i]=='O'|| s[i]=='A'|| s[i]=='a'|| s[i]=='e'|| s[i]=='E'|| s[i]=='i'|| s[i]=='I'|| s[i]=='u'|| s[i]=='U')
        {
            s[i]=b[k];
            k--;
        }
    }
    printf("%s",s);
    return 0;    
}