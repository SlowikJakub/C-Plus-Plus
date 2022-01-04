// Project 2
//I used Euclidean Algorithm to solve for the solution
#include<iostream>
using namespace std;
int GCD(int a, int c, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0, *y = 1;
		return c;
	}
	else {
		int x1, y1;
		int mod = GCD(c % a, a, &x1, &y1);
		*x = y1 - (c / a) * x1;
		*y = x1;
		return mod;
	}
}
void modulusInverse(int a, int e)
{
	int x, y;
	int d = GCD(a, e, &x, &y);
	if (d != 1)
		cout << "The inverse of the number you have entered does not exist. Please try again. "<<endl;
	else
	{
		int b = (x%e + e) % e;
		cout << "The modular inverse of " <<a<<" is "<< b<<endl;
=
	}
}
int main()
{
	int a, n;
	cout << "Please enter the modulus number(n>1): "<<endl;
	cin >> n;
	cout << "Enter the value you want to find the inverse of: "<<endl;
	cin >> a;
	modulusInverse(a, n);
	return 0;
}