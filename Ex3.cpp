#include <iostream>

int divic(int n, int a, int b)
{
	//Просматривал код еще раз и понял, что в условии нет указаний на то, что а и b - положительны. А раз так, то добавим эту проверку, ведь 6 кратно -3. Это тоже надо корректно посчитать.
	int m = 0, i;
	if(a<0) a=-a;
	if(b<0) b=-b;	
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
		if(i % a != 0) m++;
	}
	return m;
}

int main()
{
	int n = 1000, a = 3, b = 10;
	std::cout << divic(n, a, b);
}
