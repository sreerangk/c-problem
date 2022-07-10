/*Write a Program to copy one string to another without using String Functions?*/
#include<stdio.h>
int main(){
    int i;
    char str[100],str1[100];
    printf("please enter string ");
    scanf("%s",&str);
    printf("the string str1 is :%s\n",str);
    for(i=0; str[i]!='\0';i++){
        str1[i]=str[i];
    }
    str1[i]='\0';
    printf("string 2 is :%s",str1);
}