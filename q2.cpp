#include <iostream>

using namespace std;

class Temperature {
	private:
		double degreesKelvin,
		       degreesFahrenheit,
		       degreesCelsius;
	public:
		double kelvin, celcius, fahrenheit;
		void setTempKelvin() {
			degreesKelvin = kelvin;
		}
		double getTempKelvin() {
			degreesKelvin = kelvin;
			return degreesKelvin;
		}
		double getTempCelsius() {
			degreesCelsius = getTempKelvin() - 273.15;
			return degreesCelsius;
		} 
		double getTempFahrenheit() {
			degreesFahrenheit = degreesCelsius *(9/5.0) + 32;
			return degreesFahrenheit;
		}
};

int main() {
	Temperature temp;

	cout << "Enter a temperature in Kelvin: ";
	cin >> temp.kelvin;

	cout << "the temperature in Celcius: " << temp.getTempCelsius() << endl;
	cout << "The temperature in Fahrenheit: " << temp.getTempFahrenheit() << endl;

}
