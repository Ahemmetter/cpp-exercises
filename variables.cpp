// variables

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// declaring variables:
	int value;
	cin >> value; //Eingabe
	float a(5.0f);
	int b(0x52); //hex
	float result;
	int c = 3; //c-artig
	a = (int) a;
	float x = (a=3, a+2);
	string mystring;
	mystring = "Lalalla";
	string myotherstring = "simsala \
	bim";
	string concat;
	b += 032;
	++c;
	result = x-b-c+value;
	concat = mystring + myotherstring;
	
	bool r;
	r = (7>=5) && (3!=3);
	
	//Ergebnis printen
	cout << result << endl;
	cout << concat << a << "\n" << mystring << endl;
	cout << r << endl;
	
	//Programm beenden
	return 0;
}
