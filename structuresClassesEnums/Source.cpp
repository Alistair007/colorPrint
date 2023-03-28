#include <iostream>
#include "colors.h"
using namespace std;

int main()
{
	color::map("\n");
	for (size_t i = 0; i < 13; i++)
	{
		color::print(" ", colors::black, colors::electric);
		color::print(" ", colors::black, colors::gold);
	}
	color::print("\nAli's color print showcase\n", colors::aqua);
	color::print("It's the easiest, safest, fastest and most open-source way to print in color in c++!\n", colors::leaf, colors::yellow);
	color::print("And also the easiest to edit!\n", colors::black, colors::gold);
}