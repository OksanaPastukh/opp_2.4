#include "Vector.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

Vector::Vector()
{
	size = 0;
	m = 0;
}
Vector::Vector(int n = 1)
	: size(n)
{
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = 0;
}
Vector::Vector(const Vector& a)
	: size(a.size)
{
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = a.m[i];
}
Vector::~Vector()
{
	delete[] m;
}
bool Vector::SetSize(int value)
{
	if (value > 0)
	{
		size = value;
		return true;
	}
	return false;
}
Vector& Vector::operator = (const Vector& a)
{
	if (&a == this) return *this; 
	size = a.size;
	delete[] m;
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = a.m[i];
	return *this;
}
ostream& operator << (ostream& out, const Vector& a)
{
	out << string(a);
	return out;
}
istream& operator >> (istream& in, Vector& a)
{
	for (int i = 0; i < a.size; i++)
	{
		cout << "array[ " << i << " ] =  "; in >> a[i];
	}
	cout << endl;
	return in;
}
Vector::operator string () const
{
	stringstream ss;
	ss << "Vector =  " << endl;
	for (int i = 0; i < size; i++)
	{
		ss << m[i] << ' ';
	}
	return ss.str();
}
Vector operator * (const Vector& l, const int k)
{
	int size = l.size;
	Vector t(size);
	for (int i = 0; i < size; i++)
		t.m[i] = l.m[i] * k;
	return t;
}
bool operator == (const Vector& p, const Vector& k)
{
	bool result = true;
	if (p.size != k.size)
	{ 
		result = false;
	}
	for (int i = 0; i < p.size; i++)
	{

		if(p[i]!=k[i])
		{
			result = false;
			break;
		}
	}
	return result;
}
int Vector::Norma()
{
	int result;
	int min_value = m[0];
	int max_value = m[0];
	for (int i = 0; i < size; i++)
	{
		if (m[i] < min_value)
		{
			min_value = m[i];
		}
		if (m[i] > max_value)
		{
			max_value = m[i];
		}
	}
	result = abs(max_value - min_value);
	return result;
}