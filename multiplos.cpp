#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int a = 0;
	cout << "por favor ingrese un numero:" << endl;
	cin >> a;
	while(a < 101){
		cout << a << endl;
		a += 33;
	}
	return 0;
}