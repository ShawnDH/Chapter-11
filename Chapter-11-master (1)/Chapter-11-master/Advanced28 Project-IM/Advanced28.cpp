//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <ShawnD Herrick> on <05/01/2018>

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare array
	int scores[20] = { 83, 55, 3, 89, 30, 72, 61, 93, 92, 20, 12, 22, 71, 9, 74, 76, 6, 82, 19, 36};

	//declare variables
	int searchScore = 0;
	int total       = 0;

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (scores[x] == searchScore)       
				total += 1;    
			//end if    
		//end for

		//display total
		cout << "Number of students earning a score of " 
			<< searchScore << ": " 
			<< total << endl << endl; 
	
		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while
	
	system("pause");
	return 0;
}	//end of main function