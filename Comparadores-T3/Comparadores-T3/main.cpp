#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Comparador" << endl;
	cout << "A: " << endl;
	cin >> a;

	cout << "B: " << endl;
	cin >> b;

	cout << "Comparando... " << endl;
	if (a < b) {
		cout << "A < B" << endl;
	} else if (a == b) {
		cout << "A = B" << endl;
	} else {
		cout << "A > B" << endl;
	}

	system("pause");
	return 0;
}