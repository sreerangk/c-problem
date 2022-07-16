/*Read a random number and print decending order ?*/
#include <stdio.h>
#define MAXSIZE 10
 
void main()
{
    int array[MAXSIZE];
    int i, j, num, temp;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    /*   Bubble sorting begins */
   for(i=0;i<num;i++){
    for(j=i+1;j<num;j++){
        if(array[i]<array[j]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
}