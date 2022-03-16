#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
void romanCoversion() {
    vector<char> string;
    cout << "Vector's Size: " << string.size() << endl;
    int num;
    cout << "Please enter your integer: " << endl;
    cin >> num;
    int length = 0, temp = num;
    while (temp > 0) {
        temp = temp / 10;
        length++;
    }
    cout << "Num: " << num << "| Length: " << length << endl;
    while (length > 0) {
        if (num >= 1000) {
            int expo = pow(10, (length - 1));
            int remainder = num % expo;
            int whole_num = num - remainder;
            int rep = whole_num/expo;
            num = remainder;
            length--;
            for (int i = 0; i < rep;i++ ) {
                string.push_back('M');
            }
        }
        else if (num >= 500) {
            int expo = pow(10, (length - 1));
            int remainder = num % expo;
            int whole_num = num - remainder;
            int rep = whole_num/expo;
            num = remainder;
            length--;
            for (int i = 0; i < rep;i++ ) {
                string.push_back('D');
            }
        }
        else if (num >= 100) {
            int expo = pow(10, (length - 1));
            int remainder = num % expo;
            int whole_num = num - remainder;
            int rep = whole_num/expo;
            num = remainder;
            length--;
            for (int i = 0; i < rep;i++ ) {
                string.push_back('C');
            }
        }
        else if (num >= 50) {
            int expo = pow(10, (length - 1));
            int remainder = num % expo;
            int whole_num = num - remainder;
            int rep = whole_num/expo;
            num = remainder;
            length--;
            for (int i = 0; i < rep;i++ ) {
                string.push_back('L');
            }
        }
        else if (num >= 10) {
            int expo = pow(10, (length - 1));
            int remainder = num % expo;
            int whole_num = num - remainder;
            int rep = whole_num/expo;
            num = remainder;
            length--;
            for (int i = 0; i < rep;i++ ) {
                string.push_back('X');
            }
        }
        else if (num >= 5) {
            if (num == 5) {
                string.push_back('V');
                length--;
            }
            else {
                string.push_back('V');
                num -= 5;
                continue;
            }
        }
        else if (num < 5 && num != 0) {
            for (int i = 0; i < num;i++ ) {
                string.push_back('I');
            }
            length--;
        }
    }
    cout << "Vector's size: " << string.size() << endl;
    for (int i = 0; i < string.size();i++) {
        cout << string[i] << " ";
    }
    cout << endl;
    return;
}
int main() {
    romanCoversion();
    return 0;
}