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
int log(int num, int base) {
    int i = 1;
    while (pow(base, i) < num) {
        i++;
    }
    if(pow(base,i) > num) {
        return i - 1;
    } else {
        return i;
    }
}
int main() {
    int num;
    int base;
    cin >> num;
    cin >> base;

        // cout << "base equals " << base << "\n";
        // cout << "exponent equals " << exponent << "\n";

    cout << "\n";
    if(base < 1 || num < 1) {
        cout << "Both inputs must be positive\n";
        return -1;
    }
    cout << log(num, base) << "\n";
}
