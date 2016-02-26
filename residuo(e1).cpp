#include <iostream>

using namespace std;
int main(){
	int x = 0;
	int y = 0;
	cout << "por favor ingrese un numero enteroA:" << endl;
	cin >> x;
	cout << "por favor ingrese un numero entero B (B diferente de 0):" << endl;
	cin >> y;
	cout << "El residuo de A/B es: " << x % y<< endl;
	return 0;
}