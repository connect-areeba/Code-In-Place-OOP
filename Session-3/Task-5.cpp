#include <iostream>
#include <cstring>
using namespace std;

class UniqueString {
    char* data;
public:
    UniqueString(const char* s) {
        data = new char[strlen(s) + 1];
        strcpy(data, s);
    }
    UniqueString(const UniqueString& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }
    void set(const char* s) {
        delete[] data;
        data = new char[strlen(s) + 1];
        strcpy(data, s);
    }
    void print() const {
        cout << data << endl;
    }
    ~UniqueString() {
        delete[] data;
    }
};

class SharedString {
    const char* data;
public:
    SharedString(const char* s) {
        data = s;
    }
    void print() const {
        cout << data << endl;
    }
};

int main() {
    UniqueString u1("AREEBA");
    UniqueString u2 = u1;

    u1.print();
    u2.print();

    SharedString s1("BUSHRA");
    SharedString s2 = s1;

    s1.print();
    s2.print();

    return 0;
}

