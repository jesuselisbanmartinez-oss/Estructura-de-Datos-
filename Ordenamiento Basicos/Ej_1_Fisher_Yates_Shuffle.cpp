#include <iostream>
using namespace std;

int main()
{
	srand(time(nullptr));
	const char* barajas[] = { "A","F","C","X","R" };
	int N = 5;

	for (int i = N - 1; i > 0; i--)
	{
		int j = (rand() % (i + 1));
		swap(barajas[j], barajas[i]);
	}

	
	int x = 0;
	while (x < N)
	{
		cout << barajas[x] << " ";
		x++;
	}

	return 0;
}
