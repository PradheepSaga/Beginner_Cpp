/* A Class_&_Objects_freind_functio program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <iostream>
using namespace std;

class First{
    private:
      int last;
      
    public:
      First(int s){
          last = s;
      }
      
      friend void displays(First n);
};

void displays(First n){
    cout << " who ? " << n.last;
}

int main(){
    displays(900);
    return 0;
}