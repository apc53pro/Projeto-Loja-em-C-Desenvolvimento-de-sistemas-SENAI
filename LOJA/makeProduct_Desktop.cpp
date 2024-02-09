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
#include "products_main.h"
#include "print_title.h"
#include "makeProduct_Desktop.h"

using namespace std;

extern int windowcolumns;
extern int windowrows;

void makeProduct_Desktop(string product_name, string processor, int ram, string gpu, string psu, float price, string purchase_button)
{

	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

	print_title(windowcolumns, product_name, 02);
	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "--ESPECIFICACOES TECNICAS--";

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Processador ";
	cout << processor;

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* ";
	cout << ram;
	cout<< "GB RAM";

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Placa de Video ";
	cout << gpu;

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Fonte ";
	cout << psu;

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "--PRECO--";

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "R$: ";
	SetConsoleTextAttribute(a, 2);
	cout << price;
	SetConsoleTextAttribute(a, 7);
	cout<< " a vista";

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Aperte ";
	SetConsoleTextAttribute(a, 4);
	cout << purchase_button;
	SetConsoleTextAttribute(a, 7);
	cout << " para comprar.";

	cout << "\n\n\n\n";

}