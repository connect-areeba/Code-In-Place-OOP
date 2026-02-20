#include <iostream>
using namespace std;

class employee {
    private: 
    int id;
    static int count;
    public:
    employee()
    {
        count++;
        id = count;
    }

    int get_id()
    {
        return id;
    }
};
int employee :: count = 0;

int main()
{
    employee e1, e2, e3;

    cout << e1.get_id() << endl;
    cout << e2.get_id() << endl;
    cout << e3.get_id() << endl;

    return 0;
}
