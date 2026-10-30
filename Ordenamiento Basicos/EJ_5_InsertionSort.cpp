#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
	int aux, k;
	for (int i = 1; i < n; i++)
	{
		aux = a[i];
		k = i - 1;
		while (k >= 0 && aux < a[k])
		{
			a[k + 1] = a[k];
			k--;
		}
		a[k + 1] = aux;
	}
}

int main()
{
	int numeros[] = { 4,5,2,7,8,1,0,3,6 };
	int N = 9;
	InsertionSort(numeros, N);

	int j = 0;
	while (j < N)
	{
		cout << numeros[j] << " ";
		j++;
	}
	cin.get();
	return 0;
}