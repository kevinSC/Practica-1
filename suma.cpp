#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 1;
	int c =0;
	while( n != 0){
		cout << "por favor ingrese un numero:" << endl;
		cin >> n;
		c += n;
	}
	cout << "la suma de los numeros es: " << c << endl;
	return 0;
}