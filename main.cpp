#include <iostream>
#include <string>

// Project 1 — Richard Webster
// CIS 5 Week 04 · Student card

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  
  const int CURRENT_YEAR = 2026;
  int grad_year = CURRENT_YEAR + 4;
  const int credits_needed = 60;
  string name;
  int age;
  int credits;
  double gpa;
  
  
cout << "What is your first name?" << endl;
cin >> name;

cout << "Enter your age" << endl;
cin >> age;

cout << "How many college credits are you currently enrolled?" << endl;
cin >> credits;

cout << "What is your current GPA?" << endl;
cin >> gpa;

int credits_togo = credits_needed - credits;

cout << "======STUDENT CARD======" << endl << endl;
cout << "Student Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Enrolled Credits: " << credits << endl;
cout << "Current GPA: " << gpa << endl << endl;
cout << "Credits Needed to Graduate: " << credits_togo << endl;
cout << "Expected Graduation Date: " << grad_year << endl;

  return 0;
}
