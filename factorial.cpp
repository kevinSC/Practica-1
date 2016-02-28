#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 1;
	cout << "por favor ingrese un numeor:" << endl;
	cin >> a;
	for (int i = 1; i <= a; i++)
		b *= i;
	cout << "el factorial de " << a << " es: " << b << endl;
	return 0;
}