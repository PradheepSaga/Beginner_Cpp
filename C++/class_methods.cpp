/* A Class_&_Objects_methods program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class Dev{
    public:
    int wel(int limit);
};

int Dev::wel(int limit){
        return limit;
    }

int main(){
    Dev d1;
    cout << d1.wel(100);
    return 0;
}