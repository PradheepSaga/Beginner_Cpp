/* A Class_&_Objects_"Exception_Handling" program using cpp
   Written by K.Pradheepkumar dated 31-07-2025 */
   
   #include <iostream>
   using namespace std;
   
   int main(){
   try{
	   int a = 16;
	   
	   if (a >= 18) {
		   cout << " You can drink " << endl;
	   }
	   else{
		   throw(a);
	   }
   }
	   
	   catch (int age){
		   cout << "you are yet not older to drink" << endl;
		   
		   cout << "age : " << age;
	   }
	   return 0;
   
   
   }