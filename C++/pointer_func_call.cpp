/* A Pointer_function_call program using cpp
   Written by K.Pradheepkumar dated 28-07-2025 */

   #include <iostream>
   using namespace std;

	int add(int a, int b) {​

			return a + b;​

		}​
	
   int main(){

	​
	// Declare pointer​

	int (*funcPtr)(int, int);​

	​
	// Assign function to pointer​

	funcPtr = add;​
	
	int result = funcPtr(20, 30);

	cout << "Addition : " << result;
	
   }
	
	



​