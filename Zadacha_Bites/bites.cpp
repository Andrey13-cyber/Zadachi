#include<iostream>

using namespace std;

int main() {

	int a;
	bool mass[32];
	cout << "Enter the number: ";
	cin >> a;
	for (int i = 0; i < 32; i++) {
		mass[i] = a & 1;
		a >>= 1;
		cout << mass[i] << ' ';
	}
	int maxOne = -1;
	for (int i = 0; i < 32; i++) {
		int lenght = 0;
		for (int j = 0; j < 32; j++) {
			if (mass[j] == 1 || i == j)
				lenght++;

		 if  ((mass[j] == 0 && i != j) || j == 31){
			 maxOne = max(maxOne, lenght);
			 lenght = 0;
		 }
		}
	}
	
	cout << endl;
	cout << "Lenght of the longest sequence: " << maxOne << endl;
	return 0;
}