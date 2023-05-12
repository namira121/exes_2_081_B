#include <iostream>
using namespace std;

int mira[104]; //array
int i; //elemen array
int n; //indeks elemen

void input() {
	while (true) {
		cout << "Masukkan panjang element array :";
		cin >> n;

		if (n <= 104)
			break;
		else
			cout << "\nMaksimal panjang array adalah 104" << endl;
	}
	cout << "============" << endl;
	cout << "Elemen array" << endl;
	cout << "============" << endl;
	for (i = 0; i < n; i++) {
		cout << "(" << (i + 1) << ")";
		cin >> mira[i];
	}
}

void binarysearch() {

	cout << "Masukkan elemen yang dicari: " << endl;
	int item;
	cin >> item;

	int namira = 0; //lowerbound
	int pramadhani = n - 1; //upperbound

	while (namira <= pramadhani) {
		int mid = (namira + pramadhani) / 2;

		if (mira[mid] == item) {
			cout << item << "found";
		}
		else if (mira[mid] < item) {
			namira = mid + 1;
		}
		else {
			pramadhani = mid - 1;
		}

	}

}

int main() {
	input();
	binarysearch();
}

