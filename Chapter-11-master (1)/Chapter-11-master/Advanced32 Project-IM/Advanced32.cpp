//Advanced32.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sub    = 0;    //keeps track of subscripts
	int points = 0;  
	int pointsPossible = 0;

	//get total possible points
	cout << "Enter the number of possible points: ";
	cin >> pointsPossible;

	//declare arrays and fill with data
	
	
	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;
	
	while (points >= 0)
	{
		//search for points in minPoints array
		sub = 0;
		while (sub < 5 && minPoints[sub] <= points)
			sub += 1;
		//end while

		//display grade from grade array
		cout << "Grade: " << grade[sub - 1] << endl << endl;
		
		cout << "Enter points earned (negative number to stop program): ";
		cin >> points;
	} //end while

	//system("pause");
	return 0;
}	//end of main function