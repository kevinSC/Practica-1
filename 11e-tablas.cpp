#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int c;
	cout << "por favor ingrese el numero de cual desea ver su tabla de multiplicar:" << endl;
	cin >> c;
	for (int i = 1; i < 11; i++)
		cout << i <<" x " << c << " = " << c*i << endl;
	return 0;
}