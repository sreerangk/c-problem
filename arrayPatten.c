#include<stdio.h>
char main(){
    char str[]="MALAYALAM";
    int i,j,length;
 
    length=strlen(str);
 
    for(i=length;i>0;i--){        
        for(j=0;j<i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
}