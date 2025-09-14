/* A Class_&_Objects_Multiple_inheritance program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class son{
    public:
    void hi_granpa(){
        cout << " hi Granpa# How are You! "<< endl;
    }
};

class daughter{
    public:
    void welcome(){
        cout << " Welcome Home$ Granpa* " << endl;
    }
};

class father: public son{
    
};

class grandfather: public father, public daughter{
    
};

int main(){
    grandfather g1;
    g1.hi_granpa();
    g1.welcome();
    return 0;
}



