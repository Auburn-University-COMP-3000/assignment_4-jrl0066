#include <iostream>

using namespace std;

class Temperature {
	private:
		double kelvin,
		       fahrenheit,
		       celsius;
	public:
		void setKelvin(double temp) { 
			kelvin = temp;
		 	}
		double getKelvin() { 
			return kelvin; }
		void setCelsius(){ 
			celsius = kelvin -273.15;
		 	}
		double getCelsius() { 
			return celsius; 
			} 
		void setFahrenheit() { 
			fahrenheit = (celsius*(9/5.0))+32; 
			}
		double getFahrenheit() { 
			return fahrenheit; 
			}
};

int main() {

	double temperature;
	Temperature thermo;

	cout << "Enter a temperature in Kelvin: ";
	cin >> temperature;
	thermo.setKelvin(temperature);
	thermo.setCelsius();
	thermo.setFahrenheit();
	cout << "\n Temperature given in Kelvin: " << thermo.getKelvin() << endl;
	cout << "Temperature given in Celcius: " << thermo.getCelsius() << endl;
	cout << "Temperature given in Fahrenheit: " << thermo.getFahrenheit() << endl; 

	return 0;
}

