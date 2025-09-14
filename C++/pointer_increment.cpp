/* A Pointer_Increment program using cpp
   Written by K.Pradheepkumar dated 26-07-2025 */
   
   #include <iostream>
   using namespace std;
   
   int main(){
	   int a[] = {10, 20, 30, 40, 50};
	   
	   int *ptr = &a[0];
	   
	   cout << *ptr << endl;
	   ptr++;
	   cout << *ptr << endl;
   }