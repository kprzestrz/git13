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
	int x;
	bool a;
	first(x, a);
    std::cout << "Hello World!\n";
}