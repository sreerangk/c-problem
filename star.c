/*repeated piramid
     *
    ***
   *****
  *******
 *********
     *
    ***
   *****
*/
#include<stdio.h>
int main(){
    int i,j,n,k,l,m,a=0;
   
    printf("enter the limit ");
    scanf("%d",&n);
    printf("enter the piramid list ");
    scanf("%d",&l);
    while(a<l){
    for(i=1;i<=n;++i){
        for(j=n;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
        }
 
        printf("\n");
    }
    a=a++;
    }
}