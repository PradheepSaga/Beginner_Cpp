/* A Pointer_function_call (switch with functions) program using cpp
   Written by K.Pradheepkumar dated 28-07-2025 */

   #include <iostream>
   using namespace std;

int add(int a, int b);
int sub(int a, int b);

   int main(){

	
	// Declare pointer

	int (*operation[2])(int, int) = {add, sub};

	int result_1 = operation[0](20, 30);
	int result_2 = operation[1](71, 22);

	cout << "Addition : " << result_1  << endl;
	cout << "Subtraction : " << result_2 ;
	
   }
	
	
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }





