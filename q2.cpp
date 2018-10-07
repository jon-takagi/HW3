#include <iostream>
using namespace std;
bool isMultiple(int, int);
bool isMultiple(int arg, int num){
    return arg % num == 0;
}
int main() {
    int num;
    cin >> num;
    int arg;
    int count = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arg;
        if(isMultiple(arg, num)) {
            count++;
            // cout << arg << " is a multiple of " << num << "\n";
        }
    }
    cout << count;

}
