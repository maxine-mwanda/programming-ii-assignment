
#include <iostream>
using namespace std;

double calculator(double a, double b, char op)
{
    double answer;
    switch (op)
    {
    case '+':
        answer = a + b;
        break;

    case '-':
        answer = a - b;
        break;

    case '*':
        answer = a * b;
        break;

    case '/':
        answer = a / b;
        break;
    }
    return answer;
}

int main()
{
    double a, b;
    char op;

    for (;;)
    {

        cout << "\nCalculations will be made in the format a op b e.g a/b\n";

        cout << "Enter the first operand (a) ";
        cin >> a;
        cout << "Enter the operand (+,-,*,/) ";
        cin >> op;
        if (!(op == '+' || op == '-' || op == '*' || op == '/'))
        {
            cout << "The only operators allowed are: (+,-,*,/)\n";
            continue;
        }
        cout << "Enter the second operand (b) ";
        cin >> b;

        cout << calculator(a, b, op) << endl;
    }
    return 0;
}