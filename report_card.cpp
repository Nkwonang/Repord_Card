#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string studentName;
    int rollNumber;
    float subject1, subject2, subject3;
    float total, average;

    // Input
    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter marks for Subject 1: ";
    cin >> subject1;

    cout << "Enter marks for Subject 2: ";
    cin >> subject2;

    cout << "Enter marks for Subject 3: ";
    cin >> subject3;

    // Calculate total and average
    total = subject1 + subject2 + subject3;
    average = total / 3;

    // Output Report Card
    cout << "\n---------- Report Card ----------" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Roll Number  : " << rollNumber << endl;
    cout << "----------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Subject 1 Marks : " << subject1 << endl;
    cout << "Subject 2 Marks : " << subject2 << endl;
    cout << "Subject 3 Marks : " << subject3 << endl;
    cout << "----------------------------------" << endl;
    cout << "Total Marks     : " << total << endl;
    cout << "Average Marks   : " << average << endl;

    // Grade based on average
    if (average >= 90) {
        cout << "Grade           : A+" << endl;
    } else if (average >= 75) {
        cout << "Grade           : A" << endl;
    } else if (average >= 60) {
        cout << "Grade           : B" << endl;
    } else if (average >= 50) {
        cout << "Grade           : C" << endl;
    } else {
        cout << "Grade           : F (Fail)" << endl;
    }

    cout << "----------------------------------" << endl;

    return 0;
}

