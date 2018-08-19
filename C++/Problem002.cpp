#include <iostream>

int main(){
	int answer = 0;
	int currentFib = 2;
	int nextFib = 3;
	while(currentFib <= 4000000){
		answer += currentFib;
		int temp = nextFib;
		nextFib += currentFib;
		currentFib = temp+nextFib;
		nextFib += currentFib;
	}

	std::cout << "Answer is " << answer << std::endl;
}
