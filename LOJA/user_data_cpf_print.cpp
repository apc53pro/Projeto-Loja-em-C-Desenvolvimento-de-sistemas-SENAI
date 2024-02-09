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

#include "user_data_cpf_print.h"

using namespace std;

extern char cpf1;
extern char cpf2;
extern char cpf3;
extern char cpf4;
extern char cpf5;
extern char cpf6;
extern char cpf7;
extern char cpf8;
extern char cpf9;
extern char cpf10;
extern char cpf11;

void user_data_cpf_print(bool clrscr, string title, int titlewidth, string cpftitle)
{
	if (titlewidth == 1)
	{
		
	}
	else if (titlewidth == 2)
	{
		cout << cpf1;
	}
	else if(titlewidth == 3)
	{
		cout <<cpf2;
	}
	else if (titlewidth == 4)
	{
		cout << cpf3 << ".";
	}
	else if (titlewidth == 5)
	{
		cout <<cpf4;
	}
	else if (titlewidth == 6)
	{
		cout <<cpf5;
	}
	else if (titlewidth == 7)
	{
		cout <<cpf6 << ".";
	}
	else if (titlewidth == 8)
	{
		cout <<cpf7;

	}
	else if (titlewidth == 9)
	{
		cout <<cpf8;

	}
	else if (titlewidth == 10)
	{
		cout <<cpf9 << "-";

	}
	else if (titlewidth == 11)
	{
		cout <<cpf10;

	}
	
}
