#include<iostream>

int basicOp(char op, int val1, int val2) {
  switch(op) {
    case '+': return val1+val2;
    case '-': return val1-val2;
    case '*': return val1*val2;
    case '/': return val2 != 0 ? val1/val2 : 0;
    }
}

int main() {
    int value1, value2;
    char operation;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter first value: ";
    std::cin >> value1;

    std::cout << "Enter second value: ";
    std::cin >> value2;

    std::cout << "Result: " << basicOp(operation, value1, value2) << std::endl;
    return 0;
}
