class A {
    int x;
    double y;
public:
    A(int a, double b) : x(a), y(b) {}
    // Reason: Only built-in data types are used, no dynamic memory or resource.
    // Does NOT violate Rule of Three.
};

class B {
    string name;
public:
    B(string n) : name(n) {}
    // Reason: string manages its own memory safely.
    // Does NOT violate Rule of Three.
};

class C {
    FILE* fp;
public:
    C(const char* filename) { fp = fopen(filename, "r"); }
    ~C() { if (fp) fclose(fp); }
    // Reason: Owns a file resource and has a destructor,
    // but copy constructor and assignment operator are missing.
    // Violates Rule of Three.
};

class D {
    int* arr;
public:
    D(int n) { arr = new int[n]; }
    ~D() { delete[] arr; }
    // Reason: Uses dynamically allocated memory and defines a destructor,
    // but copy constructor and assignment operator are missing.
    // Violates Rule of Three.
};

