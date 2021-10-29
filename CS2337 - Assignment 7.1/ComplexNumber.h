#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>

using namespace std;

class ComplexNumber {
public:
	// Constructor
	ComplexNumber(float _real, float _imag);

	// Default Constructor
	ComplexNumber();
	
	// Getters for the real and imaginary parts of a complex number
	float getReal();
	float getImag();

	// Setters for the real and imaginary parts of a complex number
	void setReal(float nReal);
	void setImag(float nImag);

	// Creating the definitions for the overloaded math operators

	ComplexNumber operator+(ComplexNumber addedComplexNumber); // Addition
	ComplexNumber operator-(ComplexNumber subComplexNumber); // Subtraction
	ComplexNumber operator*(ComplexNumber multComplexNumber); // Multiplication
	ComplexNumber operator/(ComplexNumber divComplexNumber); // Division
	ComplexNumber operator~(); // Conjugate

	// Creating the definitions for the overloaded IOStream operators
	friend ostream& operator<<(ostream& ostr, ComplexNumber cn); // Output
	friend istream& operator>>(istream& istr, ComplexNumber& cn); // Input

	// Creating the definitions for the overloaded equality operators
	bool operator==(const ComplexNumber cn); // Equals
	bool operator<(const ComplexNumber cn); // Less Than
	bool operator>(const ComplexNumber cn); // Greater Than
	bool operator<=(const ComplexNumber cn); // Less Than or Equal To
	bool operator>=(const ComplexNumber cn); // Greater Than or Equal To

private:
	// Private variables for the real and imaginary parts of the complex numbers
	float real;
	float imag;

};


#endif // !COMPLEXNUMBER_H
