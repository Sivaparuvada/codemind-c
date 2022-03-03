#include<stdio.h>
int main()
{
    int num,sum=0,m=1,temp,d;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        d=temp%10;
        sum=sum+d;
        m=m*d;
        temp=temp/10;
    }
    if(sum==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}