#include<stdio.h>
void show(int arr[]){
	int i = 0 ;
	for(i = 0 ; i < 4 ; ++i){
		printf("%d\t", arr[i]);
	}
}
int main()
{
	int arrA[] = {4,3,2,1};
	int index = 0;
	int i , j;
	for (i = 0; i < 4; ++i){
		index = i ;
		for ( j = i + 1; j < 4; ++j){
			if( arrA[index] > arrA[j] )
				index = j;
		}
		if( index != i ){
			arrA[i] = arrA[i] + arrA[index];
			arrA[index] = arrA[i] - arrA[index];
			arrA[i] = arrA[i] - arrA[index];
		}
	}
	show(arrA);
	return 0;
}

