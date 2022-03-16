#include <iostream>
#include <typeinfo>

using namespace std;

void intInput() {
    int size;
    cout << "Please enter the amount of integers: " << endl;
    cin >> size;
    if (size > 5) {
        cerr << "Can't exceed 5 integers input! Try Again!" << endl;
        intInput();
        return;
    }
    int array[size] = {};
    int * p = array;
    int num;
    int index = size;
    const int limit = 256;
    while (size > 0) {
        size--;
        cout << "Please enter your " << (index - size) << " number: " << endl;
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(limit,'\n');
            cerr << "Your input is not an integer, Try again..." << endl;
            size ++;
            continue;
        }
        *p = num;
        p = p + 1;
    }

    p = p - index;
    while (index > 0) {
        index --;
        cout << *p << " ";
        p = p + 1;
    }
    cout << endl;
    return;
}
void floatInput() {
    int size;
    cout << "Please enter the amount of floats: " << endl;
    cin >> size;
    if (size > 10) {
        cerr << "Can't exceed 10 floats input! Try Again!" << endl;
        floatInput();
        return;
    }
    float array[size] = {};
    float * p = array;
    float num;
    int index = size;
    const int limit = 256;
    while (size > 0) {
        size--;
        cout << "Please enter your " << (index - size) << " number: " << endl;
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(limit,'\n');
            cerr << "Your input is not a float, Try again..." << endl;
            size ++;
            continue;
        }
        *p = num;
        p = p + 1;
    }

    p = p - index;
    while (index > 0) {
        index --;
        cout << *p << " ";
        p = p + 1;
    }
    cout << endl;
    return;
}

int main() {
    intInput();
    floatInput();
    cin.get();
} 