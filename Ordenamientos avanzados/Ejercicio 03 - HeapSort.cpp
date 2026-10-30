#include <iostream>
using namespace std;

int parent(int i)
{
	return (i-1) / 2;
}

int left(int i)
{
	return 2 * i + 1;
}

int right(int i)
{
	return 2 * i + 2;
}

void MaxHeapify(int A[], int n, int i)
{
	int l = left(i);
	int r = right(i);
	int largest(0);
	if (l <= (n - 1) && A[l] > A[i])
		largest = l;
	else
		largest = i;

	if (r <= (n - 1) && A[r] > A[largest])
		largest = r;

	if (largest != i)
	{
		swap(A[i], A[largest]);
		MaxHeapify(A, n, largest);
	}
}

void BuildMaxHeap(int A[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		MaxHeapify(A, n, i);
}

void HeapSort(int A[], int n)
{
	BuildMaxHeap(A, n);
	for (int i = n - 1; i > 0; i--)
	{
		swap(A[0], A[i]);
		MaxHeapify(A, --n, 0);
	}
}

int main()
{
	int* arr = new int[9] {9, 1, 3, 8, 6, 7, 5, 4, 2};
	int n = 9;

	HeapSort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
