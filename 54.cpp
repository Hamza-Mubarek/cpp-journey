#include <iostream>
#include <limits>
#include <iomanip>

int main() {
    // Set text alignment for clean output formatting
    std::cout << std::left << std::setw(20) << "Data Type" 
              << std::setw(15) << "Size (Bytes)" 
              << "Range (Min to Max)\n";
    std::cout << "--------------------------------------------------------------------------------\n";

    // 1. Character Types
    std::cout << std::setw(20) << "char" 
              << std::setw(15) << sizeof(char) 
              << static_cast<int>(std::numeric_limits<char>::min()) << " to " 
              << static_cast<int>(std::numeric_limits<char>::max()) << "\n";

    std::cout << std::setw(20) << "unsigned char" 
              << std::setw(15) << sizeof(unsigned char) 
              << static_cast<int>(std::numeric_limits<unsigned char>::min()) << " to " 
              << static_cast<int>(std::numeric_limits<unsigned char>::max()) << "\n";

    // 2. Short Integers
    std::cout << std::setw(20) << "short" 
              << std::setw(15) << sizeof(short) 
              << std::numeric_limits<short>::min() << " to " 
              << std::numeric_limits<short>::max() << "\n";

    std::cout << std::setw(20) << "unsigned short" 
              << std::setw(15) << sizeof(unsigned short) 
              << std::numeric_limits<unsigned short>::min() << " to " 
              << std::numeric_limits<unsigned short>::max() << "\n";

    // 3. Standard Integers
    std::cout << std::setw(20) << "int" 
              << std::setw(15) << sizeof(int) 
              << std::numeric_limits<int>::min() << " to " 
              << std::numeric_limits<int>::max() << "\n";

    std::cout << std::setw(20) << "unsigned int" 
              << std::setw(15) << sizeof(unsigned int) 
              << std::numeric_limits<unsigned int>::min() << " to " 
              << std::numeric_limits<unsigned int>::max() << "\n";

    // 4. Long Integers
    std::cout << std::setw(20) << "long" 
              << std::setw(15) << sizeof(long) 
              << std::numeric_limits<long>::min() << " to " 
              << std::numeric_limits<long>::max() << "\n";

    std::cout << std::setw(20) << "long long" 
              << std::setw(15) << sizeof(long long) 
              << std::numeric_limits<long long>::min() << " to " 
              << std::numeric_limits<long long>::max() << "\n";

    // 5. Floating-Point Numbers
    std::cout << std::setw(20) << "float" 
              << std::setw(15) << sizeof(float) 
              << std::numeric_limits<float>::min() << " to " 
              << std::numeric_limits<float>::max() << "\n";

    std::cout << std::setw(20) << "double" 
              << std::setw(15) << sizeof(double) 
              << std::numeric_limits<double>::min() << " to " 
              << std::numeric_limits<double>::max() << "\n";

    std::cout << std::setw(20) << "long double" 
              << std::setw(15) << sizeof(long double) 
              << std::numeric_limits<long double>::min() << " to " 
              << std::numeric_limits<long double>::max() << "\n";

    // 6. Boolean
    std::cout << std::setw(20) << "bool" 
              << std::setw(15) << sizeof(bool) 
              << std::numeric_limits<bool>::min() << " to " 
              << std::numeric_limits<bool>::max() << " (0=false, 1=true)\n";
    char ch1='A';
    std::cout << "Character: " <<(int) ch1 << std::endl;
    int a = 5;
    int b = a++ + ++a; 
    std::cout << "Value of b: " << b << std::endl;
    float price = 19.99;              // 'f' suffix required for float
    std::cout << "Price: " << price << std::endl;
    double pi = 3.14159265359;         // Default for decimal numbers
    std::cout << "Value of pi: " << pi << std::endl;
    long double big = 1.23456789;     // 'L' suffix required for long double
    std::cout << "Value of big: " << big << std::endl;
    return 0;
}
