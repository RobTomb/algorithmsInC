#include<stdio.h>
int main()
{
	/* code */
	int A[] = {1,1,1,1};
	int B[] = {1,0,1,0};
	int C[5];
	int i = 0;
	int flag = 0, key;
	for( i = 3 ; i >= 0 ; i-- ){
		key = A[i]+B[i]+flag;
		C[i+1] = key % 2;
		flag = (int) key / 2;
	}
	C[0] = flag;
	for( i = 0 ; i < 5 ; i++ ){
		printf("%d\t",C[i] );
	}

	return 0;
}