#include <iostream>
#include <cmath>
#include <string>
#include "GUI.cpp"

using namespace std;

int main() {

double first_number;
char op;
double second_number;

cin >> first_number >> op >> second_number;

 if (op == '+') {
        double result = first_number + second_number;
        cout << result << endl;
    }
    else if (op == '-') {
        double result = first_number - second_number;
        cout << result << endl;
    }
    else if (op == '*') {
        double result = first_number * second_number;
        cout << result << endl;
    }
    else if (op == '/') {
        double result = first_number / second_number;
        cout << result << endl;
    }
    else {
        cout << "Unsupported Character." << endl;
    }

    return 0;
}