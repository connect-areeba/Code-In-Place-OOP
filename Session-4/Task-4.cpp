#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;

public:
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    int getArea() const
    {
        return width * height;
    }
};
int main()
{
    const Rectangle r(10, 5);
    cout << r.getArea() << endl;
    return 0;
}
