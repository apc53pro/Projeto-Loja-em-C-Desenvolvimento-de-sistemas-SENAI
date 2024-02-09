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
#include "order_list_main.h"
#include "drawProduct_Order.h"
#include "drawUser_data.h"

using namespace std;

extern int product_pc_desktop_orders1;
extern int product_pc_desktop_orders2;
extern int product_pc_desktop_orders3;

extern float product_pc_desktop_price1;
extern float product_pc_desktop_price2;
extern float product_pc_desktop_price3;

extern int windowcolumns;
extern int windowrows;
extern char choice;
extern char loop;

extern float money;
extern float ordertotal;

void order_list_main()
{
	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

	system("cls");
	print_title(windowcolumns, "LISTA DE PEDIDOS", 02);

	cout << "\n\n";

	drawUser_data();

	SetConsoleTextAttribute(a, 7);

	cout << "\n\n";

	cout << string(windowcolumns * 0.25, ' ');
	cout << string(windowcolumns * 0.5, '=');

	cout << "\n\n";

	if (product_pc_desktop_orders1 > 0)
	{
		drawProduct_Order("PC DESKTOP 1", "i3 2120", 4, "nVidia GT710", "Corsair 400W", product_pc_desktop_price1, "1", product_pc_desktop_orders1);
		
	}
	
	if (product_pc_desktop_orders2 > 0)
	{
		drawProduct_Order("PC DESKTOP 2", "i5 2500K", 8, "nVidia GT1030", "Corsair 400W", product_pc_desktop_price2, "2", product_pc_desktop_orders2);
	}

	if (product_pc_desktop_orders3 > 0)
	{
		drawProduct_Order("PC DESKTOP 3", "i7 2600K", 12, "nVidia GTX 1050Ti", "Corsair 450W", product_pc_desktop_price3, "3", product_pc_desktop_orders3);
	}

	if (product_pc_desktop_orders1 == 0 && product_pc_desktop_orders2 == 0 && product_pc_desktop_orders3 == 0)
	{
		cout << string(windowcolumns * 0.25, ' ');
		cout << string(((windowcolumns * 0.5) / 2) - 6, ' ');
		cout << "SEM PEDIDOS";
	}
	
	cout << "\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << string(windowcolumns * 0.5, '=');

	cout << "\n\n";

	cout << string(windowcolumns * 0.25, ' ');
	cout << "X - Sair";
	cout << string(windowcolumns / 2 - 8 - 19, ' ');
	cout << "TOTAL DOS PEDIDOS: ";

	SetConsoleTextAttribute(a, 2);
	cout << (product_pc_desktop_price1 * product_pc_desktop_orders1) + (product_pc_desktop_price2 * product_pc_desktop_orders2) + (product_pc_desktop_price3 * product_pc_desktop_orders3) << "\n";
	SetConsoleTextAttribute(a, 7);

	cout << string(windowcolumns * 0.25, ' ');
	cout << "C - Finalizar Compra";

	cout << string(windowcolumns / 2 - 8 - 19, ' ');
	cout << "SALDO: ";

	if (money < (product_pc_desktop_price1 * product_pc_desktop_orders1) + (product_pc_desktop_price2 * product_pc_desktop_orders2) + (product_pc_desktop_price3 * product_pc_desktop_orders3))
	{
		SetConsoleTextAttribute(a, 4);
	}
	else if (money >= (product_pc_desktop_price1 * product_pc_desktop_orders1) + (product_pc_desktop_price2 * product_pc_desktop_orders2) + (product_pc_desktop_price3 * product_pc_desktop_orders3))
	{
		SetConsoleTextAttribute(a, 2);
	}

	cout << money;

	SetConsoleTextAttribute(a, 7);

	cout << "\n\n";

	cout << string(windowcolumns * 0.25, ' ');
	cout << "Digite uma opcao: ";

	while (loop == 'y')
	{
		choice = _getch();

		if (choice == 'x' || choice == 'X')
		{
			break;
		}
		else if (choice == 'c' || choice == 'C' && money >= ((product_pc_desktop_price1 * product_pc_desktop_orders1) + (product_pc_desktop_price2 * product_pc_desktop_orders2) + (product_pc_desktop_price3 * product_pc_desktop_orders3)) && ((product_pc_desktop_price1 * product_pc_desktop_orders1) + (product_pc_desktop_price2 * product_pc_desktop_orders2) + (product_pc_desktop_price3 * product_pc_desktop_orders3)) > 0)
		{
			money = money - (product_pc_desktop_price1 * product_pc_desktop_orders1) + (product_pc_desktop_price2 * product_pc_desktop_orders2) + (product_pc_desktop_price3 * product_pc_desktop_orders3);

			product_pc_desktop_orders1 = 0;
			product_pc_desktop_orders2 = 0;
			product_pc_desktop_orders3 = 0;
			break;
		}
	}

}