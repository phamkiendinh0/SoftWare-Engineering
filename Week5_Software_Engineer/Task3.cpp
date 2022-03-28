#include <iostream>
#include <string>
using namespace std;



union Students
{
    public: 
        string firstName;
        string fullName;

        Students() {
            firstName = "";
            fullName = "";
        }
        ~Students() {

        }
        void toString() {
            cout << "First Name: " << this->firstName << ",Full Name: " << this->fullName << endl;
        }
};

int main() {
    //a
    Students array[3];
    string name[3] = {"Dinh Pham","Hong Nhung","Minh Anh"};
    for (int i = 0; i < sizeof(array)/sizeof(array[0]);i++) {
        array[i].fullName = name[i];
        array[i].firstName = name[i].substr(0,name[i].find(" "));
    }
    //b
    for (int i = 0; i < sizeof(array)/sizeof(array[0]);i++) {
        array[i].toString();
    }

    //c
    array[0].firstName = "Dat01";
    array[1].firstName = "Dat02";
    array[2].firstName = "Dat03";

    for (int i = 0; i < sizeof(array)/sizeof(array[0]);i++) {
        array[i].toString();
    }
    //The content at the memory can not be re-written
}