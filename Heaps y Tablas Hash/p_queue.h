#include <iostream>
using namespace std;

class p_queue
{
private:
	int a[10000];
	int size;

	int parent(int i);
	int left(int i);
	int right(int i);
	void MaxHeapify(int A[], int n, int i);
	void BuildMaxHeap(int A[], int n);
	void heapSort(int A[], int n);
public:
	p_queue(int *A, int n);
	void insert(int x);
	int maximun(void);
	int extract_Max(void);
	void increase_Key(int i, int x);
};

//IMPLEMENTACIÓN
int p_queue::parent(int i)
{
	return (i - 1) / 2;
}

int p_queue::left(int i)
{
	return 2 * i + 1;
}

int p_queue::right(int i)
{
	return 2 * i + 2;
}

void p_queue::MaxHeapify(int A[], int n, int i)
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

void p_queue::BuildMaxHeap(int A[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		MaxHeapify(A, n, i);
	}
}

void p_queue::heapSort(int A[], int n)
{
	BuildMaxHeap(A, n);
	for (int i = n - 1; i > 0; i--)
	{
		swap(A[0], A[i]);
		MaxHeapify(A, n--, 0);
	}
}

p_queue::p_queue(int* A, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = A[i];
	size = n;
	BuildMaxHeap(a, size);
}

void p_queue::insert(int x)
{
	size++;
	a[size - 1] = x;
	int i = size - 1;

	while (i > 0 && a[parent(i)] < a[i])
	{
		swap(a[i], a[parent(i)]);
		i = parent(i);
	}
}

int p_queue::maximun()
{
	if (size <= 0)
		return -1;
	return a[0];
}

int p_queue::extract_Max()
{
	if (size <= 0)
		return -1;

	int max = a[0];
	a[0] = a[size - 1];
	size--;
	MaxHeapify(a, size, 0);
	return max;
}

void p_queue::increase_Key(int i, int x)
{
	a[i] = max(a[i], x);
	while (i > 0 && a[parent(i)] < a[i])
	{
		swap(a[parent(i)], a[i]);
		i = parent(i);
	}
}
