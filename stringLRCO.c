/*Write a menu driven program to perform following Operations without using Library
functions.
1. STRING LENGTH
2. STRING CONCATENATION
3. STRING REVERSE
A. The program should not end until the user exits the program by giving an input to
the program to exit. The menu Should contain an option to exit.
*/
#include<stdio.h>
int main(){
    char a,d,i;
    char str[100],ch;
    do{
    printf("enter the choise :\n1.for string length\n2.for string concatenation\n3.for stringreverse\n4.for exit\n   ");
    scanf("%d",&a);
    if(a==4){
        printf("you are exit ");
    }
    else if(a==1){
        printf("enter a string ");
        scanf("%s",&str);
        for(i=0; str[i] != '\0' ; i++){
        }
        printf("length of the string :%d",i);
    }
    else if (a==2){
        int i,k,j;
        char t[100],first[100],second[100];
        printf("enter the 1st string ");
        scanf("%s",&first);
        printf("enter the 2st string ");
        scanf("%s",&second);     
        for(i=0;first[i]!='\0';i++){
        } 
     
        for(j=0;second[j]!='\0';i++,j++){
        
        first[i]=second[j];
        }
        first[i]='\0';
        printf("%s",first);
    }
    else if(a==3){
        int i,l,j=0;
        char temp,str[100],str1[100];
        printf("enter the string :");
        scanf("%s",&str);
        for(i=0;str[i]!='\0';i++){
        l=i;  
        }
        for(i=0;i<=l/2;i++){
            temp=str[i];
            str[i]=str[l-i];
            str[l-i]=temp;
        }   
        printf("reverse string is %s",str);
    }
    else{
    printf("please choose correct number ");

    }
    printf ("\nDo you want to repeat the operation Y/N: ");
    scanf (" %c", &ch);
    
    }
    while (ch == 'y' || ch == 'Y');
}

