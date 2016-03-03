#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int a = 0;
	int b = 0;
	cout << "por favor ingrese un numero:" << endl;
	cin >> a;
	b = a;
	while(b < 101){
		cout << b << endl;
		b += a;
	}
	return 0;
}