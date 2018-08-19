#include <iostream>

int main()
{
	int a, b, c = 0;
	int m = 2;
	bool done = false;

	//Use Euclid's formula for generating pythagorean triples
	while(!done)
	{
		for(int n = 1; n < m; ++n)
		{	
			a = (m * m) - (n * n);
			b = 2 * (m * n);
			c = (m * m) + (n * n);

			if(a + b + c == 1000)
			{
				done = true;
				break;
			}	
		}
		m++;
	}
	std::cout << "a: " << a << " b: " << b << " c: " << c << std::endl;
	int answer = a*b*c;
	std::cout << answer << std::endl;
}