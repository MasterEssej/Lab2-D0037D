#include <iostream>
using namespace std;

void swap_sort(int a, int b, int c, bool order) {
	
	int hold;
	int n = 3;

	int array1[] = { a, b, c };

	if (order) {
		for (int i = 0; i < n; i++) {
			for (int x = i + 1; x < n; x++) {
				if (array1[i] > array1[x]) {
					hold = array1[i];
					array1[i] = array1[x];
					array1[x] = hold;
				}
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int x = i + 1; x < n; x++) {
				if (array1[i] < array1[x]) {
					hold = array1[i];
					array1[i] = array1[x];
					array1[x] = hold;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << array1[i] << "\t";
	}
}


int main() {

	int a, b, c;

	bool order;

	cout << "Give a: ";
	cin >> a;

	cout << "Give b: ";
	cin >> b;

	cout << "Give c: ";
	cin >> c;

	cout << "Sort ascending/descending (1/0): ";
	cin >> order;

	swap_sort(a, b, c, order);

	return 0;
}