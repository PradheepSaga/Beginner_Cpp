/* A Pointer_ to_Pointer program using cpp
   Written by K.Pradheepkumar dated 28-07-2025 */

   #include <iostream>
   using namespace std;

int main() {
     int alpha = 23;
	 int *p = &alpha;
	 int **n = &p;
	
		cout << " **n : " << **n << endl;
		cout << " *p : " << *p << endl;
		cout << " alpha : " << alpha;
		
		}
		


