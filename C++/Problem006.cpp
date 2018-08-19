#include <iostream>

int main()
{

	//Sum of natural numbers
	long squareSum = (100 * 101)/2;

	//Sum of squares of natural numbers
	long squaredSum = (100 * (100 + 1) * (2 * 100 + 1)) / 6;

	long answer = (squareSum * squareSum) - squaredSum;
	std::cout << answer << std::endl;

	return 0;
}