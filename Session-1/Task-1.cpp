#include <iostream>
#include <string>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

void greet(string name, string greeting) {
    cout << greeting << ", " << name << "!" << endl;
}

void greet() {
    greet("Guest");
}

int main() {
    greet("Ali");              
    greet("Sara", "Hi");       
    greet();                   

    return 0;
}
