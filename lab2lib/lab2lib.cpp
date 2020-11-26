#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#pragma region Task 1

bool is_sorted(int array[]) {

	for (int i = 0; i < (sizeof(array) - 1); i++) {
		if (array[i] > array[i + 1]) {
			return false;
		}
	}

	return true;

}

#pragma endregion

#pragma region Task 2

bool is_palindrome(char arr[]) {

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] != arr[strlen(arr) - (i + 1)]) {
			return false;
		}
	}

	return true;

}

#pragma endregion

#pragma region Task 3

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

#pragma endregion

#pragma region Task 4

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
	cout << endl;
}

#pragma endregion

#pragma region Task 5

void shrink_array(int* array1, int size) {

	int i = 0;
	int x = 0;
	for (i, x; i < size / 2; i++, x = x + 2) {
		array1[i] = array1[x] + array1[x + 1];
	}
	for (i; i < size; i++) {
		array1[i] = 0;
	}

}

#pragma endregion

#pragma region Task 6

void initialise(vector<string>& temp) {

	int choice;
	cout << "Are you sure you want to initialise database?" << endl;
	cout << "This will clear the data base" << endl;
	cout << "1. Yes\n2. No" << endl;
	cin >> choice;

	system("cls");

	switch (choice) {
	case 1:
		temp.clear();
		cout << "Initialisation complete" << endl;
		break;
	case 2:
		cout << "Initialisation cancelled" << endl;
		break;
	}

}

void insert(vector<string>& temp) {

	while (true) {

		string namein;
		cout << "(Write \"q\" to quit)" << endl;
		cout << "Insert name: ";
		cin >> namein;
		if (namein == "q" || namein == "Q") {
			break;
		}
		else if ((count(temp.begin(), temp.end(), namein)) == false) {
			temp.push_back(namein);
			cout << "\n\"" << namein << "\" has been added to database\n" << endl;
		}
		else {
			cout << "\n\"" << namein << "\" already exists in database\n" << endl;
		}
		system("pause");
		system("cls");

	}

}

void search(vector<string>& temp) {

	string key;
	cout << "Search: ";
	cin >> key;

	bool results = false;
	cout << "\n" << endl;
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].find(key) != string::npos) {
			cout << " \"" << temp[i] << "\" ";
			results = true;
		}
	}
	if (results == false) {
		cout << "No results";
	}
	cout << "\n\n" << endl;
}

void del(vector<string>& temp) {

	while (true) {

		string delname;
		cout << "(Write \"q\" to quit)" << endl;
		cout << "Delete name: ";
		cin >> delname;

		if (delname == "q" || delname == "Q") {
			break;
		}
		else if (count(temp.begin(), temp.end(), delname)) {
			temp.erase(remove(temp.begin(), temp.end(), delname));
			cout << "\n\"" << delname << "\" has been removed from database\n" << endl;
		}
		else {
			cout << "\n\"" << delname << "\" does not exist in database\n" << endl;
		}
		system("pause");
		system("cls");

	}

}

void print(vector<string>& temp) {

	cout << "Names in database: \n" << endl;

	for (int i = 0; i < temp.size(); i++) {
		cout << " \"" << temp[i] << "\" ";
	}
	cout << "\n" << endl;

}

void quit(bool& mquit) {
	mquit = false;
}

#pragma endregion
