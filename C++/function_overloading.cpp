/* A Function_Overloading program using cpp
   Written by K.Pradheepkumar dated 25-07-2025 */

#include <iostream>
using namespace std;

void show() {
    cout << "No parameters\n";
}

void show(int a) {
    cout << "Integer: " << a << endl;
}

void show(double a, char b) {
    cout << "Double and Integer: " << a << ", " << b << endl;
}

int main() {
    show();
    show(5);
    show(3.14, 'A');
}
