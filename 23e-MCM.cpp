#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int A = 0;
	int B = 0;
	int c = 0;
	int m1 = 0;
	int m2 = 0;
	int maX = 0;
	int M = 0;
	int m = 0;
	cout << "ingrese un numero:" << endl;
	cin >> A;
	cout << "ingrese otro numero:" << endl;
	cin >> B;
	if (A > B){
		M = A;
		m = B;
	}
	else{
		M = B;
		m = A;
	}
	while((c > m) == false){
		c ++;
		m1 = M % c;
		m2 = m % c;
		if ((m1 == 0) && (m2 == 0))
		{
			maX = c;
		}
	}
	cout << (A*B)/maX << endl;
	return 0;
}