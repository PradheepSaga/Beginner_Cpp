/* A Class_&_Objects program using cpp
   Written by K.Pradheepkumar dated 28-07-2025 */

   #include <iostream>
   using namespace std;

	class Student {
	public:
		string name;
		void display() {
			cout << "who ? " << name;
		}
	};

	int main() {
		Student s1;
		s1.name = " $Pradheepkumar$ ";
		s1.display();
	}