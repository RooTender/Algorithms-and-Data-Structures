#include "Sort.h"
#define arrLength this->arrLength
#define arr this->arr

Sort::Sort(int *arrayPointer, int &arrayLength)
{
	arr = arrayPointer;
	arrLength = arrayLength;
}
void Sort::swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Sort::selectionSort()
{
	for (int i = 0; i < arrLength - 1; i++)
	{
		int minIndex = i; // Firstly smallest is the first value of array

		for (int j = 1; j < arrLength; j++)
			// If (arr[j] < arr[minIndex]) -> set the newest smallest value index
			if (arr[j] < arr[minIndex])
				minIndex = j;

		// Swap the values by indexes
		swap(arr[i], arr[minIndex]);
	}
}
void Sort::bubbleSort()
{
	for (int i = 0; i < arrLength; i++) // Repeat checking the array
		for (int j = 0; j < arrLength - 1; j++) // Scan the array
			if (arr[j] > arr[j + 1]) // If (arr[j] > arr[j + 1]) -> swap values
				swap(arr[j], arr[j + 1]);
}
void Sort::insertionSort()
{
	for (int i = 0; i < arrLength - 1; i++)
	{
		int lastIndex = i; // To remember last sorted position

		// Repeat swapping values to fix the array
		/// 'i' must be greater than zero. Otherwise 'arr[-1]' will be checked
		while (i >= 0 && arr[i] > arr[i + 1])
		{
			swap(arr[i], arr[i + 1]);
			--i;
		}

		i = lastIndex; // Set modified 'i' back to normal state
	}
}

Sort::~Sort()
{
}
