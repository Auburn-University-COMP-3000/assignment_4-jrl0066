#include <iostream>
#include <iomanip>
using namespace std;

// double getAmount(int time, double cost);
// double amountCharged(int time, double cost);

//class for the Gas Pump
class GasPump{
           
    public: 
        double cost,
               tGas = 0,
               tCost = 0;
        int time;

        double getAmount(){
            double gAmount = 0;
            gAmount = 0.10 * time;

            return gAmount;
        }
        double amountCharged(){
            double charged = 0;
            charged = getAmount() * cost;

            return charged;
        }
        double totalGas(){
            tGas += getAmount();

            return tGas;  
        }    
        double totalCharged(){
            tCost += amountCharged();
            return tCost;

        }
};

int main() {
    
    GasPump pump;
    char fillAgain = 'N';

    cout << "Enter the cost of the gas per gallon: ";
    cin >> pump.cost;
    
    do{
        cout << "Enter how long you pump gas in seconds: ";
        cin >> pump.time;
        pump.totalGas();
        pump.totalCharged();
        cout << "\nAmount of gallons dispensed: " <<fixed << setprecision(2) << pump.getAmount() << endl;
        cout << "Cost of gas per gallon: $" << fixed << setprecision(2) << pump.cost << endl;
        cout << "Amount charged for gas: $" << fixed << setprecision(2) << pump.amountCharged() << endl;

        cout << "\nEnter Y if you wish to dispense more gas: ";
        cin >> fillAgain;
    }
    while(fillAgain == 'Y');
    cout << "\nThe total gas dispensed is: " << pump.tGas << " gallons" << endl;
    cout << "The total cost for gas dispemsed is: $" << pump.tCost;

    return 0;
}


