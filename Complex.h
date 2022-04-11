#pragma once
#include <iostream>
using namespace std;

class TComplex
{
public:
	TComplex();
	TComplex(double _re, double _im);
	TComplex(const TComplex& a);
	double GetRe();
	double GetIm();
	void SetRe(double _re);
	void SetIm(double _im);
	TComplex operator + (TComplex& b);
	TComplex operator - (TComplex& b);
	TComplex operator * (TComplex& b);
	TComplex operator / (TComplex& b);
	TComplex mode (TComplex& b);

	TComplex& operator = (const TComplex& b);
	bool operator == (TComplex& b);
	friend ostream& operator << (ostream& b, TComplex& a);
	friend istream& operator >> (istream& b, TComplex& a);
private:
	double realPart;
	double imaginary;
};