#include <iostream>
using namespace std;

int addTwo(int, int);

int main()
{
	int a,b,sum;
	a=10;
	b=20;
	
	sum=-(-a-b);
	
	cout<<"sum is: "<<sum<<endl;
	cout<<"sum is: "<<addTwo(a , b)<<endl;
	
	return 0;
}

// This will work on the logic of full Adder (Digital Electronics)
int addTwo(int a, int b){
	int sum = 0, carry = 0;
	while(b){
	    sum = a^b; // if two ones make it zero or tow zero make it zero other wise make it 0 and 1 make it 1
	    carry = (a & b) << 1; // if there is any set bit in both no then it will produce overhead as 1 to left of that bit so make a left shift; 
	    a = sum;
	    b = carry;
	}
	return a;
}
