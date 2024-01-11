#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    double real1, real2, imag2;
    cout << "Enter the real part for c2: ";
    cin >> real1;
    cout << "Enter the real part and imaginary part for c3: ";
    cin >> real2;
    cin >> imag2;

    Complex c1;
    Complex c2(real1);
    Complex c3(real2, imag2);
    Complex c4 = c3;

    cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl;

    Complex sum = c2 + c3;
    cout << "Sum: " << sum << endl;
    Complex diff = c3 - c2;
    cout << "Difference: " << diff << endl;
    Complex product = c2 * c3;
    cout << "Product: " << product << endl;
    Complex quotient = c3 / c2;
    cout << "Quotient: " << quotient << endl;

    bool isLess = c2 < c3;
    bool isGreater = c2 > c3;
    bool isLessOrEqual = c2 <= c3;
    bool isGreaterOrEqual = c2 >= c3;
    bool isEqual = c2 == c3;
    bool isNotEqual = c2 != c3;
    cout << isLess << " " << isGreater << " " << isLessOrEqual << " " << isGreaterOrEqual << " " << isEqual << " " << isNotEqual << endl;

    // Compound assignment operators
    cout << c1 << endl;
    c1 += c2;
    cout << c1 << endl;
    c1 -= c3;
    cout << c1 << endl;
    c1 *= c2;
    cout << c1 << endl;
    c1 /= c3;
    cout << c1 << endl;

    // Unary operators
    Complex preIncrement = ++c1;
    cout << preIncrement << endl;
    Complex postIncrement = c1++;
    cout << postIncrement << endl;
    Complex preDecrement = --c1;
    cout << preDecrement << endl;
    Complex postDecrement = c1--;
    cout << postDecrement << endl;

    // Assignment operator
    Complex c5;
    c5 = c1;
    cout << c5 << endl;


}
