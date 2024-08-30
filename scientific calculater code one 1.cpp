#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Scientific Calculator" << endl;
    cout << "---------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Exponentiation" << endl;
    cout << "7. Sine" << endl;
    cout << "8. Cosine" << endl;
    cout << "9. Tangent" << endl;
    cout << "Enter your choice (1-9): ";
    cin >> choice;

switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
 case 5:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0) {
                result = sqrt(num1);
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Square root of a negative number!" << endl;
            }
            break;
        case 6:
            cout << "Enter the base number: ";
            cin >> num1;
            cout << "Enter the exponent: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 7:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = sin(num1 * M_PI / 180.0);
            cout << "Result: " << result << endl;
            break;
        case 8:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = cos(num1 * M_PI / 180.0);
            cout << "Result: " << result << endl;
            break;
 case 9:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = tan(num1 * M_PI / 180.0);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}




