// statements

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x >= 100)
		cout << "x is geq 100";
	else if (x > 0)
		cout << "x is positive";
	else
		cout << "whatever";
	return 0;
}
