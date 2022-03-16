#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;


int main() {
    char array[] = "0x5A, 0x3F, 0x33, 0x3D, 0x40, 0x6B, 0x4C, 0x58, 0x72, 0x4E, 0x2F";
    ofstream outfile1;
    outfile1.open("Insertion.bin",ios::out|ios::binary|ios::app);
    outfile1 << array;
    outfile1.close();
    /**/  
    ofstream outfile2;
    outfile2.open("Put.bin",ios::out|ios::binary|ios::app);
    int size1 = strlen(array);
    for (int i = 0; i < size1; i++) {
        char ch = array[i];
        outfile2.put(ch);
    }
    outfile2.close();
    /**/
    ofstream outfile3;
    int size2 = strlen(array);
    outfile3.open("Write.bin",ios::out|ios::binary|ios::app);
    outfile3.write(array, size2);
    outfile3.close();
    return 0;
}