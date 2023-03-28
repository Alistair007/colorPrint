/*
|-----------------------|
|	Ali's color print	|
|  Free license, open   |
|        source.        |
|-----------------------|
*/
#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
enum colors {
	black = 0,
	electric = 1,
	leaf = 2,
	lightblue = 3,
	red = 4,
	darkpurple = 5,
	gold = 6,
	lightgrey = 7,
	grey = 8,
	blue = 9,
	green = 10,
	aqua = 11,
	lightred = 12,
	purple = 13,
	yellow = 14,
	white = 15,
};
// Presets MUST be bigger that 256
enum presets {
	error = 640,
};
namespace color {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	void print(std::string text, const int font = colors::lightgrey, const int background = colors::black) {
		bool inv = false;
		if (text[text.length() - 1] == '\n') {
			text.pop_back();
			inv = true;
		}
		int color;
		if (font > 256)
			color = font;
		else
			color = background * 16 + font;
		SetConsoleTextAttribute(hConsole, color);
		printf(text.c_str());
		SetConsoleTextAttribute(hConsole, 7);
		if (inv)
			printf("\n");
	}

	void printM(std::string text, const int color) {
		bool inv = false;
		if (text[text.length() - 1] == '\n') {
			text.pop_back();
			inv = true;
		}
		SetConsoleTextAttribute(hConsole, color);
		printf(text.c_str());
		SetConsoleTextAttribute(hConsole, 7);
		if (inv)
			printf("\n");
	}

	void map(const char* e = NULL)
	{
		for (size_t i = 0; i < 256; i++)
		{
			printM(std::to_string(i), i);
			printf(e);
		}
	}
};