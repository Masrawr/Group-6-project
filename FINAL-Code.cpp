//DO NOT CHANGE THIS CODE, MAKE CHANGES IN DEVELOPMENT BRANCH
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
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

    // Variables for student data
    string names[100][2]; // Assuming max 100 students, storing first and last names
    double scores[100][16]; // Assuming max 16 grading components per student
    int numStudents = 0;

    // File handling
    ifstream inFile(INPUT_FILE);
    ofstream outFile1(OUTPUT_FILE1);
    ofstream outFile2(OUTPUT_FILE2);

    // Read student data from file
    if (inFile.is_open()) {
        readDataFromFile(inFile, names, scores, numStudents);
        inFile.close();
    }
    else {
        cout << "Error: Unable to open input file." << endl;
        return 1;
    }

    // Display menu and process user choices
    int choice;
    do {
        displayMenu();
        cin >> choice;
        processUserChoice(choice, names, scores, numStudents);
    } while (choice != 0);

    // Write results to output files
    if (outFile1.is_open() && outFile2.is_open()) {
        writeDetailedResults(outFile1, names, scores, numStudents);
        writeSummaryResults(outFile2, names, scores, numStudents);
        outFile1.close();
        outFile2.close();
    }
    else {
        cout << "Error: Unable to open output files." << endl;
        return 1;
    }

	return 0;
}

void displayMenu()
{

}

void processUserChoice(int choice, string names[][2], double scores[][16], int numStudents)
{

}

void readDataFromFile(ifstream& inFile, string names[][2], double scores[][16], int& numStudents)
{ 

}

void writeDetailedResults(ofstream& outFile, string names[][2], double scores[][16], int numStudents)
{ 

}

void writeSummaryResults(ofstream& outFile, string names[][2], double scores[][16], int numStudents) 
{

}

char calculateLetterGrade(double weightedAverage)
{   

}

double findMinQuiz(double q1, double q2, double q3, double q4) 
{   

}

double findAverageQuizScore(double q1, double q2, double q3, double q4)
{   

}

double findAverageHomeworkScore(double h1, double h2, double h3, double h4) 
{  

}

double findAverageLabScore(double labs[]) 
{    

}

double calculateWeightedAverage(double scores[]) 
{  

}

void printStudentReport(string names[][2], double scores[][16], int numStudents) 
{   

}
