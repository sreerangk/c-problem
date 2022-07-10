/* 
     *
    **
   ***
  ****
 *****
 *****
  ****
   ***
    **
     *
*/    
#include<stdio.h>
int main(){
    int i,j,k,n;
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
    printf("\n");
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=5;k>=i;k--){
            printf("*");
        }
    printf("\n");
    }
}