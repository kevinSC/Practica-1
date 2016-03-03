#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int x = 0;
	bool a = true;
	cout << "ingrese un numero:";
	cin >> x;
	for (int i = 2; i < x; i++){
		if (x % i == 0){
			a = false;
			break;
		}
	}
	if (a)
		cout << x << " es primo" << endl;
	else
		cout << x << " NO es primo" << endl;

	return 0;
}