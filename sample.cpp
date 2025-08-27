// David Janney
#include <iostream>
using namespace std;

// hi, I have your other class, so I'm going to try to make my solution more interesting this time by not using 'sum' or 'a+b'

int main () {
    int a = 0;
    int b = 0;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "\nEnter second integer: ";
    cin >> b;

    if (b > 0) {
        while (b > 0) {
            --b;
            ++a;
        }
    } else if (b < 0) {
        while (b < 0) {
            ++b;
            --a;
        }
    } else { // if not positive or negative (0), does nothing and just continues
    }

    cout << "\n\nThe sum is " << a << ".\n";
    return 0;
}