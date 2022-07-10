/*program to find the frequency of element in the array*/
#include<stdio.h>
int main()
{
    int i,f=0,n,arr[100],a;
    printf("enter the maximum value of arry");
    scanf("%d",&n);
    printf("enter the number of element in array");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter to find frequncy number");
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(arr[i]==a)
            f++;
    }    
        printf("%d",f);
        
    
    return 0;
}