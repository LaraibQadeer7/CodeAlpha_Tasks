#include <iostream>
using namespace std;

int n;
string sub[50];
string grade[50];
int credithours[50];
float totalgradepoints = 0;
int totalcredithours = 0;
void subjectInfo() {
    for (int i = 0; i < n; i++) {
        cin.ignore(); 
        cout << "Enter name of subject " << i + 1 << " : ";
        getline(cin, sub[i]);

        cout << "Enter credit hours of subject " << i + 1 << " : ";
        while (!(cin >> credithours[i]) || credithours[i] <= 0) {
            cout << "Invalid input.....Enter positive integers: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cin.ignore(); 
        cout << "Enter Grade (A, A-, B+, B, B-, C+, C, C-, D, F): ";
        cin >> grade[i];

        while (!(grade[i] == "A" || grade[i] == "A-" || grade[i] == "B+" ||
                 grade[i] == "B" || grade[i] == "B-" || grade[i] == "C+" ||
                 grade[i] == "C" || grade[i] == "C-" || grade[i] == "D" ||
                 grade[i] == "F")) {

            cout << "Invalid grade! Enter again: ";
            cin >> grade[i];
        }
    }
}
float getPoints(string g) {
    if (g == "A") return 4.0;
    else if (g == "A-")
	 return 3.7;
    else if (g == "B+") 
	return 3.3;
    else if (g == "B") return 3.0;
    else if (g == "B-") return 2.7;
    else if (g == "C+") return 2.3;
    else if (g == "C") return 2.0;
    else if (g == "C-") return 1.7;
    else if (g == "D") return 1.0;
    else return 0.0;
}
float calculateGPA() {
    totalgradepoints = 0;
    totalcredithours = 0;

    for (int i = 0; i < n; i++) {
        float points = getPoints(grade[i]);
        totalgradepoints += points * credithours[i];
        totalcredithours += credithours[i];
    }

    return totalgradepoints / totalcredithours;
}

float calculateCGPA(float GPA) {
    float prevCGPA;
    float prevSemesters;
    cout << "Enter Previous CGPA: ";
    cin >> prevCGPA;

    cout << "Enter Previous Semester Number: ";
    cin >> prevSemesters;

    return ((prevCGPA * prevSemesters) + GPA) / (prevSemesters + 1);
}

int main() {

    cout << "Enter the number of Subjects: ";
    cin >> n;

    subjectInfo();

    float gpa = calculateGPA();
    float cgpa = calculateCGPA(gpa);

    cout << "\n***** RESULT *****\n";

    for (int i = 0; i < n; i++) {
        cout << sub[i] << " - Grade: " << grade[i] << endl;
    }

    cout << "Semester GPA: " << gpa << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
