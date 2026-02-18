#include <iostream>
#include <cstring>
using namespace std;

class Text {
    char* buffer;

public:
    Text(const char* s) {
        buffer = new char[strlen(s) + 1];
        strcpy(buffer, s);
    }

    // Default copy constructor would copy only the pointer (shallow copy)
    // That would cause both objects to point to the same memory
    // When destructors run, memory would be deleted twice (crash)
    Text(const Text& other) {
        buffer = new char[strlen(other.buffer) + 1]; // allocate separate memory
        strcpy(buffer, other.buffer);                 
    }

    void print() {
        cout << buffer << endl;
    }

    // Frees dynamically allocated memory
    // Safe now because each object has its own buffer
    ~Text() {
        delete[] buffer;
    }
};

int main() {
    Text t1("Hello");
    Text t2 = t1;   
    t1.print();
    t2.print();

    return 0;
}

