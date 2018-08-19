#include <iostream>

int main()
{
	int num = 20;
	bool finished = false;

	while(!finished)
	{
		num += 20;
		for(int i = 1; i <= 20; i++)
		{
			if(num % i != 0)
			{
				finished = false;
				break;
			} 
			else
			{
				finished = true;
			}
		}
	}

	std::cout << num << std::endl;
	return 0;
}