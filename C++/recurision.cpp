/* A factorial using Recursion program using cpp
   Written by K.Pradheepkumar dated 25-07-2025 */

#include <iostream>
using namespace std;

int factorial(int n);

int main() {

		    int n = 6;
		    factorial(n);

			}

int factorial(int n) {
    if (n <= 1)  // Base Case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive Case
}