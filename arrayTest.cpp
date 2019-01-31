#include <array>
#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 1)
		return 0;

	int num = atoi(argv[1]);
	std::array<int, num>;
}