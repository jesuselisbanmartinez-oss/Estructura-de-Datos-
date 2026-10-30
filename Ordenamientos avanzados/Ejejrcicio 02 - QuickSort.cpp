#include <iostream>
using namespace std;

int partition(int* A, int p, int r)
{
	//El pivote
	int x = A[r];
	//Indice de los menores
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

void quickSort(int* A, int p, int r)
{
	int q; //Para almacenar el índice del pivote
	//Caso Base
	if (p < r)
	{
		q = partition(A, p, r);//Devuelve el indice del pivot
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

int main()
{
	int* arr = new int[9] {9, 3, 5, 6, 1, 8, 4, 7, 2};
	int n = 9;

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
