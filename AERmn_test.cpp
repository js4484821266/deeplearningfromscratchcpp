#include <iostream>
#include "linalg.h"

int main(void)
{
	const AERmn A{{1, 2}, {3, 4}}, B{{1, 2}, {3, 4}};
	std::cout << (A == B) << std::endl;
	return 0;
}
