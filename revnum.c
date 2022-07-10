#include<stdio.h>
int main(){
    int r,sum=0,n;
    printf("enter the limit ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/=10;
    }
    printf("%d",sum);
    return 0;
}
