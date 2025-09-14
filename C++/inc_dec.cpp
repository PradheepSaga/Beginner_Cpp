/* A (pre/post) increment/decrement operatro program using cpp
   Written by K.Pradheepkumar dated 24-07-2025 */

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << "Pre-Increment: " << ++x << endl;  // Output: 11
	cout << "Post-Increment: " << x++ << endl;  // Output: 11
	cout << "Pre-Decrement: " << --x << endl;   // Output: 11
    cout << "Post-Decrement: " << x-- << endl;  // Output: 11
    cout << "Final Value: " << x << endl;  // Output: 9
    return 0;
}
