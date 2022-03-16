#include <iostream>
using namespace std;


void max_array(int array[]) {
    int max = 0;
    for (int i = 0; i < sizeof(array); i++)
    {
        if (max < array[i]) {
            max = array[i];
        }
        else {
            continue;
        }
    }
    cout << "Max number of the array is: " << max << endl;
}


int main() {
    int array[] = {1,2,3,4,5,10,6,7,8};
    max_array(array);
    return 0;
}