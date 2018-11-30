#pragma once
class Sort
{
private:
	int *arr, arrLength;
	void swap(int &a, int &b);
	void merge(int &firstIndex, int &middleIndex, int &lastIndex); // middleIndex is between two separated arrays
public:
	Sort(int *arr, int &arrLength);
	void selectionSort();
	void bubbleSort();
	void insertionSort();
	void mergeSort(int firstIndex = 0, int lastIndex = -1);	// -1 means undefined! -> First initialization
	~Sort();
};
