#include <iostream>
using namespace std;

bool is_palindrome(char arr[]) {

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] != arr[strlen(arr) - (i + 1)]) {
			return false;
		}
	}
	
	return true;

}



int main() {

	char array1[25];

	cin >> array1;

	cout << "Palindrome: " << boolalpha << is_palindrome(array1) << endl;

	return 0;
}