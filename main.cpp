#include <iostream>
#include "LargeInt.h"

int main() {
    LargeInt x("-11899980");
    LargeInt y(938239);
    std::string power = "17", base = "-9";

    std::cout << x << " + " << y << " = " << x + y << std::endl;
    std::cout << x << " - " << y << " = " << x - y << std::endl;
    std::cout << x << " * " << y << " = " << x * y << std::endl;
    std::cout << x << " / " << y << " = " << x / y << std::endl;
    std::cout << "-(" << x << ") = " << -x << std::endl;
    std::cout << base << "^" << power << " = " << LargeInt::l_pow(base, power) << std::endl;
    return 0;
}
