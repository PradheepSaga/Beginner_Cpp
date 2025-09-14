/* A continue_statement program using cpp
   Written by K.Pradheepkumar dated 24-07-2025 */

#include <iostream>
using namespace std;

int main() {

	for(int i = 100; i>= 95; --i) {
		if(i == 98)
			continue;
		cout << i << endl;
	}
}