// $$$$$$$$$$
// $ $    $ $
// $  $  $  $
// $   $$   $
// $   $$   $
// $  $  $  $
// $ $    $ $
// $$      $$
// $        $
// $$$$$$$$$$
#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++){
        
            if(i==1||i==10||j==1||j==10||j==10-i||j==1+i){
                printf("$");
            }else
            printf(" ");
            
        }
        printf("\n");
    }
}