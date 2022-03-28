#include <iostream>
#include <string>
using namespace std;

class Book {
    public: 
        int price;
        string name;
        string *name1 = new string[200];
        Book() {

        }
        Book(string name1) {
            this->name1 = &name1;
        }
        Book(int price, string name) {
            this->price = price;
            this->name = name;
        }
        void toString() {
            cout << "Book's name: " << this->name << ", Book's price: " << this->price << endl;
        }
        void toStringC() {
            cout << "Book's name: " << *((*this).name1) << endl;
        }

};

void a () {
    Book *book = new Book(10,"Violet Evergarden");
    book->toString();
    delete book;
    return;
}
void b() {
    int input = 3;
    // cout << "Please enter integer: ";
    // cin >> input;
    Book* book = new Book[input];
    book[0] = Book(10,"Violet Evergarden 1");
    book[1] = Book(20,"Violet Evergarden 2");
    book[2] = Book(30,"Violet Evergarden 3");

    Book bk(0,"");
    for (int i = 0; i < input; i++) {
        if (book[i].price > bk.price) {
            bk.price = book[i].price;
            bk.name = book[i].name;
        }
    }
    bk.toString();
    delete[] book;
    return;
}
void c() {
    Book *book = new Book("Violet 4");
    book->toStringC();
    delete book;
}
int main() {
    a();
    b();
    c();
    return 0;
}