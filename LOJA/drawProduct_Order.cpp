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
#include "drawProduct_Order.h"

using namespace std;

extern int windowcolumns;
extern int windowrows;

void drawProduct_Order(string product_name, string processor, int ram, string gpu, string psu, float price, string purchase_button, int product_order_amount)
{

	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

	print_title(windowcolumns, product_name, 02);
	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "--";
	SetConsoleTextAttribute(a, 2);
	cout<< "ESPECIFICACOES TECNICAS";
	SetConsoleTextAttribute(a, 7);
	cout << "--";

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Processador ";
	cout << processor;

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* ";
	cout << ram;
	cout << "GB RAM";

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
	cout << "--";
	SetConsoleTextAttribute(a, 2);
	cout << "QUANTIDADE E PRECO PARIAL";
	SetConsoleTextAttribute(a, 7);
	cout << "--";

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Preco " << price;
	
	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Quantidade: ";
	
	SetConsoleTextAttribute(a, 2);
	cout << product_order_amount;
	SetConsoleTextAttribute(a, 7);

	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << "* Preco: ";

	SetConsoleTextAttribute(a, 2);
	cout << price * product_order_amount;
	SetConsoleTextAttribute(a, 7);

	cout << "\n\n\n\n";

}