#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	char user = ' ';
	float a = 0, b = 100, c = 0;
	bool adivino = false;
	while(!adivino) {
		c = 0.5*(a+b);
		cout << "Tu numero es: " << c << " ?" << endl;
		cout << "dame una pista (<,>,=): ";
		cin >> user;
	    switch(user){
	    	case '>':
	    		a = c;
	    		break;
	    	case '<':
	    		b = c;
	    		break;
	    	default:
	    		cout << "jajaja encontre tu numero" << endl;
	    		adivino = true;
	    }
	}
	return 0;
}