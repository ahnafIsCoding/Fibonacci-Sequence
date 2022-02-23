#include <iostream>

using namespace std;

void fib(int a) {

    unsigned long long int sum = 0;
    unsigned long long int temp1 = 1;
    unsigned long long int temp2 = 1;

    cout << "1  1  ";

    for (int i = 2; i < a; i++) {

        sum = temp1 + temp2;
        cout << sum << "  ";
        temp1 = temp2;
        temp2 = sum;
    }
}

int main() {

    cout << "How many numbers do you want to see in your fibonacci sequence?: ";
    int x;
    cin >> x;

    cout << "Here is your fibonacci sequence:\n";
    fib(x);

    return 0;
}