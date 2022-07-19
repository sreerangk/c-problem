#include <stdio.h>

#define MAX_SIZE 100    // Maximum array size


int main()
{
    int arr[MAX_SIZE];  // Declares array of size 100
    int i, size, count = 0;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);


    /* Input array elements */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Count total negative elements in array
     */
    for(i=0; i<size; i++)
    {
        /* Increment count if current array element is negative */
        if(arr[i] < 0)
        {
            count++;
        }
    }

    printf("\nTotal negative elements in array = %d", count);

    return 0;
}