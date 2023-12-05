#include <iostream>
using namespace std;

int main() {
  cout << "Welcome to Simple Calculator" << endl;

  while (true) {
    cout << "Select an operation:" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. "
            "Quit\n";
    cout << "Your choice: ";

    int choice;
    cin >> choice;
    if (choice == 5) {
      break;
    }

    if (choice >= 5 || choice <= 0) {
      cout << "Error";
      cout << endl;
      return 0;
    }

    float x, y;
    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter the second number: ";
    cin >> y;
    if (choice == 4 && y == 0) {
      cout << "Error";
      return 0;
      cout << endl;
    }

    cout << "Result: ";
    switch (choice) {
      case 1:
        cout << x + y;
        break;
      case 2:
        cout << x - y;
        break;
      case 3:
        cout << x * y;
        break;
      case 4:
        cout << x / y;
        break;
    }
    cout << endl;
  }

  cout << "Have a good day!";

  return 0;
}