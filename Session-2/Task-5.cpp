#include <iostream>
#include <string>
using namespace std;

class StudentGrades {
private:
    string name;
    float grades[5];
    int count;

public:
    StudentGrades(string n) {
        name = n;
        count = 0;
    }

    bool addGrade(float g) {
        if (g >= 0 && g <= 100 && count < 5) {
            grades[count++] = g;
            return true;
        }
        return false;
    }

    float getAverage() {
        if (count == 0) return 0;

        float sum = 0;
        for (int i = 0; i < count; i++)
            sum += grades[i];

        return sum / count;
    }

    void printReport() {
        cout << "Student: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < count; i++)
            cout << grades[i] << " " << endl;
        cout << "Average: " << getAverage() << endl;
    }
};

int main() {
    StudentGrades std("Ali");

    std.addGrade(85);
    std.addGrade(90);
    std.addGrade(78);
    std.addGrade(88);
    std.addGrade(120); 
    std.addGrade(92);  

    std.printReport();

    return 0;
}

