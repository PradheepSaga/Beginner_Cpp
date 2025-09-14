/* A Class_&_Objects_methods program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */

#include <iostream>
using namespace std;

class note{
    public:
    string brand;
    string model;
    int price;
    
    note(string x, string y, int z){
        brand = x;
        model = y;
        price = z;
    }
};

int main(){
    
   note n1("classnote", "half_squared", 120);
   note n2("Simon", "full_squared", 240);
   
   cout << n1.brand << " " << n1.model << " " << n1.price << endl;
   cout << n2.brand << " " << n2.model << " " << n2.price << endl;
    return 0;
}