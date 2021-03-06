#include <iostream>

using namespace std;

unsigned long long int fib(unsigned long long int a) {

    if (a < 3) return 1;
    
    return fib(a - 1) + fib(a - 2);
}

int main() {

    cout << "Which 'n'th number would you like to find in the fibonacci sequence: ";
    unsigned long long int x;
    cin >> x;

    cout << "The number in position " << x << " in the fibonacci sequence is " << fib(x) << endl;

    return 0;
}
