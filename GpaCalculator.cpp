/* Joshua Leyendecker
   SNHU IT 312
   Sept 10, 2018

   2-1 Programming Assignment: Using Operators to Calculate GPA and Honors

   Prompt: 
   Calculate your own GPA to determine whether you will graduate with honors.
*/


#include "stdafx.h"
#include <iostream>
using namespace std;

/* Too many intilializer values and problem converting from double to char, function to convert the char to respective double*/

double conGrades(char grades) {
	if (grades == 'A','a') {
		return 4.0;
	}
	else if (grades == 'B','b') {
		return 3.0;
	}
	else if (grades == 'C','c') {
		return 2.0;
	}
	else if (grades == 'D','d') {
		return 1.0;
	}
	else {
		return 0.0; // any other input would return with an F value or 0
	}
}

/* First part of the program is to determine what the GPA is of the student based on the input of the user. 
The main problem that ran into is that It was case sensitive and trying to input a lowercase will return 
a zero on the input.*/

int main()
{
	double sumGrade = 0.0;
	double totalGpa;
	char grade1, grade2, grade3, grade4;

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "~~~~~GPA Calculator~~~~\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\n Input your grades e.g. (A, B, C, D,).\n";
	cout << "\n Please enter your first grade.";
	cin >> grade1;
	sumGrade += conGrades(grade1);
	
	cout << "\n Please enter your second grade.";
	cin >> grade2;
	sumGrade += conGrades(grade2);

	cout << "\n Please enter your third grade.";
	cin >> grade3;
	sumGrade += conGrades(grade3);

	cout << "\n Please enter your fourth grade.";
	cin >> grade4; 
	sumGrade += conGrades(grade4);


	totalGpa = sumGrade / 4;
	cout << "\n Your GPA is: " << totalGpa;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

	/* The second part of the program decides whether the user is graduating with Magna Cum Laude, Summa Cum Laude, Cum Laude or without honors*/

	bool scLaude = totalGpa >= 3.9;  // define the bool statements
	bool mcLaude = totalGpa >= 3.8 && totalGpa < 3.9;
	bool cLaude = totalGpa >= 3.65 && totalGpa < 3.8;
	bool withoutHonors = totalGpa < 3.65;

	// Print out statements
	cout << "\nGraduating summa cum laude is "
		<< boolalpha // True or Fals statemtent printout
		<< scLaude ;

	cout << "\nGraduating magna cum laude is "
		<< boolalpha
		<< mcLaude;

	cout << "\nGraduating cum laude is "
		<< boolalpha
		<< cLaude;

	cout << "\nGraduating without honors is "
		<< boolalpha
		<< withoutHonors;

	return 0;

}

