#include <string>
#include <iostream>
#include <cstring>
using namespace std;

void checkHex() {
    string str;
    char valid[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    cout << "Please enter a hexadecimal value: " << endl;
    getline(cin, str);
    if(str.length() > 4) {
        throw "Invalid Length!";
        return;
    }
    if (str[0] != '0') {
        throw "Invalid number!";
        return;
    } 
    if (str[1] != 'x' || str[1] != 'X') {
        throw "Invalid hexadecimal format!";
        return;
    } 
    bool cond1 = false;
    bool cond2 = false;
    for (int i = 0; i < sizeof(valid); i++)
    {   
        if (valid[i] != str[3]) {
            continue;
        }
        else {
            cond1 = true;
            break;
        }

    }
        for (int i = 0; i < sizeof(valid); i++)
    {   
        if (valid[i] != str[4]) {
            continue;
        }
        else {
            cond1 = true;
            break;
        }

    }
    if ( (cond1 == false) || (cond2) == false) {
        throw  "Exceeded the limit!";
        return;
    }
    cout << str << endl;

}
int main (int argc, char* argv[])
{
    checkHex();
    return 0;
}