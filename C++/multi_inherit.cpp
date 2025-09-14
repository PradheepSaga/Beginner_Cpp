/* A Class_&_Objects_Multilevel_inheritance program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class son{
    public:
    void hi_granpa(){
		while(1){
        cout << " hi Granpa# How are You! ";
    } }
};

class father: public son{
    
};

class grandfather: public father{
    
};

int main(){
    grandfather g1;
    g1.hi_granpa();
    return 0;
}



