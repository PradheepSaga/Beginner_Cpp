/* A Function_Overloading program using cpp
   Written by K.Pradheepkumar dated 26-07-2025 */
#include <iostream>
using namespace std;

int main() {
    int a = 17;
    int *ptr = &a;

    cout << "Value: " << *ptr << endl;    // 5
    cout << "Address: " << ptr << endl;   // address of val
}