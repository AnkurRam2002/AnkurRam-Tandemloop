#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    void getInput() {
        cout << "Enter first number (a): ";
        cin >> a;
        cout << "Enter second number (b): ";
        cin >> b;
        cout << "Enter operation: ";
        cin >> operation;
    }

    void performOperation() {
        if (operation == "Addition") {
            cout << "Result: " << (a + b) << endl;
        }
        else if (operation == "Subtractraction") {
            cout << "Result: " << (a - b) << endl;
        }
        else if (operation == "Multiplication") {
            cout << "Result: " << (a * b) << endl;
        }
        else if (operation == "Division") {
            if (b != 0)
                cout << "Result: " << (a / b) << endl;
            else
                cout << "Error: Division by zero." << endl;
        }
        else {
            cout << "Invalid operation." << endl;
        }
    }
};

int main() {
    Calculator calc;
    calc.getInput();
    calc.performOperation();

    return 0;
}
