#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v = { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 }, i;

	vector<int>::iterator ip;

	ip = std::unique(v.begin(), v.begin() + 12);
	

	
	v.resize(std::distance(v.begin(), ip));

	for (ip = v.begin(); ip != v.end(); ++ip) {
		cout << *ip << " ";
	}

	return 0;
}
