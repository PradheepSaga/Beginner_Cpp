/* A Class_&_Objects_"Input_Validation" program using cpp
   Written by K.Pradheepkumar dated 31-07-2025 */
   
   #include <iostream>
   using namespace std;
  
  int main(){
	  int num;
	  cout << " Enter the number: ";
	if ( !(cin >> num)) {
		  cout << " Invalid Input. Please enter the valid input: " << endl;
		  cin.clear();
		  cin.ignore(10000, '\n' );
		  return 1;
		  }
	  
	  switch(num){
		  
		  case 1:
			cout << " Show your Id ";
			break;
			
		case 2:
			cout << " Please wait! Verification in progress " << endl;
			break;
			
		case 3:
			cout << " Verification complete, You're authorized " << endl;
			break;
			
		default: 
			cout << " Identify Yourself !! ";
	  }
	  
	 
  
		cout << "The entered input is: " << num;
		
		return 0;
		
  }