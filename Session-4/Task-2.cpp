#include <iostream>
using namespace std;

int callCounter()
{
    static int count = 0;
    count++;
    return count;
}
int main()
{
    cout << callCounter() << endl;
    cout << callCounter() << endl;
    cout << callCounter() << endl;
    cout << callCounter() << endl;

    return 0;
}
