#include <iostream>
#include <math.h>
using namespace std;

void quadratic (int a, int b, int c) {
    /*
    @Params: 3 integers coefficient values a, b, and c
    @Desc: Calculating the roots of a quandratic equation
    */
    cout << "Quadratic equation: ax^2 + bx + c = 0" << endl;
    cout << "Please enter values for: \n" << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "Value of a: " << a << "\nValue of b: " << b << "\nValue of c: " << c <<endl;
    if (a == 0) {
        cout << "No quadratic roots found!" << endl;
        return;
    }
    int discriminant = (b*b) - (4*a*c);

    if (discriminant > 0) {
        int root1 = (-b + sqrt(discriminant)) / (2 * a);
        int root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "There are two roots.... \nRoot 1: " << root1 << "\nRoot 2: "
        << root2 << endl;
        return;
    }
    else if(discriminant == 0) {
        int root = (-b)/(2 *a);
        cout << "There is one root...\nRoot Value: " << root <<endl;
    }
    else {
        int realPart = -b / (2 * a);
        int imagePart = sqrt(-discriminant) / (2 * a);
        cout << "There are two roots...." << endl;
        cout << "Root 1: " << realPart << " + " << imagePart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imagePart << "i" << endl;
        return;
    }
}

int main() {
    int a, b, c;
    quadratic(a,b,c);
    return 0;
}