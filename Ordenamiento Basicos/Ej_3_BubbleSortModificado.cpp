#include<iostream>
using namespace std;

void BubbleSortModificado(int a[], int n)
{
	bool ordenado;
	for (int i = 0; i < n; i++)
	{
		ordenado = true;
		for (int j = 0; j < n - (i + 1); j++)
		{
			if (a[j] > a[j + 1])
			{
				int aux = a[j];
				a[j] = a[j + 1];
				a[j + 1] = aux;
				ordenado = false;
			}
		}
		id(ordenado)break;
	}
}
int main()
{
	int numeros[] = { 4,7,1,2,9,8,5,3,6 };
	int N = 9;

	BubbleSortModificado(numeros, N);
	int j = 0;
	while (j < N)
	{
		cout << numeros[j] << " ";
		j++;
	}

	return 0;
};
