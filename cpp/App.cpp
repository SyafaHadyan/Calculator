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
        if (op == '/')
        {
            if (second_number == 0)
            {
                cout << "Can't divide by zero" << endl;
                return;
            }
            else
            {
                result = first_number / second_number;
            }
        }
        else if (op == '+')
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
    }
    else
    {
        cout << "Invalid or unsupported operator" << endl;
        cout << "Supported operator:" << " " << supported_op << endl;
        return;
    }

    cout << result << endl;
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
        if (op == '/')
        {
            if (second_number == 0)
            {
                cout << "Can't divide by zero" << endl;
            }
            else
            {
                result = first_number / second_number;
            }
        }
        else if (op == '+')
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
    }
    else
    {
        cout << "Invalid or unsupported operator" << endl;
        cout << "Supported operator:" << " " << supported_op << endl;
    }

    cout << result << endl;

    calculator();

    return 0;
}
