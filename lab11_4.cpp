#include<iostream>
#include<string>

using namespace std;

template <typename swap>
swap mySwap(swap &,swap &);

int main()
{
	
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	
	string a = "ABC", b = "DEF";
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	
	char p = 'P', q = 'Q';
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

template <typename U>
U mySwap(U &x, U &y)
{
	U s = x;
	x = y;
	y = s;

	return x, y;
}