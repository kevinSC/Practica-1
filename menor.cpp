#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	float a,b = 0;
	cout << "por favor ingrese un numero:" << endl;
	cin >> a;
	cout << "por favor ingrese un numero:" << endl;
	cin >> b;
	if(a < b)
		cout << a << " es menor" << endl;
	else if (a > b)
		cout << b << " es menor"<< endl;
	return 0;
}