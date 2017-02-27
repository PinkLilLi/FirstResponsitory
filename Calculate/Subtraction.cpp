#include"Subtraction.h"
int Subtraction(int a, int b) {
	int m = 0;
	if (a >= b) {
		return  a - b;
	}
	else {
		return b - a;
	}
}