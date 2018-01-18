#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int b[5] = {1, 2, 3, 4 , 5};
	for (int i = 0; i < 5; i++) {
		cout << "Entre com numero:(" << b[i] << "): "; cin >> b[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << "Esta preenchido com: " << b[i] << endl;
	}

	system("pause");
	return 0;
}