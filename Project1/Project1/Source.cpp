// Session1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main()
{
	/*
	int x = 0;
	double y = 42.5;
	bool Answer = false;



	cout << "The value of x is " << x << endl;
	cout << "This is a section of text" << " And this is another" << endl;
	cout << "The value of y is " << y << endl;
	cout << "The value of Answer is " << Answer << endl;

	int xx = 999;

	cout << "The value of xx if " << xx << endl;

	float X, Y, A, B, C, D;
	Y = 3;
	A = 6;
	B = 4;
	C = 7;
	D = 2;
	X = Y + (A+B)*2/(C-D);

	cout << "The value of X is " << X << endl;
	*/

	double BMI, height, weight;
	height = 1.73;
	weight = 70;

	BMI = weight / (height * height);
	//or do pow(height, 2) with #include <math.h> above

	cout << "The BMI value is " << BMI;

	return 0;


}

