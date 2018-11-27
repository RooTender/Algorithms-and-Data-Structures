#pragma once
class Sort
{
private:
	int *arr, arrLength;
	void swap(int &a, int &b);
public:
	Sort(int *arr, int &arrLength);
	void selectionSort();
	void bubbleSort();
	void insertionSort();
	~Sort();
};

