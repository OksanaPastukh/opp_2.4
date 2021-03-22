#pragma once
#include <iostream>
using namespace std;

class Vector
{
	int size;
	int* m;
public:
	Vector();
	Vector(int);
	Vector(const Vector&);
	~Vector();
	bool SetSize(int);

	int GetSize() const { return size; }

	int& operator [] (const int i)
	{
		return m[i];
	}
	const int& operator [] (const int i) const
	{
		return m[i];
	}
	Vector& operator = (const Vector& );
	friend ostream& operator << (ostream& out, const Vector& a);
	friend istream& operator >> (istream& in, Vector& a);
	operator string () const;
	friend Vector operator * (const Vector& l, const int k);
	friend bool operator == (const Vector& p, const Vector& k);

	int Norma();
};

