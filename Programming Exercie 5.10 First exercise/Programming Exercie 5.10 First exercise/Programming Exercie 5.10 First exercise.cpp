#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const float ProductionRate = 100.00F;
const float PreProductionRate = 60.00F;
const float ProducersRate = 40.00F;

int main()
{
	double ProductionHours,
		
	 ProducersHours,
	  ProductionCost,
	  PreProductionHours,
	PreProductionCost,
	   ProducersCost,
	   ProducerHours,
		    TotalCost;

	cout << "Enter Production Hours: ";
	cin >> ProductionHours;
	cout << "\nEnter Pre-Production Hours: ";
	cin >> PreProductionHours;
	cout << "\nEnter Producers Hours: ";
	cin >> ProducerHours;

	ProductionCost = ProductionHours * ProductionRate;
	PreProductionCost = PreProductionHours * PreProductionRate;
	ProducersCost = ProducerHours * ProducersRate;

	TotalCost = ProductionCost + PreProductionCost + ProducersCost;

	cout << "\n\n Car Dealership Bill ";
	cout << "\n\nProduction Cost: ";
	cout << ProductionCost;

	cout << "\n\nPre-Production Cost : ";
	cout << PreProductionCost;

	cout << "\n\n Producers Cost: ";
	cout << ProducersCost;

	cout << "\n\nWeekly Total Cost: ";
	cout << TotalCost << endl;

	return 0;




}