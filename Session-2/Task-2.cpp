#include <iostream>
#include <iomanip>
using namespace std;

class Clock {
private:
    int hrs;
    int mins;

public:
    Clock(int h, int m) {
        hrs = h;
        mins = m;
    }

    void tick() {
        mins++;

        if (mins == 60) {
            mins = 0;
            hrs++;
        }

        if (hrs == 24) {
            hrs = 00;
        }
    }

    void display() {
        cout << setw(2) << setfill('0') << hrs << ":"
             << setw(2) << setfill('0') << mins << endl;
        }
};

int main() {
    Clock c(23, 58);

    for (int i = 0; i < 5; i++) {
        c.display();
        c.tick();
    }

    return 0;
}

