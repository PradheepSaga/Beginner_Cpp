/* A Pointer_typedef_function program using cpp
   Written by K.Pradheepkumar dated 28-07-2025 */

   #include <iostream>
   using namespace std;


typedef int (*operation)(int, int);

int add(int x, int y) { return x + y; }



   int main(){
	
	// Declare pointer

        operation ptr = add;
        
      int  result = ptr(20, 30);
	 
	cout << "Addition : " << result  << endl;

   }
	
	




