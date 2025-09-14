/* A Pointer_Subtraction program using cpp
   Written by K.Pradheepkumar dated 26-07-2025 */
#include <iostream>
using namespace std;

int main() {
	
	int arr[] = { 10, 20, 30, 40, 50};

	int *ptr1 = &arr[2];
	int *ptr2 = &arr[0];

	int diff = ptr1 - ptr2; // result: 2
	
	cout << diff << endl;
	}