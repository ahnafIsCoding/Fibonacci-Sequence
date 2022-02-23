#include <iostream>

using namespace std;

int fib(int a) {

    if (a > 0 && a < 3) return 1;

    unsigned long long int sum = 0;
    unsigned long long int temp1 = 1;
    unsigned long long int temp2 = 1;

    for (int i = 2; i < a; i++) {

        sum = temp1 + temp2;
        temp1 = temp2;
        temp2 = sum;
    }

    return sum;
}

int main() {

    cout << "Which 'n'th number would you like to find in the fibonacci sequence: ";
    int x;
    cin >> x;

    cout << "The number in position " << x << " in the fibonacci sequence is " << fib(x) << endl;

    return 0;
}
