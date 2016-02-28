#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a = 0,b = 0;
	cout << "por favor ingrese un numero entero:" << endl;
	cin >> a;
	b = (a * (a + 1)) / 2;
	cout << "la sumatoria de 0 a " << a << " es " << b << endl;
	return 0;
}