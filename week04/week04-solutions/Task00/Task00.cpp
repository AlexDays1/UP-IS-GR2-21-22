#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	switch (n)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		std::cout << "This month have 31 days." << std::endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		std::cout << "This month have 30 days." << std::endl;
		break;
	case 2:
		std::cout << "This month have 28 days." << std::endl;
		break;
	default:
		std::cout << "Invalid month." << std::endl;
		break;
	}

	return 0;
}