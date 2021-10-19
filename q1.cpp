#include <iostream>
#include <iomanip>

using namespace std;

class GasPump {
	private:
		double amountDispensed,
		       amountCharged,
		       costPerGallon,
			   totalGas,
			   totalCost;

	public:
		double cost,
		time;
		double getAmountDispensed() {
			amountDispensed = 0.10 * time;
			return amountDispensed; 
			}
		double getAmountCharged() {
			amountCharged = getAmountDispensed() * cost; 
			return amountCharged; 
			}
		double getCostPerGallon() {
			costPerGallon = cost;
			return costPerGallon;
			}
		void reset() {
			amountDispensed = 0.0;
			amountCharged = 0.0;
		}		
};
	
int main() {
	GasPump pump;
	char fill = 'x';
  
	do {
		cout << "Enter cost of gas per gallon: $";
		cin >> pump.cost;
		cout << "Enter how long gas is pumped (in seconds): ";
		cin >> pump.time;
		pump.getAmountDispensed();
		pump.getAmountCharged();
		cout << "Amount of gas dispensed (in gallons): " << fixed << setprecision(2) << pump.getAmountDispensed() << endl;
		cout << "Amount charged for gas: $" << fixed << setprecision(2) << pump.getAmountCharged() << endl;
		cout << "The cost per gallon: $" << fixed << setprecision(2) << pump.getCostPerGallon() << endl;
		cout << "Enter Y to dispense again: ";
		cin >> fill;
	}
	while(fill == 'Y');

	return 0;
}
