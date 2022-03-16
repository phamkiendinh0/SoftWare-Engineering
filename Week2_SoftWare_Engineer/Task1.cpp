#include <iostream>
#include <math.h>

using namespace std;
void checkHex() {
    string input;
    cout << "Please enter a valid hex number: " << endl;
    cin >> input;
    if (input.length() != 4) {
        cerr << "Invalid length!" << endl;
        return;
    }
    if (input[0] != '0' && (input[1] != 'x' || input[1] != 'X')) {
        cerr << "Invalid Format!" << endl;
        return;
    }
    if ((input[2] < '0' || input[2] > '9') && (input[2] < 'A' || input[2] > 'F')) 
    {
        cerr << "Invalid number!" << endl;
        return;
    }
    cout << "Got valid hexadecimal value: " << input << endl;
    return;

}

int main() {
    checkHex();
    return 0;
}