#include <iostream>
#include <cmath>

using namespace std;

int main()
{
//Declaration
	int act1, act2, act3, actTotal, macProb, quiz1, quiz2, quizTotal, finalExam, finalExamTotal, att;
	float actTotalPercent, macProbTotalPercent,quizTotalPercent, finalExamTotalPercent,  attTotalPercent, finalGrade;

	//3 Activity - 30%
	cout << "Enter Act 1: ";
	cin >> act1;
	cout << "Enter Act 2: ";
	cin >> act2;
	cout << "Enter Act 3: ";
	cin >> act3;
	actTotal = (act1 + act2 + act3) / 3;
	actTotalPercent = actTotal * .3;

	//Machine Problem - 20%
	cout << "Enter Machine Problem: ";
	cin >> macProb;
	macProbTotalPercent = macProb * .2;

	//2 Quizzes - 20%
	cout << "Enter Quiz 1: ";
	cin >> quiz1;
	cout << "Enter Quiz 2: ";
	cin >> quiz2;
    quizTotal = (quiz1 + quiz2) / 2;
	quizTotalPercent = quiz1*.2;

	//Final Exam - 25%
	cout << "Enter Final Exam: ";
	cin >> finalExam;
	finalExamTotalPercent = finalExam * .25;

	//Attendance - 5%
	cout << "Enter Attendance: ";
	cin >> att;
	attTotalPercent = att * .05;

	// Compute the Final Grade
	finalGrade = actTotalPercent + macProbTotalPercent + quizTotalPercent + finalExamTotalPercent + attTotalPercent;

	//Display Final Grade
	cout << "Final Grade: " << round(finalGrade);

	return 0;
}
