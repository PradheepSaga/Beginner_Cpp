/* A Class_&_Objects_virtual1 program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class birds{
    public:
    
    void fun(){
        cout << " peacock Has two legs ";
    }
};

class flyers: public birds{
    public:
    void fun(){
        cout << " peacock has two wings ";
    }
};

int main(){
    birds* a;
    flyers b;
    a = &b;
    a-> fun();
    return 0;
}