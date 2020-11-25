#include <iostream>
#include <cstdlib>
using namespace std;

int x, y;

void array_rows_cols(int arr[20][20]) {

	for (int row = 0; row < x; row++) {
		int sumx = 0;
		for (int col = 0; col < y; col++) {
			cout << " " << arr[row][col] << " ";
			sumx += arr[row][col];
		}
		cout << "|" << sumx << endl;
	}
	for (int col = 0; col < y; col++) {
		cout << "---";
	}
	cout << endl;
	
	for (int col = 0; col < y; col++) {
		int sumy = 0;
		for (int row = 0; row < x; row++) {
			sumy += arr[row][col];
		}
		cout << " " << sumy;
	}

}



int main() {

	int array1[20][20];

	cout << "Number of rows (max 20): ";
	cin >> x;

	cout << "Number of columns (max 20): ";
	cin >> y;

	for (int rows = 0; rows < x; rows++) {
		for (int cols = 0; cols < y; cols++) {
			array1[rows][cols] = rand() % 10;
		}
	}

	array_rows_cols(array1);

	return 0;
}