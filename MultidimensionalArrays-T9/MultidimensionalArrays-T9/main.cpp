#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int xy[5][5];


	for (int iy = 0; iy < 5; iy++) {
		for (int ix = 0; ix < 5; ix++) {
			xy[ix][iy] = rand() % 2;

			if (ix == 4) {
				cout << xy[ix][iy] << endl;
			}
			else {
				cout << xy[ix][iy] << " ";
			}
		}
	}

	system("pause");
	return 0;
}