#include <iostream>
#include <stdio.h>
#include <math.h>

bool isPrime(long n)
{
	for(int i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0) return false;
	}
	return true;
}

int main()
{
	long long num = 600851475143;
	long long primeFactor = 2;
	while(1)
	{
		if(num % primeFactor == 0)
		{
			num /= primeFactor;
		}
		else
		{
			primeFactor++;
		}
		if(num == primeFactor)
			break;
	}

	std::cout << num << std::endl;
	return 0;
}