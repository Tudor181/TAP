#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main()
{
    int num1, num2, den2;
    cout << "Enter the numerator for fraction2: ";
    cin >> num1;
    cout << "Enter the numerator and denominator for fraction3: ";
    cin >> num2 >> den2;
    Fraction fraction1;
    Fraction fraction2(num1);
    Fraction fraction3(num2, den2);
    Fraction fraction4 = fraction3;

    cout << fraction1 << endl << fraction3 << endl << fraction2 << endl << fraction4 << endl;

   Fraction impartire = fraction3 / fraction2;
    cout << "Impartire: " << quotient << endl;

        Fraction diff = fraction3 - fraction2;
    cout << "Difference: " << diff << endl;

    Fraction sum = fraction2 + fraction3;
    cout << "Sum: " << sum << endl;

    Fraction product = fraction2 * fraction3;
    cout << "Product: " << product << endl;
 

    bool isLess = fraction2 < fraction3;
      bool isEqual = fraction2 == fraction3;
    bool isGreater = fraction2 > fraction3;
    bool isLessOrEqual = fraction2 <= fraction3;
    bool isGreaterOrEqual = fraction2 >= fraction3;
    bool isNotEqual = fraction2 != fraction3;
    cout << isLess << " " << isGreater << " " << isLessOrEqual << " " << isGreaterOrEqual << " " << isEqual << " " << isNotEqual << endl;
    cout << fraction1 << endl;
    fraction1 += fraction2;
    cout << fraction1 << endl;
    fraction1 -= fraction3;
    cout << fraction1 << endl;
    fraction1 *= fraction2;
    cout << fraction1 << endl;
    fraction1 /= fraction3;
    cout << fraction1 << endl;

    Fraction preIncrement = ++fraction1;
    cout << preIncrement << endl;
    Fraction postIncrement = fraction1++;
    cout << postIncrement << endl;
    Fraction preDecrement = --fraction1;
    cout << preDecrement << endl;
    Fraction postDecrement = fraction1--;
    cout << postDecrement << endl;

    Fraction fraction5;
    fraction5 = fraction1;
    cout << fraction5 << endl;

}
