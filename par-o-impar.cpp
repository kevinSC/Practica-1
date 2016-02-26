#include <iostream>

using namespace std;


int main(int argc, char const *argv[]){
	int n;
	cout << "Por favor ingrese un numero entero: " << endl;
	cin >> n;
	if(n % 2 == 0)
		cout << n << " es par" << endl;
	else
		cout << n << " no es par" << endl;
	return 0;
}
