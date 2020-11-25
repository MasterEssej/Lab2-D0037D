#include <iostream>
#include <vector>
using namespace std;

void initialise(vector<string> &temp) {

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

void insert(vector<string> &temp) {

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

void search(vector<string> &temp) {

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

void del(vector<string> &temp) {

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

void print(vector<string> &temp) {

	cout << "Names in database: \n" << endl;

	for (int i = 0; i < temp.size(); i++) {
		cout << " \"" << temp[i] << "\" ";
	}
	cout << "\n" << endl;

}

void quit(bool &mquit) {
	mquit = false;
}

int main() {

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

	return 0;
}