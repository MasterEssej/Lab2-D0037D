#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void array_rows_cols(int arr[20][20], int x, int y) {

	int totsum = 0;

	for (int row = 0; row < x; row++) {
		int sumx = 0;
		for (int col = 0; col < y; col++) {
			cout << " " << arr[row][col] << " ";
			sumx += arr[row][col];
		}
		cout << "|" << sumx << endl;
		totsum += sumx;
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
		totsum += sumy;
	}

	cout << " " << totsum;

	cout << "\n" << endl;

}



int main() {

	srand(time(NULL));

	int x, y;

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

	array_rows_cols(array1, x, y);

	system("pause");

	return 0;
}