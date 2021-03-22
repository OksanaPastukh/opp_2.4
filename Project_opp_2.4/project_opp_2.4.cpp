#include "Vector.h"
#include <iostream>
using namespace std;

int main()
{
	Vector a; 
	int size;
	cout << "size = ";cin >> size;
	Vector b(size); 
	cin >> b; 
	cout << b << endl; 
	int scalar;
	cout << "Enter scalar quantity to multiply by :";
	cin >> scalar;
	Vector c = b * scalar;
	cout << c << endl;
	cout << "Enter compare vector :" << endl;
	cout << "size = ";cin >> size;
	Vector d(size);
	cin >> d;
	cout << d << endl;
	if (b == d)
	{
		cout << " Vectors are equal " << endl;
	}
	else
	{
		cout << " Vectors are not  equal " << endl;
	}
	cout << "size = ";cin >> size;
	Vector s(size);
	cin >> s;
	cout << "Norma vectora = " << s.Norma() << endl;
	return 0;
}