#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Divide_By_Zero() {
    cout << "Can't divide by zero";
}

int main() {

string supported_Char = "+, -, *, /";
double first_number;
char op;
double second_number;

cout << "Enter Number:";
cin >> first_number;

cout << "Enter OP:";
cin >> op;

cout << "Enter Number:";
cin >> second_number;

if (op == '/' && second_number == 0) {
    Divide_By_Zero();
}

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
    else if (op != '+' || op != '-' || op != '*' || op!= '/') {
    cout << "Invalid or unsupported operator"<< endl;
    cout << "Supported operator:" << " " << supported_Char << endl;
    }

    return 0;
}