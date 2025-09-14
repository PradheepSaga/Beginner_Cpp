/* A Pointer_function program using cpp
   Written by K.Pradheepkumar dated 26-07-2025 */
   
   #include <iostream>
   using namespace std;
  
  void printArray(int *ptr, int size);
   
   int main(){

		int arr[] = {1, 2, 3};
		int *ptr = arr;

		*ptr = 10;        // arr[0] becomes 10
		int q = *(ptr + 2) = 30;  // arr[2] becomes 30
		
		printArray(ptr, 2);
	
	}

		void printArray(int *ptr, int size) {
				for(int i = 0; i <= size; i++){
				cout << *(ptr + i) << endl;
		}
		}