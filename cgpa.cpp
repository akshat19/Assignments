#include <bits/stdc++.h>
using namespace std;

double gp(double marks) {
    if (marks >= 90 && marks <= 100) {return 10; }
    if (marks >= 75 && marks <= 89) {return 9; }
    if (marks >= 65 && marks <= 74) {return 8; }
    if (marks >= 55 && marks <= 64) {return 7; }
    if (marks >= 45 && marks <= 49) {return 5; }
    if (marks >= 40 && marks <= 44) {return 4; }
    return 0;
}
int main() {
    cout<<"Hello World!";

    fstream file;
    file.open ("example.txt", ios::in );

    double ip = 0;
    double numerator = 0, denominator = 0;
    double credits, marks;
    char ch = 'y';
    while(ch == 'y') {
        cout << "Enter credits: ";
        file >> credits;

        cout << endl << "Enter marks: ";
        file >> marks;

        numerator += (credits * gp(marks));
        denominator += credits;

        cout << "continue?: ";
        file >> ch;
    }

    cout << numerator / denominator << endl;
}