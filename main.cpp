#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    double a = 8.0;
    double b = 15.0;

    int minus = calculator.Sub(a, b);
    int plus = calculator.Add(b,a );


    std::cout << "Sum: " << minus << std::endl;
    std::cout << "Difference: " << plus << std::endl;

    return 0;
}
