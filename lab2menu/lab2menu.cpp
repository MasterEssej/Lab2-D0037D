#include <iostream>
#include <lab2lib.h>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    while (true) {

        int choose;

		system("cls");

        cout << "Choose task by number:\n" << endl;
        cout << "Task 1\nTask 2\nTask 3\nTask 4\nTask 5\nTask 6\nExit -1\n" << endl;
        cin >> choose;

		system("cls");

        switch (choose) {
		case 1: {
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
			break;
		}
		case 2: {
			char array1[25];

			cin >> array1;

			cout << "Palindrome: " << boolalpha << is_palindrome(array1) << endl;

			system("pause");

			break;
		}
		case 3: {

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

			break;
		}
		case 4: {
			int a, b, c;

			bool order;

			while (true) {

				cout << "Give a (0 to quit): ";
				cin >> a;

				if (a == 0) {
					break;
				}

				cout << "Give b: ";
				cin >> b;

				cout << "Give c: ";
				cin >> c;

				cout << "Sort ascending/descending (1/0): ";
				cin >> order;

				cout << endl;

				swap_sort(a, b, c, order);

				cout << endl;
				system("pause");
				system("cls");

			}
		}
		case 5: {
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

			break;
		}
		case 6: {
			vector<string> names;

			bool menu = true;

			while (menu) {

				int choice;

				cout << "MENU (choose by number)\n" << endl;
				cout << "1. Initialise database\n2. Insert\n3. Search\n4. Delete\n5. Print\n6. Quit" << endl;
				cin >> choice;

				if (1 <= choice <= 6) {
					system("cls");
				}
				switch (choice) {
				case 1:
					initialise(names);
					break;
				case 2:
					insert(names);
					break;
				case 3:
					search(names);
					break;
				case 4:
					del(names);
					break;
				case 5:
					print(names);
					break;
				case 6:
					quit(menu);
					break;
				default:
					cout << "That is not an option." << endl;
				}

				if (choice != 6) {
					system("pause");
				}
				system("cls");
			}
			break;
		}
		case -1: {
			return 0;
		}
		default: {
			cout << "\nThat is not an option" << endl;
			system("pause");
		}
        }

    }
	return 0;
}