#include<stdio.h>

#define LENGHT 6

typedef struct 
{
	int array[LENGHT];
	int len;
}Array;

void insertionSort(Array *arr);
void show(Array *arr);

void main()
{
	Array arr={{5,2,4,6,1,3},LENGHT};
	printf("%s\n","INPUT:" );
	show(&arr);
	insertionSort(&arr);
	printf("%s\n","OUTPUT:" );
	show(&arr);
}

void insertionSort(Array *arr){
	int indexI = 0;
	int indexJ = 0;
	int key;
	for( indexI = 1 ; indexI < arr->len ; indexI++ ){
		key = arr->array[indexI];
		indexJ = indexI - 1;
		while((indexJ >= 0) && (arr->array[indexJ] < key) ){
			arr->array[indexJ+1] = arr->array[indexJ];
			indexJ--;
		}
		arr->array[indexJ+1] = key;
	}
}
void show(Array *arr){
	int i = 0;
	for( ; i < arr->len ; i++){
	printf("%d\t",arr->array[i] );
	}
	printf("\n");
}