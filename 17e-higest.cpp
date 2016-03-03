#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int n = 1;
	int c =0;
	while( n != 0){
		cout << "por favor ingrese un numero:" << endl;
		cin >> n;
		if (c < n)
			c = n;
	}
	cout << "elmayor numero es: " << c << endl;
	return 0;
}