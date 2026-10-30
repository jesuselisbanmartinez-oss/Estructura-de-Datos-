#include<iostream>
using namespace std;

void metodoporSelection(int* v, int n)
{
	int pMenor, menor;
	for (int i = 0; i < n - 1; i++)
	{
		menor = v[i];
		pMenor = i;

		for (int j = i + 1; j < n; j++)
		{
			if (v[j] < menor)
			{
				menor = v[j];
				pMenor = j;
			}
		}
		if (pMenor != i)
		{
			int temp = v[pMenor];
			v[pMenor] = v[i];
			v[i] = temp;
		}
	}
}

int main()
{



	return 0;
}

