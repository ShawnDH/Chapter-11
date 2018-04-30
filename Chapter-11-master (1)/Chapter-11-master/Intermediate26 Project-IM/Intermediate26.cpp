//Intermediate26.cpp - increases the prices stored in
//an array and then displays the increased prices
//Created/revised by <ShawnD Herrick> on <04/30/2018>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	//declare array and variables
	double prices[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
	double increase = 0.0;
	double mult;

	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	mult = (increase / 100 + 1);
	cout << "The New Prices are: " << endl;
	for (int x = 0; x < 10; x++)
	{
		cout << " $" << prices[x] * mult << endl;
	}
	cout << "(At a %" << increase << " price increase)" << endl;
	system("pause");
	return 0;
}	//end of main function