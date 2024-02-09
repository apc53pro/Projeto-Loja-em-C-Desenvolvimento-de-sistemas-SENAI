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

#include "xclockym.h"
#include "main_menu.h"
#include "print_title.h"

using namespace std;

char main_menu()
{
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
    extern string nome;
    extern string adress;
    extern string email;

    extern int h;
    extern int d;
    extern int m;
    extern int s;
    extern char choice;
    extern char loop;

    extern int windowcolumns;
    extern int windowrows;

    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

    nome_toobig = 0;

    PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);
    system("cls");
    SetConsoleTextAttribute(a, 7);

    print_title(windowcolumns, "INFORMATICKS", 02);

    cout << "\n \n";

    if (nome.empty() || adress.empty() || cpf1 == 'x' || tel1 == 'x' || email.empty())
    {
        SetConsoleTextAttribute(a, 7);
        cout << string(windowcolumns * 0.25, ' ');
        cout << setw(15) << left << "1 - Cadastro / ";

        SetConsoleTextAttribute(a, 4);
        cout << setw(10) <<left << "Incompleto";

        cout << string((windowcolumns / 2) - 25 - 27, ' ');

        clockprint();

        cout << "\n";

    }
    else
    {
        cout << string(windowcolumns * 0.25, ' ');
        SetConsoleTextAttribute(a, 7);
        cout << setw(15) << left << "1 - Cadastro / ";

        SetConsoleTextAttribute(a, 2);
        cout << setw(10) << left << "Completo";

        cout << string((windowcolumns / 2) - 25 - 27, ' ');

        clockprint();

        cout << "\n";

    }

    cout << string(windowcolumns * 0.25, ' ');
    cout << "2 - Produtos\n";

    cout << string(windowcolumns * 0.25, ' ');
    cout << "3 - Lista de Pedidos";
    cout << "\n \n";

    cout << string(windowcolumns * 0.25, ' ');
    cout << "X - Sair\n";
    cout << "\n \n";

    cout << string(windowcolumns * 0.25, ' ');
    cout << "Digite uma opção: ";

    while (loop == 'y')
    {
        choice = _getch();

        if (choice == '1' || choice == '2' || choice == '3' || choice == 'x' || choice == 'X')
        {
            break;
        }
    }
    

    return choice;
}
