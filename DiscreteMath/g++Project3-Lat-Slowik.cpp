#include<iostream>
using namespace std;
long long path(int n);
int main()
{
	int n;
	cout << "Please enter a number between 1 and 20 to calculate the path" << endl;
	cin >> n;
	cout << "The number of paths with a "<<n<<" by "<<n<< " is " << path(n) << endl;
	system("pause");
}
long long path(int n) 
{
	long long r = 1; // I included the double longs to allow the bits to increase 
	for (long long int i = 0; i < n; i++) //This is the nCr equation 
	{
		r = r * ((__int64)2*n-i);   // I looked up an error code I was receiving about overflow with a 4 bit digit, so I included the int64 to create a 64 bit integer
		r = r / (i+1);
	}
	return r;
}