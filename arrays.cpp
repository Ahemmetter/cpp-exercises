// arrays

#include <iostream>
using namespace std;

int foo [5] = {1,3,65,23,6};
int result, n;

void printarray (int arg[], int length) {
	for (int n=0; n<length; n++)
		cout << arg[n] << " ";
	cout << "\n";
}

int main()
{
	for (n=0; n<5; n++)
	{
		result += foo[n];
	}
	cout << result;
	int nocheinarray[] = {4,2,4,6,23,3};
	printarray (foo, 4);
	printarray (nocheinarray, 3);
	return 0;
}
