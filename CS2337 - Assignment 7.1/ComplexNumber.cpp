#include "ComplexNumber.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Constructor for the complex number that takes in two parameters for the real and imaginary parts
ComplexNumber::ComplexNumber(float _real, float _imag)
{
	real = _real;
	imag = _imag;

}

// Default Constructor for the complex number (takes no parameters)
ComplexNumber::ComplexNumber() {
	real = 0.0;
	imag = 0.0;
}

// Getter for the real part of the complex number
float ComplexNumber::getReal()
{
	return real;
}

// Getter for the imaginary part of the complex number
float ComplexNumber::getImag()
{
	return imag;
}

// Setter for the real part of a complex number
void ComplexNumber::setReal(float nReal)
{
	real = nReal;
}

// Setter for the imaginary part of a complex number
void ComplexNumber::setImag(float nImag)
{
	imag = nImag;
}

// Overloading the addition operator
ComplexNumber ComplexNumber::operator+(ComplexNumber addedComplexNumber)
{
	// Adding the real parts
	float addedReal = real + addedComplexNumber.real;
	// Adding the imaginary parts
	float addedImag = imag + addedComplexNumber.imag;

	return ComplexNumber(addedReal, addedImag);
}

// Overloading the subtraction operator
ComplexNumber ComplexNumber::operator-(ComplexNumber subComplexNumber)
{
	// Subtracting the real parts 
	float subReal = real - subComplexNumber.real;
	// Subtracting the imaginary parts
	float subImag = imag - subComplexNumber.imag;

	return ComplexNumber(subReal, subImag);
}

// Overloading the multiplication operator
ComplexNumber ComplexNumber::operator*(ComplexNumber multComplexNumber)
{
	// Using the FOIL method to multiply two complex numbers

	// First real part
	float real1 = real * multComplexNumber.real;
	// Second real part
	float real2 = imag * multComplexNumber.imag * -1;

	// First imaginary part
	float imag1 = imag * multComplexNumber.real;
	// Second imaginary part
	float imag2 = real * multComplexNumber.imag;

	// Adding the real parts together
	float nReal = real1 + real2;
	// Adding the imaginary parts together
	float nImag = imag1 + imag2;
	
	// Returning the complex number from the real and imaginary parts
	return ComplexNumber(nReal, nImag);
}

// Overloading the division operator
ComplexNumber ComplexNumber::operator/(ComplexNumber divComplexNumber)
{
	// Getting the real part of the divided complex number
	float nReal = ( ((*this).real * divComplexNumber.real) + ((*this).imag * divComplexNumber.imag)) / (pow(divComplexNumber.real, 2) + pow(divComplexNumber.imag, 2));
	
	// Getting the imaginarty part of the divided complex number 
	float nImag = ( (divComplexNumber.real * (*this).imag) - ((*this).real * divComplexNumber.imag)) / (pow(divComplexNumber.real, 2) + pow(divComplexNumber.imag, 2));

	// Returning the divided complex number 
	return ComplexNumber(nReal, nImag);
}

// Overloading the conjugate operator
ComplexNumber ComplexNumber::operator~()
{
	// Switching the sign of the imaginary part of the complex number
	return ComplexNumber(real, -imag);
}

// Overloading the == operator
bool ComplexNumber::operator==(ComplexNumber cn)
{
	// If each part of the complex number equals the other then return true
	if (this -> imag == cn.imag && this -> real == cn.real) {
		return true;
	}
	else {
		return false;
	}
}

// Overloading the < operator
bool ComplexNumber::operator<(const ComplexNumber cn)
{
	// Getting the modulus of the left complex number
	float lcn = sqrt(pow(real, 2) + pow(imag, 2));
	// Getting the modulus of the right complex number
	float rcn = sqrt(pow(cn.real, 2) + pow(cn.imag, 2));
	// If the left modulus is less than the right modulus then return true
	if (lcn < rcn) {
		return true;
	}
	else {
		return false;
	}
}

// Overloading the > operator
bool ComplexNumber::operator>(const ComplexNumber cn)
{
	// Uses the the overloaded < and == operator to check to see if one complex number is greater than the other
	if (!((*this) < cn) && !((*this) == cn)) {
		return true;
	}
	else {
		return false;
	}
}

// Overloading the <= operator
bool ComplexNumber::operator<=(const ComplexNumber cn)
{
	// Uses the the overloaded < and == operator to check to see if one complex number is less than or equal to the other
	if ((*this) < cn || (*this) == cn) {
		return true;
	}
	else {
		return false;
	}
}

// Overloading the >= operator
bool ComplexNumber::operator>=(const ComplexNumber cn)
{
	// Uses the the overloaded > and == operator to check to see if one complex number is greater than or equal to the other
	if ((*this) > cn || (*this) == cn) {
		return true;
	}
	else {
		return false;
	}
}

// Overloading the >> operator
// Gets a complex number as an input
istream& operator>>(istream& istr, ComplexNumber& cn)
{
	// Inputting the real part of the complex number
	cout << "Enter the real part: ";
	istr >> cn.real;

	// Inputting the imaginary part of the complex number
	cout << "Enter the imaginary part: ";
	istr >> cn.imag;

	// Returning the input stream
	return istr;
}


// Overloading the << operator
// Prints a complex number to the console (ex: 10 + 4i or 2 - 12i)
ostream& operator<<(ostream& ostr, ComplexNumber cn)
{
	 // Variable for the imaginary part of the complex number
	float im;
	// Variable for the operator in the output
	string op;
	
	// Checking to see if the imaginary part of the number is positive or negative
	if (cn.imag < 0) {
		// Changing the operator to be negative if the imaginary part is negative
		op = " - ";
		// Removing the negative
		im = cn.imag * -1;
	}
	else {
		// Changing the operator to be positive
		op = " + ";
		im = cn.imag;
	}

	// Printing the complex number
	ostr << cn.real << op << im << "i";

	// Returning the output stream
	return ostr;
}
