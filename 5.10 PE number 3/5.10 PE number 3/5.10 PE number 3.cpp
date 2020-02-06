#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::setprecision;
using std::ios;


int main()
{
	
	// Part 1
	cout << "Income versus GPA \n";
	cout << "Name Income Gpa\n";
	cout << "Jamie" << setw(12) << "12300.00"  << setw(6) << "3.4" << '\n';
	cout << "Linda" << setw(9) << "14500" << setw(10) << "3.92" << '\n';
	cout << "Bob" << setw(10) << "9400" << setw(11) << "3.12" << '\n';
	cout << "Marie" << setw(12) << "15129.00"  << setw(6) << "4.0" << '\n';
	

	//Part 2
	cout << "\nIncome versus Age \n";
	cout << "Name Income Age\n";
	cout.width(20);
	cout << "Jamie 12300    19\n";
	cout.width(20);
	cout << "Linda 14500    22\n";
	cout.width(20);
	cout << "Bob   9400     21\n";
	cout.width(20);
	cout << "  Frank 19129.00 51\n\n\n";
	cout << "*End of Report 2 **\n\n";


	

	return 0;


}
