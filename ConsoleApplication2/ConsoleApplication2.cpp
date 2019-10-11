#include <iostream>

bool first(int x,bool a) 
{
	if (x > 0)
	{
		a = false;
	}
}

int main()
{
	int x=0;
	bool a=true;
	first(x, a);
	std::cout << a << std::endl;
    std::cout << "Hello World!\n";
	int b = 10;
	std::cout << "chce do domu";

	return 0;
}