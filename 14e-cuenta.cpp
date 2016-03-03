#include <iostream>
using namespace std;
//forma 1
	//int main(int argc, char const *argv[]){
	//	int a = 1, b = 50;
	//	while(a <= 50){
	//		cout << a << " " << b << endl;
	//		a++;
	//		b--;
	//	}
	//	return 0;
	//}
//forma2
int main(int argc, char const *argv[]){
	for (int i = 1, j = 50; i < 51; i++, j--)
		cout << i << " " << j << endl;
	return 0;
}

