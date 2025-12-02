#include <iostream>
#include <string> 

using namespace std;

int main() {

    string studentID;
    string fullName;
    int score;
    string grade;


    cout << "===== Student Grade Calculator =====" << endl;

    cout << "1. Enter Student ID: ";


    cin >> studentID;



    cin.ignore();
    cout << "2. Enter Full Name: ";
    getline(cin, fullName);


    cout << "3. Enter Total Score (0-100): ";
    cin >> score;


    if (score >= 90) {
        grade = "A";
    }
    else if (score >= 80) {
        grade = "B";
    }
    else if (score >= 70) {
        grade = "C";
    }
    else {

        grade = "F";
    }


    cout << "\n====================================" << endl;
    cout << "          STUDENT RESULT" << endl;
    cout << "====================================" << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Total Score: " << score << endl;
    cout << "Grade Received: " << grade << endl;
    cout << "====================================" << endl;

    return 0;
}