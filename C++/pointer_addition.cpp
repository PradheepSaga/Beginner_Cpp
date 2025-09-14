/* A Pointer_Addition program using cpp
   Written by K.Pradheepkumar dated 26-07-2025 */
#include <iostream>
using namespace std;

int main() {

	int arr[3] = {10, 20, 30};
	int *ptr = arr;

	ptr = ptr + 1; // Now points to arr[1]
	
	cout << ptr << endl;
	cout << *ptr << endl;
	
	}