#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Enter number of courses: ";
    cin >> n;

    double grade[n], credit[n];
    double totalCredits = 0;
    double totalGradePoints = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter grade for course " << i + 1 << ": ";
        cin >> grade[i];

        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n--- Course Details ---\n";

    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1
             << " | Grade: " << grade[i]
             << " | Credits: " << credit[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;

    cout << fixed << setprecision(2);
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
