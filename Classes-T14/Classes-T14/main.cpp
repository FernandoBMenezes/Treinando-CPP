#include <iostream>
using namespace std;
class Ponto {
private:
	int x, y;
public:
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void set(int ix, int iy) {
		x = ix;
		y = iy;
	}
};
int main() {
	Ponto p1, p2;
	p1.set(2,4);
	p2.set(5,7);
	cout << p1.getX() << " " << p1.getY() << endl;
	cout << p2.getX() << " " << p2.getY() << endl;

	system("pause");
	return 0;
}