#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int n = 0;
	double Spi = 0;
	cout << "ingrese el numero hasta el cual desea realizar la sumatoria:" << endl;
	cin >> n;
	for (int i = 1; i < n+1; i++){
		double pi = ((2*i)-1);
		pi = 1/pi;
		if (i % 2==0)
			pi *=-1;
		else
			pi = abs(pi);
		Spi += pi;
	}
	cout << "Pi es aproximadamente: " << 4*Spi << endl;
	return 0;
}