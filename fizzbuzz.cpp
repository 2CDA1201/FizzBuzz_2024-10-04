#include <iostream>

int main()
{
	int i, max;
	std::cout << "number> ";
	std::cin >> max;
	bool shouted;
	for (i = 1; i <= max; i++) {
		shouted = false;
		if (i % 3 == 0) std::cout << "Fizz", shouted = true;
		if (i % 5 == 0) std::cout << "Buzz", shouted = true;
		if (!shouted) std::cout << i;
		std::cout << std::endl;
	}
}