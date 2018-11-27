#include <cstdio>
#include "Sort.h"

void printArray(int *arr, int &arrLength)
{
	for (int i = 0; i < arrLength; i++)
		printf_s("%d, ", arr[i]);
}

int main()
{
	// Define array to work on...
	int arrLength;
	scanf_s("%d", &arrLength);

	int* arr = new int[arrLength];
	for (int i = 0; i < arrLength; i++)
		scanf_s("%d", &arr[i]);

	Sort* sorter = new Sort(arr, arrLength);
	sorter->insertionSort();

	printArray(arr, arrLength);

	return 0;
}