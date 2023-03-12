#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

double first_number;
char op;
double second_number;

cout << "Enter Number:";
cin >> first_number;

cout << "Enter OP:";
cin >> op;

cout << "Enter Number:";
cin >> second_number;

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

    return 0;
}