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

#include "user_data_tel_print.h"

using namespace std;

extern char tel1;
extern char tel2;
extern char tel3;
extern char tel4;
extern char tel5;
extern char tel6;
extern char tel7;
extern char tel8;
extern char tel9;
extern char tel10;
extern char tel11;

void user_data_tel_print(int telnum)
{
	if (telnum == 1)
	{

	}
	else if (telnum == 2)
	{
		cout << tel1;
	}
	else if (telnum == 3)
	{
		cout << tel2 << " ";
	}
	else if (telnum == 4)
	{
		cout << tel3 << " ";
	}
	else if (telnum == 5)
	{
		cout << tel4;
	}
	else if (telnum == 6)
	{
		cout << tel5;
	}
	else if (telnum == 7)
	{
		cout << tel6;
	}
	else if (telnum == 8)
	{
		cout << tel7 << "-";

	}
	else if (telnum == 9)
	{
		cout << tel8;

	}
	else if (telnum == 10)
	{
		cout << tel9;

	}
	else if (telnum == 11)
	{
		cout << tel10;

	}

}
