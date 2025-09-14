/* A fibonacci using Recursion program using cpp
   Written by K.Pradheepkumar dated 25-07-2025 */

#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {

		int n = 6;
		int fibo = fibonacci(n);
		cout << n << endl;
		cout << fibo << endl;
		
} 
		
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}