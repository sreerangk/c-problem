/*
      1
     1 1
    1 2 1
   1 2 3 1
  1 2 3 4 1
  */
#include<stdio.h>
int main(){
    int k,i,j,size;
    printf("enter the size of piramid ");
    scanf("%d",&size);
    for(i=1;i<=size;i++){
        for(j=i;j<=size;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(k==i){
                printf(" 1");
            }
            else
            printf(" %d",k);
        }
        printf("\n");
    }
}