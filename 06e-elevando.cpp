#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	float a = 0,b = 0, c = 1;
	cout << "ingrese un numero:" << endl;
	cin >> a;
	cout << "ingrese otro numero:" << endl;
	cin >> b;
	for (int i = 0; i < b; i++)
		c *= a;
	cout <<  a << " elvado a la " << b << " es igual a: " << c << endl;
	return 0;
}