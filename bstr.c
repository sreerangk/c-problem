#include<stdio.h>
int main(){
    int i,j,limit,l=1;
    printf("Enter a number ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=1;j<=i;j++){
            printf("%d",l);
            ++l;
        }
        printf("\n");
    }
}