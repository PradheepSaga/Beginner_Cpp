/* A Class_&_Objects_Multiple_inheritance program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class animal{
    protected:
    
    int jaguar;
};

class omnivore: public animal{
    public:
    
    void setanimal(int ani){
         jaguar = ani;
    }
    
    int getanimal(){
        return jaguar;
    }
};

int main(){
    omnivore o1;
    o1.setanimal(3);
    cout << " No.Of cats: " << o1.getanimal();
    return 0;
}