
#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature() {
        celsius = 0.0;
    }

    bool setTemperature(double c) {
        if (c >= -273.15) {
            celsius = c;
            return true;
        }
        return false;
    }

    double getCelsius() {
        return celsius;
    }

    double getFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }

    double getKelvin() {
        return celsius + 273.15;
    }
};

int main() {
    Temperature temp;
    temp.setTemperature(25);

    cout << "Celsius: " << temp.getCelsius() << " °C" << endl;
    cout << "Fahrenheit: " << temp.getFahrenheit() << " °F" << endl;
    cout << "Kelvin: " << temp.getKelvin() << " K" << endl;

    return 0;
}

