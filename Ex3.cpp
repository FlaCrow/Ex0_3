#include <iostream>

int divic(int n, int a, int b)
{
	int m = 0, i;
	i = a;
	while (i <= n)
	{
		i += a;
		m++;
	}
	i = b;
	while (i <= n)
	{
		i += b;
		m++;
	}
	return m;
}

int main()
{
	int n = 1000, a = 3, b = 10;
	std::cout << divic(n, a, b);
}