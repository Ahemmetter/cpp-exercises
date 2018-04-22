// functions

#include <iostream>
using namespace std;

int addition (int a, int b)
{
	int r;
	r = a + b;
	return r;
}

void print()
{
	cout << "lalal";
}

int main()
{
	int z;
	z = addition (5,3);
	cout << "Ergebnis: " << z;
	print();
}

