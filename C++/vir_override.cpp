/* A Class_&_Objects_"virtual__override" program using cpp
   Written by K.Pradheepkumar dated 29-07-2025 */
   
	#include <iostream>
	using namespace std;

	class birds{
		public:
		
		virtual void fun(){
			cout << " peacock Has two legs "<< endl;
		}
	};

	class flyers: public birds{
		public:
		void fun()  {
			cout << " peacock has two wings "<< endl;
		}
	};

	int main(){
		birds* a;
		flyers b, d;
		a = &b;
		a-> fun();
		(*a).fun();
		
		flyers* c;
		c = & d;
		(*c).fun();
		return 0;
	}