/* A Sum_of_Series using Recursion program using cpp
   Written by K.Pradheepkumar dated 25-07-2025 */

#include <iostream>
using namespace std;

int sumOfDigits(int n);

int main() {

		int n = 65;
		int sumOfSeries = sumOfDigits(n);
		cout << n << endl;
		cout << sumOfSeries << endl;
		
} 

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}