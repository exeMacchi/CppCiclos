#include <iostream>

int main()
{
	for (int x { 1 }, y { -1 }; x < 10; x++, y--)
	{
	   std::cout << x << " " << y << "\n";
	}
	return 0;
}