#include<stdio.h>
int main()
{
    int num1,num2,lcm,temp,gcd;
    scanf("%d%d",&num1,&num2);
    int a=num1,b=num2;
    while(num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    gcd=num1;
    lcm=(a*b)/gcd;
    printf("%d",lcm);
    return 0;
}