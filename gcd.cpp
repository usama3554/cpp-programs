#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void calculate(int n){
	
	int sumEven = (n/2) * (n/2 + 1);
    int sumOdd = ((n+1)/2) * ((n+1)/2);

    cout << "Sum of even numbers up to " << n << " = " << sumEven << endl;
    cout << "Sum of odd numbers up to " << n << " = " << sumOdd << endl;
    
    cout << "GCD: " << gcd(sumEven, sumOdd) << endl;
	
}


int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    calculate(n);

    return 0;
}

