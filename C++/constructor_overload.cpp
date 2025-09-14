/* A Class_&_Objects_methods program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class  bot{
    public:
    
    int model;
    string purpose;
    
    bot(){
        model = 1;
        purpose = "cleaning";
    }
    
    bot(int x, string y){
        model = x;
        purpose = y;
    }
};

int main(){
    bot b1;
    bot b2(24, " Destroyer ");
    
    cout << b1.model << " " << b1.purpose << " " << endl;
    cout << b2.model << " " << b2.purpose << " " << endl;
    return 0;
}