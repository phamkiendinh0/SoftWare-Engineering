#include <iostream>
#include <string>
using namespace std;

void a() {
    cout << "A Section" << endl;
    cout << showpos << 200 << endl;
    cout.unsetf(ios::showpos);
    cout << 200 << endl;
    return;
}
void b() {
    cout << "B Section" << endl;
    cout.width(5);
    cout << 10 << endl;
    cout.width(5);
    cout << 200 << endl;
    return;
}
void c() {
    cout << "C Section" << endl;
    int hex = 0x10;
    cout.setf(ios::dec,ios::basefield);
    cout << showbase << hex << endl;
}
void d() {
    cout << "D Section" << endl;
    int dec = 100;
    cout.setf(ios::hex,ios::basefield);
    cout << showbase << dec << endl;
}

void e() {
    cout << "E Section" << endl;
    cout.width(9);
    cout.fill('0');
    cout << 1.234 << endl;
}

void f() {
    cout << "F Section" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << 1.234 << endl;
}
void g() {
    string str = "Hello There";
    char array[str.length()] = {};
    for (int i = 0; i < str.length();i++ ){
        array[i] = str[i];
    }
    for (int i = 0; i < (sizeof(array)/sizeof(array[0]));i++) {
        cout << array[i] << " ";
    }
    cout << flush;
}

int main() {
    a();
    b();
    c();
    d();
    e();
    f();
    g();

    return 0;

}