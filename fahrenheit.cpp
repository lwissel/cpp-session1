// calculat celsius to fahrenheit
#include <iostream>
using namespace std;

int main() {
	double c,f;
	cout << "Temperature in Degree" << endl;
	cin >> c;
	
	f = 9./5. * c + 32.;
	cout << c << " Celsius = " << f << " Fahrenheit" << endl;
	
	// Convesion table
	
	cout << "Conversion table" << endl;
	cout << " C   |   F" << endl;
	for(double i=0; i<=100; i+=10) {
		f = 9./5. * i + 32.;
		cout << i << "       " << f << endl;
	}
	return 0;
}