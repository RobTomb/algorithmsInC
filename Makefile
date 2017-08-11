insertionSort:insertionSort.c
	gcc -o insertionSort insertionSort.c
	gcc -o test test.c
clear:
	rm -f insertionSort test 2-1-4	selectionSort