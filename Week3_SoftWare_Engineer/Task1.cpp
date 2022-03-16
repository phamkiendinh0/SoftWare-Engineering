#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int userChoice() {
    cout << "Please enter your choice: \n";
    cout << "1. Save you password\n2. Read Your PassWorD\nYour Choice: " << endl;
    int choice;
    cin >> choice;
    cin.ignore();
    return (choice == 1) ? 1 : 2;
}
void savePass() {
    string input;
    ofstream outfile;
    outfile.open("pwd.dat",ios::out|ios::app);
    cout << "Please enter your password: " << endl;
    getline(cin,input);   
    input += '\n';
    outfile << input;
    outfile.close();
}
void readPass() {
    ifstream infile;
    infile.open("pwd.dat",ios::in);
    string read;
    while(!infile.eof()) {
        getline(infile,read);
        cout << read << endl;
    }
    infile.close();
}

int main() {
    int choice = userChoice();
    switch (choice)
    {
    case 1:
        savePass();
        break;
    case 2: 
        readPass();
        break;
    default:
        cerr << "Invalid Choice" << endl;
        break;
    }
    return 0; 
}