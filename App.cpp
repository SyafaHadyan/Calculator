#include <iostream>
#include <cmath>
#include <string>

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

    return 0;
}