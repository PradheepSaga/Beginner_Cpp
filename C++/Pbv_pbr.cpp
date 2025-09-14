/* A Pass_by_Value_&_Reference program using cpp
   Written by K.Pradheepkumar dated 25-07-2025 */

#include <iostream>
using namespace std;

void modify(int a);
void modifyRef(int &a);

int main() {
    int a = 5;

    modify(a);     // Pass by Value
    cout << a << endl;     // Output: 5

    modifyRef(a);  // Pass by Reference
    cout << a;     // Output: 15
}


// Pass by Value
void modify(int a) {
    a = a + 10;
}

// Pass by Reference
void modifyRef(int &a) {
    a = a + 10;
}
