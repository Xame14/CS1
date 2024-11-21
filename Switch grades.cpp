#include <iostream>
using namespace std;

int main() {
    const int numStudents = 5; // Fixed number of students
    int score;
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the score for student " << i+1 << " (0-100): ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "Invalid score." << endl;
            break;
        }
         switch(score)
        {
            case 90 ... 100:
                cout << "Grade: A" << endl;
                break;
            case 80 ... 89:
                cout << "Grade: B" << endl;
                break;
            case 70 ... 79:
                cout << "Grade: C" << endl;
                break;
            case 60 ... 69:
                cout << "Grade: D" << endl;
                break;
            default:
                cout << "Grade: F" << endl;
                break;
        }
    }
return 0;
}
