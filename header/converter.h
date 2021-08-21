#include <iostream>
#include "bmath.h"

using namespace std;

int temp, i, S;
string hexv;

int Dec2Bin(int input)
{
	i = 0, S = 0, temp = input;

	do
	{
		S += (temp % 2) * pow(10, i);
		i++;
		temp /= 2;
	}
	while(temp != 0);

	return S;
}

int Bin2Dec(int input)
{
	i = 0, S = 0, temp = input;

	do
	{
		S += (temp % 10) * pow(2, i);
		i++;
		temp /= 10;
	}
	while(temp != 0);

	return S;
}

int Hex2Dec()
{
	cin >> hexv;

	int n = hexv.size(), j = n - 1;
	S = 0, i = 0;

	do
	{
		if(hexv[i] >= 'A' && hexv[i] <= 'F')
			S += (hexv[i] - 'A' + 10) * pow(16,j);
		else
			S += (hexv[i] - 48) * pow(16,j);

		i++;
		j--;
	}
	while(i <= n - 1);

	return S;
}

void Dec2Hex(int input)
{
	int t;
	i = 0, temp = input;

	do
	{	
		t = (temp % 16);
		if(t >= 10 && t <= 15)
			hexv[i] = (t + 'A' - 10);
		else
			hexv[i] = (t + '0');
		temp /= 16;
		i++;
	}
	while(temp != 0);

	for(;i >= 0;i--)
		cout << hexv[i];
	cout << endl;
}