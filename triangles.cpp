// calculate perimeter of right angled triangles
#include <iostream>
#include <cmath>
using namespace std;

int LIM = 1000; // limit for perimeter

//test whether the boundary condition is met
bool test(int a, int b, int c) {
	if (c != 0) {
		return ( (a + b + c) <= (LIM) );
	}
	else {
		return false;
	}
}

int getc (int a, int b) {
	double c = sqrt(pow((double)a,2) + pow((double)b,2));
	if (floor(c) == c && c != 0) {
		return (int)c;
	}
	else {
		return 0;
	}
}

int main() {
	int a, b, c;
	int n = 0; // total number of  triangles
	
	for(a=1; a <= 1000; a++) {
		for(b=a; b <= 1000; b++) {
			c = getc(a,b);
			if(test(a,b,c)) {
				cout << "a, b, c = " << a << ", " << b << ", " << c << endl;
				n++;
			}
		}
	}
	cout << "The total number of triangles = " << n << endl;
	
}