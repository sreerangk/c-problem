#include<stdio.h>
int main(){
    int i,a,n,r,sum=0,k;
    printf("enter the limit ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("%d",n);
    return 0;
}