#include <iostream>
using namespace std;

int main() {
	int *p;
	int n = 0;
	int b = 10;
	p = &n;
	cout << *p << endl;
	p = &b;
	cout << *p << endl;

	system("pause");
	return 0;
}