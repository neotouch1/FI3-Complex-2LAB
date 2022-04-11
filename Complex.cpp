#include "Complex.h"

TComplex::TComplex()
{
	realPart = 0;
	imaginary = 0;
}

TComplex::TComplex(double _re, double _im)
{
	this->realPart = _re;
	this->imaginary = _im;
}

TComplex::TComplex(const TComplex& a)
{
	realPart = a.realPart;
	imaginary = a.imaginary;
}

double TComplex::GetRe()
{
	return realPart;
}

double TComplex::GetIm()
{
	return imaginary;
}

void TComplex::SetRe(double _re)
{
	realPart = _re;
}

void TComplex::SetIm(double _im)
{
	imaginary = _im;
}

TComplex TComplex::operator+(TComplex& b)
{
	TComplex res;
	res.realPart = realPart + b.realPart;
	res.imaginary = imaginary + b.imaginary;
	return res;
}

TComplex TComplex::operator-(TComplex& b)
{
	TComplex res;
	res.realPart = realPart - b.realPart;
	res.imaginary = imaginary - b.imaginary;
	return res;
}

TComplex TComplex::operator * (TComplex& b)
{
	TComplex res;
	res.realPart = realPart * b.realPart - imaginary * b.realPart;
	res.imaginary = realPart * b.imaginary + b.realPart * imaginary;
	return res;
}




TComplex TComplex::operator / (TComplex& b)
{
	TComplex res;
	res.realPart = (realPart * b.realPart + imaginary * b.imaginary) / (b.realPart * b.realPart + b.imaginary * b.imaginary);
	res.imaginary = (b.realPart * imaginary - realPart * b.imaginary) / (b.realPart * b.realPart + b.imaginary * b.imaginary);
	return res;
}

TComplex TComplex::mode(TComplex& b)
{
	TComplex res;
	res.realPart = (realPart * realPart);
	res.imaginary = (imaginary * imaginary);
	return res;
}



TComplex& TComplex::operator=(const TComplex& b)
{
	this->realPart = b.realPart;
	this->imaginary = b.imaginary;
	return *this;
}

bool TComplex::operator==(TComplex& b)
{
	if ((b.realPart == realPart) && (b.imaginary == imaginary)) {
		return true;
	}
	else {
		return false;
	}
}

std::ostream& operator << (std::ostream& b, TComplex& a)
{
	b << a.realPart << "+i*" << a.imaginary;
	return b;
}

std::istream& operator >> (std::istream& b, TComplex& a)
{
	b >> a.realPart;
	b >> a.imaginary;
	return b;
}


//TComplex TComplex::operatormod (TComplex&)
//{
//	TComplex res;
//	res.realPart = pow(realPart, 2);
//	res.imaginary = pow(imaginary, 2);
//	return res;