/*Title:Adding Arrays
Date:04/26/2018
Author:ShawnD Herrick*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void displayArray(double dollars[], int numElelments)
{
	double total = 0;
	cout << fixed << setprecision(2) << endl << endl;
	for (int sub = 0; sub < numElelments; sub++)
	{
		cout << "Sales for Region " << sub + 1 << ": $";
		cout << dollars[sub] << endl;
		total = total + dollars[sub];
	}
	cout << "Your total is << " << total << endl;
}
int main()
{
	double sales[4] = { 0.0 };
	double total = 0;
	string cntinue;
	do{
		for (int sub = 0; sub < 4; sub++)
		{
			cout << "Enter Sales for Region";
			cout << sub + 1 << ": ";
			cin >> sales[sub];
		}
		displayArray(sales, 4);
		cout << "Would you like to total anything else? \n >";
		cin >> cntinue;
	} while (cntinue != "No");

	system("pause");
	return 0;
}
