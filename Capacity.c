#include<stdio.h>
int main()
{
    int t,s,b,cap;
    scanf("%d%d%d",&t,&s,&b);
    cap=(t*s*b*512*2)/1024;
    printf("%d KB",cap);
}