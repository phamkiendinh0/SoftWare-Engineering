#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student {
    public: 
        string name;
        Student(string n, int s) {
            name = n;
            score = s;
        }
        void print() {
            cout << "Name: " << name << " ,Score: " << score << endl;
        }
        int getScore() {
            return score;
        }
        void change_pwd() {
            if (password == "null") {
                cout << "Please enter new password: " << endl;
                getline(cin,password);
                ofstream outfile;
                string filename = name + ".dat";
                outfile.open(filename,ios::out|ios::app);
                password += '\n';
                outfile << password;
                outfile.close();
            }
            else {
                cout << "Please enter your password: " << endl;
                string pass;
                getline(cin,pass);
                ifstream infile;
                string filename = name + ".dat";
                string tempPass;
                infile.open(filename, ios::in);
                getline(infile,tempPass);
                if (tempPass == pass) {
                    cout << "Please enter new password: " << endl;
                    getline(cin,pass);
                    password = pass;
                    infile.close();
                }
                else {
                    cout << "Wrong password!" <<  endl;
                    infile.close();
                }
            }
        }
    private: 
        int score;
        string password;

};
int main() {
    Student s1("Dinh", 10);
    Student s2("Nhung", 7);
    s1.print();
    s2.print();
    Student array[] = {Student("A",10),Student("B",20), Student("C",30)};
    int max = 0, index = 0;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        if(array[i].getScore() > max) {
            max = array[i].getScore();
            index = i;
        }
    }
    cout << "Highest score: " << array[index].getScore() << " ,Name: " << array[index].name << endl;
    return 0;

}