#include <iostream>
using namespace std;

void reverse(int& a) {
    int b;
    while (a != 0) {
        int remainder = a % 10;
        a = (a - remainder) / 10;
        b = b * 10 + remainder;
    }
    a = b;
}
int main() {
    int a = 123;
    cout << "Value of a before reverse: " << a << endl;
    reverse(a);
    cout << "Value of a after reverse: " << a << endl;
}