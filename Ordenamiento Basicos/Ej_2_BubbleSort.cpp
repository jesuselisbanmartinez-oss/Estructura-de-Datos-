#include <iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = i + 1; k < n; k++)
		{
			if (a[i] > a[k])
			{
				int aux = a[i];
				a[i] = a[k];
				a[k] = aux;
			}
		}
	}
}

void print(int* v, int n)
{
	for (int i = 0; i < n; i++)
		cout << " " << v[i];
	cout << endl;
}

int main()
{
	srand(time(0));
	int n = 10;
	int* v = new int[n];
	//Ingresando elementos al arreglo
	for (int i = 0; i < 10; ++i)
	{
		v[i] = (rand() % 100);
		cout << " " << v[i];
	}
	cout << endl;
	//Ordenanto el arreglo, usando BubbleSort
	BubbleSort(v, n);
	print(v, n);
	return 0;
}
