// ex1 ad8 calculate nested fors
#include <iostream>
#include <cmath>
using namespace std;

bool test (long long int a, long long int b, long long int c, long long int d) {
	return ( (1000*a+100*b+10*c+d) == (int)(pow(a,b)*pow(c,d)) );
}

int main () {
	long long int a,b,c,d;
	
	for(d = 0; d < 10; d++) {
		for(c = 0; c < 10; c++) {
			for(b = 0; b < 10; b++) {
				for (a = 0; a < 10; a++) {
					if(test(a,b,c,d)) {
					cout << "True for abcd = " << a << b << c << d << endl;
					}
				}
			}
		}
	}
}