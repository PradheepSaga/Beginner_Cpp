/* A Class_&_Objects_"Templates_example" program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */

	#include <iostream>
	using namespace std;

	template <typename C, typename Y>
	class insects{
		public:
		C one;
		Y two;
		
		insects(C a, Y b){
		one = a;
		two = b;
		}
		
		void display(){
			cout << " one: " << one << " two: " << two <<endl;
		}
	};

	int main(){
		insects<string, string> insectsn1("Butterfly", "look very beautiful");
		insects<string, int> insectsn2("Dragonfly", 15);
		
		insectsn1.display();
		insectsn2.display();
		return 0;
	}