#include<stdio.h>
int main(){
    char str[100];
    int i,j,length=0;
    printf("enther a string");
    scanf("%s",str);
    for(i=0; i!="\0";i++){
        length++;
    }
    for(i=1;i<=length;i++){
        for(j=1;j<=i;j++){
            printf("%s",j);
        }
        printf("\n");
    }
}