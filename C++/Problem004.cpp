#include <iostream>
#include <stdio.h>

bool isPalindrome(int num)
{
	int answer = 0;
	int counter = num;
	while(counter != 0)
	{
		answer *= 10;
        answer += counter % 10;
        counter /= 10;
	}
	if(num == answer) return true;
	return false;
}

int main()
{
	int answer = 0;
	for(int i = 999; i > 100; --i)
	{
		for(int j = 999; j >= i; --j)
		{
			if(isPalindrome(i*j))
			{
				if((i*j) > answer)
					answer = i*j;
			}
		}
	}
	std::cout << answer << std::endl;
	return 0;
}