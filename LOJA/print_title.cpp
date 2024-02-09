#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <locale.h>
#include <thread>
#include <iomanip>
#include <tuple>

#include "main_menu.h"
#include "user_data_main.h"
#include "xclockym.h"
#include "print_title.h"

using namespace std;

void print_title(int titlewidth, string title, int color)
{
	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

	int titlelinewidth = (titlewidth - title.size()) / 2;

	cout << string(titlewidth * 0.25, ' ');

	cout << string(titlewidth / 2, '=');

	cout << "\n";

	cout << string(titlewidth * 0.25, ' ');

	cout << string(((titlewidth / 2) - title.size() - 2) / 2, '=');

	cout << " ";

	SetConsoleTextAttribute(a, color);

	cout << title;

	SetConsoleTextAttribute(a, 7);

	cout << " ";

	cout << string(((titlewidth / 2) - title.size() - 2) / 2, '=');

	if (titlelinewidth % 2)
	{
		cout << "=";
	}

	cout << "\n";

	cout << string(titlewidth * 0.25, ' ');

	cout << string(titlewidth / 2, '=');

}