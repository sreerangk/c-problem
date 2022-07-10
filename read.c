#include<stdio.h>
void printName(char* name,int count){
    printf("%d : %s\n",count+1,name);
    count+=1;
    if(count<10)
        printName(name,count);
}
int main(){
    char name[100];
    printf("enter the name ");
    scanf("%s",name);
    printName(name,0);
    return 0;

}