
#include <iostream>
using namespace std;

void Merge(int* Vector1, int* Vector2, int* Vector, int n)
{
	int i = 0, j = 0, k = 0;
	int mitad = n / 2;
	while (i<mitad && j<n-mitad)
	{
		if (Vector1[i] < Vector2[j]) {
			Vector[k] = Vector1[i];
			i++; k++;
		}
		else {
			Vector[k] = Vector2[j];
			j++; k++;
		}
	}

	while (i < mitad) {
		Vector[k] = Vector1[i];
		i++; k++;
	}

	while (j < n - mitad) {
		Vector[k] = Vector2[j];
		j++; k++;
	}
}

void MergeSort(int* Vector, int n)
{
	if (n > 1)
	{
		int mitad = n / 2;
		int* Vector1 = new int[mitad];
		int* Vector2 = new int[n - mitad];

		for (int i = 0; i < mitad; i++)
		{
			Vector1[i] = Vector[i];
		}
		for (int i = mitad; i < n; i++)
		{
			Vector2[i - mitad] = Vector[i];
		}

		MergeSort(Vector1, mitad);
		MergeSort(Vector2, n - mitad);
		Merge(Vector1, Vector2, Vector, n);
	}
}

int main()
{
	int* arr = new int[9] {9, 3, 4, 2, 1, 8, 7, 6, 5};
	int n = 9;

	MergeSort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
