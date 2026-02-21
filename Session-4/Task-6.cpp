#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;

public:
    student(int r)
    {
        roll_no = r;
    }
    int getRoll() const
    {
        return roll_no;
    }
};
int main()
{
    const student s(25060);
    cout << s.getRoll() << endl;
    return 0;
}
