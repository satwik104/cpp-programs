#include <iostream>
using namespace std;

int gcd (int m, int n)
{
	if(n == 0) return m;
	cout << "gcd(" << m << ',' << n <<')'<< endl; 
	return gcd(n, m % n);
}

int main()
{
	cout << "gcd = " << gcd(1256636, 1630968) << endl;
	return 0;
}
