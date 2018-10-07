#include <iostream>
using namespace std;
int pow(int base, int exponent){
    // cout << "base equals " << base << "\n";
    // cout << "exponent equals " << exponent << "\n";
    int result;
    if(exponent == 1){
        result = base;
    } else {
        result = base * pow(base, exponent - 1);
    }
    // cout << "result equals " << result << "\n";
    return result;
}
int main() {
    int base;
    int exponent;
    cin >> base;
    cin >> exponent;

        // cout << "base equals " << base << "\n";
        // cout << "exponent equals " << exponent << "\n";

    cout << "\n";
    if(base < 1 || exponent < 1) {
        cout << "Both inputs must be positive\n";
        return -1;
    }
    int result;
    result = pow(base, exponent);
    // cout << "result equals " << result << "\n";
    cout << result;
    return result;
}
