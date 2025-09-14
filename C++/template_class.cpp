/* A Class_&_Objects_"Templates" program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */

	#include <iostream>
	using namespace std;

	template <typename C>
	class insects{
		public:
		C name;
		
		insects(C n){
		name = n;
		}
		
		void display(){
			cout << " name: " << name << endl;
		}
	};

	int main(){
		insects<string> insectsn1("Butterfly");
		insects<string> insectsn2("Dragonfly");
		
		insectsn1.display();
		insectsn2.display();
		return 0;
	}