#include <iostream>
using namespace std;
int main()
{
	int nowe;
	std::cin >> nowe;
	std::cout << "Zmienilem cale od nowa i nic z tym nie zrobicie";

	if (nowe < 100) {
		std::cout << "mniej niz 100";
	}
	else {
		std::cout << "cos innego";
	}
	return 0;
}