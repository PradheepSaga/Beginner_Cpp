/* A Class_&_Objects_methods program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class vehicle{
    private:
      int car;
     
     public:
     
     void setcar(int s){
         car = s;
     }
     
     int getcar(){
         return car;
     }
};

int main(){
    vehicle v1;
    
    v1.setcar(100);
    cout << v1.getcar();
    return 0;
}