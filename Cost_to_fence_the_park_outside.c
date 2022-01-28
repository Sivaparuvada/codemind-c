#include<stdio.h>
int main()
{
    int L,B,W,C,area,Tot_Cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=((L+2*W)*(B+2*W))-L*B;
    Tot_Cost=area*C;
    printf("%d",Tot_Cost);
    return 0;
}