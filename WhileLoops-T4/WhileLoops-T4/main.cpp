#include <iostream>
using namespace std;

int main() {
	double a, z;
	a = 0;
	z = 0;
	/*loop infinito
	while(true){
	}
	*/
	//
	while (a != -1) {
		z += a;
		cin >> a;
	}
	/*
	for (int i = 0; i < 10; i++) {
		cout << "O Resultado: " << endl;
	}
	*/

	//cout << "O Resultado: " << z << endl;
	system("pause");
	return 0;
}