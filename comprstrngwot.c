/*Write a program to compare two strings without using string functions.*/
#include<stdio.h>
void main()
{
	char str_one[20], str_two[20];
	int i, j, flag;
	
	printf("Enter string one:\t");
	scanf(" %s",&str_one);
	
	printf("Enter string two:\t");
	scanf(" %s", &str_two);
	
	i = 0;
	j = 0;
	flag = 0; 
	
	while(str_one[i] != '\0' || str_two[j] != '\0')
	{
		if(str_one[i] != str_two[j])
		{
			flag = 1;
			break;
		}
		i++;
		j++;
	}
	
	if(flag == 0)
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
}