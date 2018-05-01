//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <ShawnD Herrick> on <05/01/2018>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sub    = 0;    //keeps track of subscripts
	int points = 0;  

	//declare arrays and fill with data
	int minPoints[] = { 0, 300, 350, 400, 450 };
	int maxPoints[] = { 299, 349, 399, 449, 500 };
	char grade[] = { 'F', 'D', 'C', 'B', 'A' };
	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;
	while (points >= 0)
	{
		if (points > 500)
		{
			cout << points << " is not a possible number. \n Please try again. \n ----------------" << endl;
		}
		for (int x = 0; x < 5; x++)
		{
			if (points >= minPoints[x] && points <= maxPoints[x])
			{
				cout << "Your grade is: " << grade[x] << endl;
			}
		}
		cout << "Enter points earned (negative number to stop program): ";
		cin >> points;
	}
	//system("pause");
	return 0;
}	//end of main function