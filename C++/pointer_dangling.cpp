/* A Pointer_ dangling program using cpp
   Written by K.Pradheepkumar dated 28-07-2025 */

   #include <iostream>
   using namespace std;

int main() {
           int *poi = new int(23);
		   
		  cout << "poi : " << *poi << endl;
		  
		   delete poi;
		   
		cout << "poi : " << *poi << endl;

		
		}
		


