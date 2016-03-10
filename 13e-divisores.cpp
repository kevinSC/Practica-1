#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cout << "por favor ingrese el numero al cual desea calcular sus divisores:" << endl;
	cin >> x;
	for (int i = 1; i < x+1; i++){
		if ( x%i == 0)	
			cout << i << endl;
	}
	return 0;
}