#include <stdbool.h>
#include <stdio.h>

void swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

void bubblesort(int arr[], int n) 
{ 
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 1; i < n; i++) {
			if (arr[i - 1] > arr[i]) {
				swap(&arr[i - 1], &arr[i]);
				swapped = true;
			}
		}
		n--;
	}
} 

int main(void)
{
	int arr[] = {4, 1, 0, 2, 5, 3, 8, 9, 7, 6};
	size_t arrlen = sizeof(arr) / sizeof(int);
	bubblesort(arr, arrlen);
	
	for (int i = 0; i < arrlen; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
