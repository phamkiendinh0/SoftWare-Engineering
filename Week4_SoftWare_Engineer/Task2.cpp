#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void reverse(string a) {
    for (int i = a.size(); i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;
}
void convertCase(string a) {
    char b[a.size()];
    for (int i = 0; i < a.size(); i++) {
        if (isupper(a[i])) {
            b[i] = tolower(a[i]);
        }
        else {
            b[i] = toupper(a[i]);
        }
    }
    for (char ch : b) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    string a = "Good Morning";
    string b = "Hello World";
    reverse(a);
    convertCase(b);
    return 0;
}
