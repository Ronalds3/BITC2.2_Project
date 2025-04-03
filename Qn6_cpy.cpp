#include <iostream>
#include <iomanip>
//DRUSCILLA
int main() {
  double num1, num2, result;
  char operation;
  char continueCalc;

  do {
    std::cout << "Enter first number, operator, second number: ";
    std::cin >> num1 >> operation >> num2;

    std::cout << std::fixed << std::setprecision(6);

    switch (operation) {
      case '+':
        result = num1 + num2;
        break;
      case '-':
        result = num1 - num2;
        break;
      case '*':
        result = num1 * num2;
        break;
      case '/':
        if (num2 != 0) {
          result = num1 / num2;
        } else {
          std::cout << "Error: Division by zero!" << std::endl;
          continue; // Skip to the next iteration
        }
        break;
      default:
        std::cout << "Error: Invalid operator!" << std::endl;
        continue; // Skip to the next iteration
    }

    std::cout << "Answer = " << result << std::endl;

    std::cout << "Do another (y/n)? ";
    std::cin >> continueCalc;

  } while (continueCalc == 'y');

  return 0;
}
//fake code
