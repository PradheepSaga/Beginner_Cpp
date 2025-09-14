/* A Class_&_Objects_derive_base program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class sport{
    public:
    string name = " Running ";
    int members = 4;
    void foe(){
        cout << " first for ";
    }
};

class variant: public sport{
    public:
    string mode = " race ";
};

int main(){
    variant v1;

    cout << v1.name << v1.mode ;
    v1.foe();
    cout << v1.members;
}

