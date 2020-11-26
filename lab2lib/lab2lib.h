#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
bool is_sorted(int array[]);
bool is_palindrome(char arr[]);
void array_rows_cols(int arr[20][20], int x, int y);
void swap_sort(int a, int b, int c, bool order);
void shrink_array(int* array1, int size);
void initialise(vector<string>& temp);
void insert(vector<string>& temp);
void search(vector<string>& temp);
void del(vector<string>& temp);
void print(vector<string>& temp);
void quit(bool& mquit);