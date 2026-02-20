#include <iostream>
using namespace std;

class maths
{
public:
    int f1;
    static int gcd(int a, int b)
    {
        int gcd = 1;
        for (int i = 1; i <= a && i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }

};
int main()
{
    cout << maths :: gcd(10,20) << endl;
    return 0;
}
