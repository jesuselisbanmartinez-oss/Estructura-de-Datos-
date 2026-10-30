#include <iostream>
#include "p_queue.h"
using namespace std;

int main()
{
	int A[10] = { 10,9,8,7,6,5,4,3,21,12 };
	p_queue q1(A, 10);

	cout << q1.maximun() << endl;
	q1.insert(30);
	q1.insert(25);
	cout << q1.maximun() << endl;
	q1.extract_Max();
	cout << q1.maximun() << endl;
	q1.increase_Key(0, 55);
	cout << q1.maximun() << endl;
	return 0;
}
