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
	cout << "Jamie" << setw(6) << 12300.0 << setw(5) << 3.4 << '\n';
	cout << "Linda" << setw(6) << 14500 << setw(6) << 3.92 << '\n';
	cout << "Bob" << setw(7) << 9400 << setw(7) << 3.12 << '\n';
	cout << "Marie" << setw(6) << 15129.00  << setw(3) << 4.0 << '\n';
	

	//Part 2
	cout << "\nIncome versus Age \n";
	cout << "Name Income Age\n";
	cout.setf(ios::left);
	cout << "Jamie" << 12300 << 19 << '\n';
	cout << "Linda" << 14500 << 22 << '\n';
	cout << "Bob 9400 21\n";
	


	cout << "Frank";
	cout.setf(ios::floatfield, ios::fixed);
	cout << setprecision(8) << 19129.00 << endl;
	cout << setprecision(2) << 22 << endl;
	return 0;

	

	return 0;


}
