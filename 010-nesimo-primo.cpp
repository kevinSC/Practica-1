#include <iostream>
using namespace std;
bool primo(int i);
int main(int argc, char const *argv[]){
	int n=0;
	int c=0;
	int i =0;
	int p = 0;
	cout <<"escribe cual n-esimo numero primo deseas ver:" << endl;
	cin >> n;
	while(c < n) {
	    if(primo(i)){
	    	p = i;
	    	c ++;
	    }
		i ++;
	}
	cout << "el " << n << " primo es " << p << endl;
	return 0;
}
bool primo(int i){
	if (i % 2 == 0 )
		return false;
	else
		return true;
}