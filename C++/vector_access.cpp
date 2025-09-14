/* A "Data_Structures" -> vector program using cpp
   Written by K.Pradheepkumar dated 31-07-2025 */
   
	#include <iostream>
	#include <vector>
	using namespace std;

	int main(){
		
		vector<string> birds = {"runner", "swimmer", "flyer"};
		birds.push_back(" Roller ");
		
		birds.at(2) = "toddler";  
		for (string bird : birds){
			cout << bird << endl;
			cout << endl;
		}
		
		cout << birds[1] <<endl;
		cout << birds.at(1) << endl;
		cout << birds.front() << endl;
		cout << birds.back() << endl;

		birds.pop_back();
		
		cout << birds.size() << endl;
		
		cout << birds.empty() << endl;
		return 0;
	}
		