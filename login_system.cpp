#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float grade, credit;
    float totalCredits = 0;
    float totalGradePoints = 0;

    for(int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter Grade: ";
        cin >> grade;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        totalGradePoints += grade * credit;
        totalCredits += credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}