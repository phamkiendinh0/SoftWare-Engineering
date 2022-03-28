#include <iostream>

using namespace std;

void a() {
    int divider, division;
    cout << "Please enter 2 number....\nDivider: ";
    cin >> divider;
    while(true) {
        try
        {    
            cout << "Division: ";
            cin >> division;
            if(division > 0) {
                cout << "Result = "  << (int)(divider/division) << endl;
                break;
            }
            else {
                cerr << ("Division can not be 0! Try Again") << endl;
                continue;
            }
        }
        catch(...)
        {
            cout << "Program exits..." << endl;
            return;
        }   
    }
    return;
    
}
void b() {
    int size = 10;
    char* array = new char[size];
    try
    {
        for (int i = 0; i < 100000000; i++) {
            size = size * 10;
            array = new char[size];
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}


int main() {
    a();
    b();
}