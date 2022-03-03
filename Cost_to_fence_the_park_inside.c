#include<stdio.h>
int main()
{
    int l,b,w,c,L,B,f;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    L=l-2*w;
    B=b-2*w;
    f=((l*b)-(L*B))*c;
    if(L<=0 || B<=0)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",f);
    }
}