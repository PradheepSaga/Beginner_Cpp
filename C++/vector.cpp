/* A "Data_Structures" -> vector program using cpp
   Written by K.Pradheepkumar dated 31-07-2025 */
	#include <iostream>
	#include <vector>
	using namespace std;

	int main(){
		
		vector<int> birds = {2, 4, 6};
		
		for (int bird : birds){
			cout << bird << endl;
			cout << endl;
		}
		return 0;
	}
		