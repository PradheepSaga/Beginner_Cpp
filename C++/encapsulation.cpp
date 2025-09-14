/* A Class_&_Objects_encapsulation program using cpp
   Written by K.Pradheepkumar dated 30-07-2025 */
   
#include <iostream>
using namespace std;

class mer{
	private:
	 
	 int fish;
	 
	 public:
	 
	 void setmer(int m){
		 fish = m;
	 }
	 
	 int getmer(){
		 return fish;
	 }
};
	 
	 
	 int main(){
		 
		 mer m1;
		 
		 m1.setmer(200);
		 cout << "Mer: "<< m1.getmer();
		 
		 return 0;
	 }