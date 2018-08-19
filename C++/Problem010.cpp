#include <iostream>
#include <math.h>
bool isPrime(long long n)
{
	for(long long i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0) return false;
	}
	return true;
}

int main()
{
	long long answer = 2;

	for(long long i = 3; i < 2000000; i+=2)
	{
		if(isPrime(i)) answer += i;
	}
	std::cout << answer << std::endl;
}