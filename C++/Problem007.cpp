#include <iostream>
#include <math.h>

bool isPrime(int num)
{
	if(num < 2) return false;
	if(num == 2) return true;

	for(int i = 2; i <= sqrt(num); i++)
	{
		if(num % i == 0) return false;
	}
	return true;
}

int main()
{
	int nthPrime = 0;
	long prime = 1;
	while(nthPrime < 10001)
	{
		std::cout << nthPrime << std::endl;
		prime++;
		if(isPrime(prime))
			nthPrime++;
	}
	std::cout << prime << std::endl;
}