#include<iostream>
using namespace std;

int main(){
    int choice;
    float x, y;
    cout << "Enter two numbers you want to perform arithmetic calculations on: " << endl;
    cin >> x >> y;

    while (true) {
        cout << "\nMenu: \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Sum of two numbers is " << (x + y) << endl;
                break;
            case 2:
                cout << "Difference of two numbers is " << (x - y) << endl;
                break;
            case 3:
                cout << "Product of two numbers is " << (x * y) << endl;
                break;
            case 4:
                if (y != 0) {
                    cout << "Division of two numbers is " << (x / y) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice, Try again." << endl;
        }
    }
}

