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

extern char choice;
extern char loop;

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

extern int nome_toobig;
extern int adress_toobig;
extern string nome;
extern string adress;
extern string email;

extern int h;
extern int d;
extern int m;
extern int s;

extern int windowcolumns;
extern int windowrows;

//Variaveis de quantidade comprada dos produtos

extern int product_pc_desktop_orders1;
extern int product_pc_desktop_orders2;
extern int product_pc_desktop_orders3;

extern float product_pc_desktop_price1;
extern float product_pc_desktop_price2;
extern float product_pc_desktop_price3;

extern float money;

void products_main()
{
	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(a, 7);

	system("cls");
	print_title(windowcolumns, "PRODUTOS", 02);
	cout << "\n\n";

	if (nome.empty() || adress.empty() || cpf1 == 'x' || tel1 == 'x' || email.empty())
	{

		cout << string((windowcolumns/2) - 22, ' ');
		SetConsoleTextAttribute(a, 4);
		cout<< "COMPLETE O CADASTRO PARA REALIZAR UMA COMPRA" <<"\n\n";

	}

	SetConsoleTextAttribute(a, 7);

	makeProduct_Desktop("PC DESKTOP 1", "i3 2120", 4, "nVidia GT710", "Corsair 400W", 1000.00, "1");
	makeProduct_Desktop("PC DESKTOP 2", "i5 2500K", 8, "nVidia GT1030", "Corsair 400W", 1450.00, "2");
	makeProduct_Desktop("PC DESKTOP 3", "i7 2600K", 12, "nVidia GTX 1050Ti", "Corsair 450W", 1950.00, "3");

	cout << "\n\n\n\n";
	cout << string(windowcolumns * 0.25, ' ');
	cout << string(windowcolumns * 0.5, '=');

	cout << "\n";

	cout << string(windowcolumns * 0.25, ' ');
	cout << "X - Sair\n\n";

	cout << string(windowcolumns * 0.25, ' ');
	cout << "Digite uma opcao: ";

	while (loop == 'y') 
	{
		choice = _getch();

		if (choice == '1' && nome.empty() == false && adress.empty() == false && cpf1 != 'x' && tel1 != 'x' && email.empty() == false)
		{
			PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);

			product_pc_desktop_orders1++;
		}
		else if (choice == '2' && nome.empty() == false && adress.empty() == false && cpf1 != 'x' && tel1 != 'x' && email.empty() == false)
		{
			PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);

			product_pc_desktop_orders2++;
		}
		else if (choice == '3' && nome.empty() == false && adress.empty() == false && cpf1 != 'x' && tel1 != 'x' && email.empty() == false)
		{
			PlaySound(TEXT("purchase.wav"), NULL, SND_ASYNC);

			product_pc_desktop_orders3++;
		}
		else if (choice == 'x' || choice == 'X')
		{
			break;
		}
	}
	
	
}