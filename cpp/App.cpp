#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void calculator()
{
    string supported_op = "+, -, *, /";
    double first_number;
    char op;
    double second_number;
    double result;

    cout << "Enter first number:" << " ";
    cin >> first_number;
    cout << "Enter operator:" << " ";
    cin >> op;
    cout << "Enter second number:" << " ";
    cin >> second_number;

    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        if (op == '+')
        {
            result = first_number + second_number;
        }
        else if (op == '-')
        {
            result = first_number - second_number;
        }
        else if (op == '*')
        {
            result = first_number * second_number;
        }
        else if (op == '/')
        {
            result = first_number / second_number;
        }

        cout << "\n" << "result:" << " " << result << "\n" << endl;
    }
    else
    {
        cout << "Invalid or unsupported operator" << endl;
        cout << "Supported operator:" << " " << supported_op << endl;
    }

}

int main()
{

    cout << "Welcome to CLI calculator" << endl;
    cout << "Supported operators: +, -, *, /" << endl;

    string supported_op = "+, -, *, /";
    double first_number;
    char op;
    double second_number;
    double result;

    cout << "Enter first number:" << " ";
    cin >> first_number;
    cout << "Enter operator:" << " ";
    cin >> op;
    cout << "Enter second number:" << " ";
    cin >> second_number;

    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        if (op == '+')
        {
            result = first_number + second_number;
        }
        else if (op == '-')
        {
            result = first_number - second_number;
        }
        else if (op == '*')
        {
            result = first_number * second_number;
        }
        else if (op == '/')
        {
            result = first_number / second_number;
        }

        cout << "\n" << "result:" << " " << result << "\n" << endl;
    }
    else
    {
        cout << "Invalid or unsupported operator" << endl;
        cout << "Supported operator:" << " " << supported_op << endl;
    }

    while (true)
    {
        calculator();
    }
    return 0;
}
