#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a binary number: ";
    cin >> num;

    if (num >> 31 & 1) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is positive." << endl;
    }

    return 0;
}
Footer
© 2023 GitHub, Inc.
