#include <iostream>
#include <string>
using namespace std;

int main() {
    // ============================
    // Student Information Program
    // ============================
    string name;
    int age;

    cout << "==============================" << endl;
    cout << "     STUDENT INFORMATION      " << endl;
    cout << "==============================" << endl;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, name); // allows spaces in name

    cout << "Enter age: ";
    cin >> age;

    // Display student details
    cout << "\n==============================" << endl;
    cout << "      STUDENT DETAILS         " << endl;
    cout << "==============================" << endl;
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;

    return 0;
}

