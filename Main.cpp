#include <iostream>
#include <iomanip>
using namespace std;

//Functions for files
void readDataFromFile(ifstream& inFile, string names[][2], double scores[][16], int& numStudents);
void writeDetailedResults(ofstream& outFile, string names[][2], double scores[][16], int numStudents);
void writeSummaryResults(ofstream& outFile, string names[][2], double scores[][16], int numStudents);

//Functions for Calculations
char calculateLetterGrade(double weightedAverage);
double findMinQuiz(double q1, double q2, double q3, double q4);
double findAverageQuizScore(double q1, double q2, double q3, double q4);
double findAverageHomeworkScore(double h1, double h2, double h3, double h4);
double findAverageLabScore(double labs[]);
double calculateWeightedAverage(double scores[]);

//User interactive functions
void printStudentReport(string names[][2], double scores[][16], int numStudents);
void displayMenu();
void processUserChoice(int choice, string names[][2], double scores[][16], int numStudents);





int main()
{
	// File names
	const string INPUT_FILE = "gradesIn.txt";
	const string OUTPUT_FILE1 = "gradesOut1.txt";
	const string OUTPUT_FILE2 = "gradesOut2.txt";

	// Grading weight percentages
	const double ATTENDANCE_WEIGHT = 10.0;
	const double LAB_WEIGHT = 15.0;
	const double HOMEWORK_WEIGHT = 15.0;
	const double QUIZ_WEIGHT = 15.0;
	const double GROUP_WORK_WEIGHT = 5.0;
	const double MIDTERM_WEIGHT = 20.0;
	const double FINAL_EXAM_WEIGHT = 20.0;


	return 0;
}
