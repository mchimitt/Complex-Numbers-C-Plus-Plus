#include "ComplexNumber.h"
#include <iostream>

int main()
{
    // Variables for the two complex numbers
    ComplexNumber cn1;
    ComplexNumber cn2;

    // Input the first Complex Number
    cout << "Complex Number 1: " << endl;
    cin >> cn1;
    cout << endl;

    // Input the second complex number
    cout << "Complex Number 2: " << endl;
    cin >> cn2;
    cout << endl;

    // Printing both complex numbers
    cout << "Complex Number 1: " << cn1 << endl << "Complex Number 2: " << cn2 << endl << endl;
    
    // Adding the complex numbers
    cout << "Addition: (" << cn1 << ") + (" << cn2 << ") = " << cn1 + cn2 << endl << endl;

    // Subtracting the complex numbers
    cout << "Subtraction: (" << cn1 << ") - (" << cn2 << ") = " << cn1 - cn2 << endl << endl;

    // Multiplying the complex numbers
    cout << "Multiplication: (" << cn1 << ") * (" << cn2 << ") = " << cn1 * cn2 << endl << endl;

    // Dividing the complex numbers
    cout << "Division: (" << cn1 << ") / (" << cn2 << ") = " << cn1 / cn2 << endl << endl;
    
    // Conjugate of both complex numbers
    cout << "Conjugate of Complex Number 1: " << ~cn1 << endl << endl;
    cout << "Conjugate of Complex Number 2: " << ~cn2 << endl << endl;

    // Checking if the complex numbers are equal to each other
    cout << "Equality: (" << cn1 << ") == (" << cn2 << ") : " << (cn1 == cn2) << endl << endl;

    // Checking if Complex Number 1 is less than Complex Number 2
    cout << "Less Than: (" << cn1 << ") < (" << cn2 << ") : " << (cn1 < cn2) << endl << endl;

    // Checking if Complex Number 1 is less than or equal to Complex Number 2
    cout << "Less Than or Equal To: (" << cn1 << ") <= (" << cn2 << ") : " << (cn1 <= cn2) << endl << endl;

    // Checking if Complex Number 1 is greater than Complex Number 2
    cout << "Greater Than: (" << cn1 << ") > (" << cn2 << ") : " << (cn1 > cn2) << endl << endl;

    // Checking if Complex Number 1 is greater than or equal to Complex Number 2
    cout << "Greater Than or Equal To: (" << cn1 << ") >= (" << cn2 << ") : " << (cn1 >= cn2) << endl << endl;

    return 0;
}
