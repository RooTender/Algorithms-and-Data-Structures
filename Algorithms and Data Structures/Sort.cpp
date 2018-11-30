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
void Sort::merge(int &firstIndex, int &middleIndex, int &lastIndex)
{
	// Create clone of array for later use
	int *tempArray = new int[arrLength];
	for (int i = 0; i < arrLength; i++)
		tempArray[i] = arr[i];

	/* 
	   Here pointers are simple iterators to subarrays. 
	   It means that first 'pointer' indicates values in the first part of an array
	   and the second one indicates values in the second part of an array...
	*/
	int iterator = firstIndex, firstPointer = firstIndex, secondPointer = middleIndex + 1; // Pointers to arrays

	// Sorting algorithm
	while (firstPointer <= middleIndex && secondPointer <= lastIndex)
	{
		// Work on values of the MAIN array. Comparsions are being made on tempArray. Edits on main array!
		if (tempArray[firstPointer] < tempArray[secondPointer]) // example [2, ...] [4, ...] -> (2 < 4)
			arr[iterator++] = tempArray[firstPointer++];
		else
			arr[iterator++] = tempArray[secondPointer++];
	}

	// Assume that the second array is empty -> insert the rest values of first array to the output
	while (firstPointer <= middleIndex) arr[iterator++] = tempArray[firstPointer++];
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
	for (int i = 0; i < arrLength; i++)			// Repeat checking the array
		for (int j = 0; j < arrLength - 1; j++)	// Scan the array
			if (arr[j] > arr[j + 1])			// If (arr[j] > arr[j + 1]) -> swap values
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
void Sort::mergeSort(int firstIndex, int lastIndex)
{
	if (lastIndex == -1) lastIndex = arrLength - 1;	//First Initialization

	if (firstIndex < lastIndex) // Repeat array contains only one element
	{
		int middleIndex = (firstIndex + lastIndex) / 2;

		// Divide the Array on subarrays
		mergeSort(firstIndex, middleIndex);	// Create left array
		mergeSort(middleIndex + 1, lastIndex); // Create right array

		merge(firstIndex, middleIndex, lastIndex); // Sort array and merge values
	}
}

Sort::~Sort()
{
}
