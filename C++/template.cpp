/* A Class_&_Objects_"Templates" program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
	#include <iostream>
	using namespace std;

	template <typename D>
	D div(D x, D y){
		return x / y;
	}

	int main(){
		cout << div<int>(20, 5) <<endl;
		cout << div<float>(5, 2) <<endl;
		return 0;
	}