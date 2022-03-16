#include <iostream>
#include <string>

using namespace std;

class Cat {
    public: 
        string name;
        int age;
        Cat(string n, int a) {
            name = n;
            age = a;
        }
        Cat() {

        }
        ~Cat() {

        }
};

class Person {
    public: 
        Cat cat;  
        string name;
        Person(Cat &a, string n) {
            this->cat = a;
            this->name = n;
        }
};
int main() {
    Cat array1[3] = {
        Cat("cat1",30),
        Cat("cat2",40),
        Cat("cat3",50)
    };
    Person array2[3] = {
        Person(array1[0],"Dinh"),
        Person(array1[1], "Nhung"),
        Person(array1[2], "Dat")
    };
    int max = 0, index;
    for (int i = 0; i < sizeof(array2)/sizeof(array2[0]); i++) {
        if (array2[i].cat.age > max) {
            max = array2[i].cat.age;
            index = i;
        }
    }
    cout << "Person Name: " << array2[index].name << ", Cat Name: " << array2[index].cat.name <<
            ", Cat Age: " << array2[index].cat.age << endl;
    return 0;
}