#include <iostream>
using namespace std;

bool is_palindrome(char arr[]) {

	int length = strlen(arr);

	for (int i = 0; i < length; i++) {
		if (arr[i] != arr[length - i - 1]) {
			return false;
		}
	}
	
	return true;

}



int main() {

	char array1[25];

	cin >> array1;

	cout << "Palindrome: " << boolalpha << is_palindrome(array1);

}