#include <iostream>
using namespace std;

bool is_sorted(int array[]) {

	for (int i = 0; i < (sizeof(array)-1); i++) {
		if (array[i] > array[i + 1]) {
			return false;
		}
	}

	return true;

}

int main() {

	int ar[5];

	cout << "Enter 5 integers into the array: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> ar[i];
	}

	if (is_sorted(ar)) {
		cout << "The array is ascending." << endl;
	}
	else {
		cout << "The array is not ascending." << endl;
	}

	system("pause");
	return 0;
}