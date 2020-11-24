#include <iostream>
using namespace std;

void array_rows_cols(int arr[4][4]) {

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 4; ++i) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

}


int main() {
	int array1[][4] = { {1,2,3,4}, {5,6,7,8} };

	array_rows_cols(array1);
}