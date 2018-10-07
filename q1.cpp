#include <iostream>
using namespace std;
int main() {
    int val1;
    int val2;
    int val3;

    cin >> val1;
    cin >> val2;
    cin >> val3;

    if(val1 < val2){
        if(val1 < val3) {
            cout<< val1;
        } else if(val3 < val2) {
            cout<< val3;
        }
    } else { //val2 < val1
        if(val2 < val3) {
            cout<< val2;
        } else {
            cout<< val3;
        }
    }
}
