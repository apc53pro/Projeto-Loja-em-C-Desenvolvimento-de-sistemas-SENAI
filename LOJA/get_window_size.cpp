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

#include "get_window_size.h"

using namespace std;

extern int windowcolumns;
extern int windowrows;

int windowcolumnsbuffer;
int windowrowsbuffer;

void get_window_size(){

	char loop = 'y';

	while (loop == 'y') {
		CONSOLE_SCREEN_BUFFER_INFO csbi;

		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
		windowcolumns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
		windowrows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

		if (windowcolumns != windowcolumnsbuffer || windowrowsbuffer != windowrows)
		{
			system("cls");
		}
		
		windowcolumnsbuffer = windowcolumns;
		windowrowsbuffer = windowrows;

	}

}