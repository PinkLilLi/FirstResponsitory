#include<iostream>
#include"Add.h"
#include"Subtraction.h"
using namespace std;

void main() {
	int a = 1;
	int b = 2;
	int c, d;
	c = Add(a, b);
	d = Subtraction(a, b);
	cout << c << endl << d << endl;
}

