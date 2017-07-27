#include<stdio.h>
#define LENGTH	6
typedef struct 
{
	int array[LENGTH];
	// int array[6];
	int len;
	// int len = sizeof(array) / sizeof(int);
}Array;
void main()
{
	/* code */
	Array *array,arr={{5,2,4,6,1,3},6};
	array=&arr;
	printf("%d\n",array->len );
}