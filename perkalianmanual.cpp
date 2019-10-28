#include <iostream>

using namespace std;

int main() {
	int bil1(0), bil2(0);
		cout << "masukkan bilangan pertama(1-99) ";
		cin >> bil1;
		cout << "masukkan bilangan kedua (1-99) ";
		cin >> bil2;
		cout << bil1 << endl;
		cout << bil2 << endl;
		cout << "---x" << endl;
		if (bil1 > 0 && bil1 < 10) {
			if (bil2 > 0 && bil2 < 10) {
				cout << bil1 * bil2 << endl;
			}
			else if (bil2 > 10 && bil2 < 100) {
				cout << bil1 * (bil2 % 10) << endl;
				cout << bil1 * ((bil2 - (bil2 % 10)) / 10) * 10 << endl;
				cout << "----+" << endl;
				cout << bil1 * ((bil2 - (bil2 % 10)) / 10) * 10 + (bil1 * (bil2 % 10));
			}
			else
				cout << "error";
		}
		else if (bil1 > 10 && bil1 < 100) {
			if (bil2 > 0 && bil2 < 10) {
				cout << (bil1 % 10) * bil2 << endl;
				cout << ((bil1 - (bil1 % 10) * 10)) * bil2 << endl;
				cout << "----+" << endl;
				cout << (bil1 % 10) * bil2 + ((bil1 - (bil1 % 10) * 10)) * bil2 << endl;
			}
			else if (bil2 > 10 && bil2 < 100) {
				cout << bil1 * (bil2 % 10) << endl;
				cout << bil1 * (bil2 / 10) * 10 << endl;
				cout << "----+" << endl;
				cout << bil1 * (bil2 % 10) + bil1 * (bil2 / 10) * 10 << endl;

			}
			else
				cout << "error";
		}
		else
			cout << "error";

}

