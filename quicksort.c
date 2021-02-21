#include <stdio.h>

void swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

void quicksort(int *arr, int l, int r)
{
	if (l >= r)
		return;
	
	int pivot = arr[r];
	int i = l;
	for (int j = l; j < r; j++) {
		if (arr[j] < pivot) {
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[r]);

	quicksort(arr, l, i - 1);
	quicksort(arr, i + 1, r);
}

int main(void)
{
	int arr[] = {4, 1, 0, 2, 5, 3, 8, 9, 7, 6};
	size_t arrlen = sizeof(arr) / sizeof(int);
	quicksort(arr, 0, arrlen - 1);
	
	for (int i = 0; i < arrlen; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
