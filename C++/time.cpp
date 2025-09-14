/* A Class_&_Objects_"Time" program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
#include <ctime>
#include <iostream>
using namespace std;

int main(){
    time_t timestamp;
    time(&timestamp);
    
    cout << ctime(&timestamp);
}