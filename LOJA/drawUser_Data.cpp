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

#include "user_data_main.h"
#include "user_data_cpf_print.h"
#include "user_data_cpf_ischaracter.h"
#include "user_data_tel_print.h"
#include "user_data_tel_ischaracter.h"
#include "xclockym.h"
#include "print_title.h"
#include "drawUser_Data.h"

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
extern char loop;

extern int h;
extern int d;
extern int m;
extern int s;
extern char choice;

extern int windowcolumns;
extern int windowrows;

void drawUser_data()
{
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

    if (nome_toobig == 1 || adress_toobig == 1)
    {
        PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);
        SetConsoleTextAttribute(a, 4);
        cout << string(windowcolumns * 0.25, ' ');

        cout << string(windowcolumns / 2 - 27, ' ');

        cout << "ERRO: ENDEREÇO MUITO GRANDE \n";
        adress_toobig = 0;
        nome_toobig = 0;
    }

    if (nome.empty())
    {
        SetConsoleTextAttribute(a, 4);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "1 - Nome: ";
        cout << setw(20) << left << nome;

        cout << string(windowcolumns / 2 - 57 - nome.size(), ' ');

        clockprint();

        cout << "\n";

    }
    else
    {
        SetConsoleTextAttribute(a, 2);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "1 - Nome: ";
        cout << setw(20) << left << nome;

        int awsada = windowcolumns / 2 - 57;

        if (awsada > 0)
        {
            cout << string(awsada, ' ');
        }
        else
        {
            awsada = 1;
            cout << string(awsada, ' ');
        }


        clockprint();

        cout << "\n";

    }

    if (cpf1 == 'x' || cpf2 == 'x' || cpf3 == 'x' || cpf4 == 'x' || cpf5 == 'x' || cpf6 == 'x' || cpf7 == 'x' || cpf8 == 'x' || cpf9 == 'x' || cpf10 == 'x' || cpf11 == 'x')
    {
        SetConsoleTextAttribute(a, 4);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "2 - CPF: " << cpf1 << cpf2 << cpf3 << "." << cpf4 << cpf5 << cpf6 << "." << cpf7 << cpf8 << cpf9 << "-" << cpf10 << cpf11;
        cout << "\n";

    }
    else
    {
        SetConsoleTextAttribute(a, 2);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "2 - CPF: " << cpf1 << cpf2 << cpf3 << "." << cpf4 << cpf5 << cpf6 << "." << cpf7 << cpf8 << cpf9 << "-" << cpf10 << cpf11;
        cout << "\n";

    }

    if (adress.empty())
    {
        SetConsoleTextAttribute(a, 4);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "3 - Endereço: " << adress;
        cout << "\n";

    }
    else
    {
        SetConsoleTextAttribute(a, 2);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "3 - Endereço: " << adress;
        cout << "\n";

    }

    if (email.empty())
    {
        SetConsoleTextAttribute(a, 4);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "4 - E-MAIL: " << email;
        cout << "\n";

    }
    else
    {
        SetConsoleTextAttribute(a, 2);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "4 - E-MAIL: " << email;
        cout << "\n";

    }

    if (tel1 == 'x' || tel2 == 'x' || tel3 == 'x' || tel4 == 'x' || tel5 == 'x' || tel6 == 'x' || tel7 == 'x' || tel8 == 'x' || tel9 == 'x' || tel10 == 'x' || tel11 == 'x')
    {
        SetConsoleTextAttribute(a, 4);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "5 - TELEFONE: " << tel1 << tel2 << " " << tel3 << " " << tel4 << tel5 << tel6 << tel7 << "-" << tel8 << tel9 << tel10 << tel11;
        cout << "\n";

    }
    else
    {
        SetConsoleTextAttribute(a, 2);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "5 - TELEFONE: " << tel1 << tel2 << " " << tel3 << " " << tel4 << tel5 << tel6 << tel7 << "-" << tel8 << tel9 << tel10 << tel11;
        cout << "\n";

    }
}