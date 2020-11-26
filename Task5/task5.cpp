#include <iostream>
using namespace std;

void shrink_array(int* array1, int size) {

	int i = 0;
	int x = 0;
	for (i, x; i < size/2; i++, x = x+2) {
		array1[i] = array1[x] + array1[x + 1];
	}
	for (i; i < size; i++) {
		array1[i] = 0;
	}

}



int main() {

	int arr[8] = { 2, 4, 7, 3, 14, 1, 16, 8 };

	int arrSize = sizeof(arr) / sizeof(arr[0]);

	cout << "Input array:\t";
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << "\t";
	}

	cout << endl;

	shrink_array(arr, arrSize);

	cout << "Output array:\t";
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << "\t";
	}

	cout << endl;

	system("pause");

	return 0;
}