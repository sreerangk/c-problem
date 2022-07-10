#include<stdio.h>
void main(){
char i,n[100];
printf("enter string ");

    scanf("%s",&n);

for(i=0;n[i]!='\0';i++){
    if(n[i]>='A' && n[i]<='Z'){
        n[i]=n[i]+32;
    }
}
printf("%s",n);
}