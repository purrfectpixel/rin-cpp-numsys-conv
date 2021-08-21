#include <iostream>

using namespace std;

int pow(int x, int n)
{
	int S = 1;
	for(int i = 0;i <= n - 1;i++)
		S *= x;
	return S;
}