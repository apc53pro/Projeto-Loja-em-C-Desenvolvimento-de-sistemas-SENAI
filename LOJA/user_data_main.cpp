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

void user_data_main()
{
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);

    while (loop == 'y')
    {
        PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);
        system("cls");
        SetConsoleTextAttribute(a, 7);

        print_title(windowcolumns, "CADASTRO", 02);

        cout << "\n \n";

        drawUser_data();

        cout << "" << "\n";

        SetConsoleTextAttribute(a, 7);
        cout << string(windowcolumns * 0.25, ' ');
        cout << "Z - Apagar" << "\n";

        cout << string(windowcolumns * 0.25, ' ');
        cout << "X - Sair" << "\n\n";

        cout << string(windowcolumns * 0.25, ' ');
        cout << "Digite uma opcao: ";

        while (loop == 'y')
        {
            choice = ' ';

            choice = _getch();

            if (choice == '1' && nome.size() == 0 || choice == '2' && cpf1 == 'x' || choice == '3' && adress.size() == 0 || choice == '4' && email.size() == 0 || choice == '5' && tel1 == 'x' || choice == 'z' || choice == 'Z' || choice == 'x' || choice == 'X' || choice == '4')
            {
                break;
            }
        }

        

        if (choice == '1')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);

            nome_toobig = 0;
            adress_toobig = 0;

            system("cls");
            print_title(windowcolumns, "CADASTRO", 07);

            cout << "\n \n";

            cout << string(windowcolumns * 0.25, ' '); 

            cout << "1 - Nome (Maximo 20 caracteres): ";

            getline(cin, nome);

            if (nome.size() > 20)
            {

                nome_toobig = 1;

                nome.clear();

            }

        }
        else if (choice == '2')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);

            nome_toobig = 0;
            adress_toobig = 0;

            int titlelinewidth = 34;

            bool cpfwriterepeat = true;

            system("cls");

            print_title(windowcolumns, "CADASTRO / CPF", 07);

            cout << "\n\n";

            cout << string(windowcolumns * 0.25, ' ') <<"2 - CPF: ";

            while (user_data_cpf_ischaracter(cpf1) == true)
            {

                user_data_cpf_print(false, "CADASTRO /  CPF", 1, "2 - CPF: ");


                cpf1 = _getch();

                if (user_data_cpf_ischaracter(cpf1) == true)
                {

                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf1 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);

                }

            }

            while (user_data_cpf_ischaracter(cpf2) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 2, "2 - CPF: ");

                cpf2 = _getch();

                if (user_data_cpf_ischaracter(cpf2) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf2 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf3) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 3, "2 - CPF: ");

                cpf3 = _getch();

                if (user_data_cpf_ischaracter(cpf3) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf3 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf4) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 4, "2 - CPF: ");

                cpf4 = _getch();

                if (user_data_cpf_ischaracter(cpf4) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf4 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf5) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 5, "2 - CPF: ");

                cpf5 = _getch();

                if (user_data_cpf_ischaracter(cpf5) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf5 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf6) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 6, "2 - CPF: ");

                cpf6 = _getch();

                if (user_data_cpf_ischaracter(cpf6) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf6 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf7) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 7, "2 - CPF: ");

                cpf7 = _getch();

                if (user_data_cpf_ischaracter(cpf7) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf7 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf8) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 8, "2 - CPF: ");

                cpf8 = _getch();

                if (user_data_cpf_ischaracter(cpf8) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf8 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf9) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 9, "2 - CPF: ");

                cpf9 = _getch();

                if (user_data_cpf_ischaracter(cpf9) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf9 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_cpf_ischaracter(cpf10) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 10, "2 - CPF: ");

                cpf10 = _getch();

                if (user_data_cpf_ischaracter(cpf10) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf10 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                    
                }
            }

            while (user_data_cpf_ischaracter(cpf11) == true)
            {

                user_data_cpf_print(true, "CADASTRO /  CPF", 11, "2 - CPF: ");

                cpf11 = _getch();

                if (user_data_cpf_ischaracter(cpf11) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    cpf11 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            system("cls");

            user_data_cpf_print(true, "CADASTRO / CPF", 11, "2 - CPF: ");

        }
        else if (choice == '3')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);

            nome_toobig = 0;

            system("cls");

            print_title(windowcolumns, "CADASTRO", 07); 
           
            cout << "\n \n";

            cout << string(windowcolumns * 0.25, ' ');

            cout << "3 - Endereco: ";

            getline(cin, adress);

            if (adress.size() > 30)
            {

                adress_toobig = 1;

                adress.clear();

            }

        }
        else if (choice == '4')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);

            nome_toobig = 0;

            system("cls");

            print_title(windowcolumns, "CADASTRO", 07);

            cout << "\n \n";

            cout << string(windowcolumns * 0.25, ' ');

            cout << "4 - E-MAIL: ";

            getline(cin, email);

            if (email.size() > 40)
            {

                adress_toobig = 1;

                adress.clear();

            }

        }
        else if (choice == '5')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);

            nome_toobig = 0;
            adress_toobig = 0;

            system("cls");

            print_title(windowcolumns, "CADASTRO / TELEFONE", 07);

            cout << "\n\n";

            cout << string(windowcolumns * 0.25, ' ') << "5 - TELEFONE: ";

            while (user_data_tel_ischaracter(tel1) == TRUE)
            {

                user_data_tel_print(1);


                tel1 = _getch();

                if (user_data_tel_ischaracter(tel1) == TRUE)
                {

                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel1 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);

                }

            }

            while (user_data_tel_ischaracter(tel2) == TRUE)
            {

                user_data_tel_print(2);

                tel2 = _getch();

                if (user_data_tel_ischaracter(tel2) == TRUE)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel2 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel3) == true)
            {

                user_data_tel_print(3);

                tel3 = _getch();

                if (user_data_tel_ischaracter(tel3) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel3 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel4) == true)
            {

                user_data_tel_print(4);

                tel4 = _getch();

                if (user_data_cpf_ischaracter(tel4) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel4 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel5) == true)
            {

                user_data_tel_print(5);

                tel5 = _getch();

                if (user_data_tel_ischaracter(tel5) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel5 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel6) == true)
            {

                user_data_tel_print(6);

                tel6 = _getch();

                if (user_data_tel_ischaracter(tel6) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel6 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel7) == true)
            {

                user_data_tel_print(7);

                tel7 = _getch();

                if (user_data_tel_ischaracter(tel7) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel7 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel8) == true)
            {

                user_data_tel_print(8);

                tel8 = _getch();

                if (user_data_tel_ischaracter(tel8) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel8 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel9) == true)
            {

                user_data_tel_print(9);

                tel9 = _getch();

                if (user_data_tel_ischaracter(tel9) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel9 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            while (user_data_tel_ischaracter(tel10) == true)
            {

                user_data_tel_print(10);

                tel10 = _getch();

                if (user_data_tel_ischaracter(tel10) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel10 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);

                }
            }

            while (user_data_tel_ischaracter(tel11) == true)
            {

                user_data_tel_print(11);

                tel11 = _getch();

                if (user_data_tel_ischaracter(tel11) == true)
                {
                    SetConsoleTextAttribute(a, 4);

                    PlaySound(TEXT("error.wav"), NULL, SND_ASYNC);

                    cout << "ERRO: DIGITE UM NUMERO                               ";

                    tel11 = 'x';

                    SetConsoleTextAttribute(a, 7);

                    Sleep(500);
                }
            }

            system("cls");

            user_data_tel_print(11);

            }

        else if (choice == 'z' || choice == 'Z')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);

            SetConsoleTextAttribute(a, 14);

            cout << "\n\n";
            cout << string(windowcolumns * 0.25, ' ');
            cout << "ESCOLHA ALGUM DADO PARA APAGAR\n";

            cout << string(windowcolumns * 0.25, ' ');
            cout << "APERTE Z PARA CANCELAR.";

            while (loop == 'y')
            {
                choice = _getch();

                if (choice == '1' && nome.size() != 0)
                {
                    break;
                }
                else if (choice == '2' && cpf1 != 'x')
                {
                    break;
                }
                else if (choice == '3' && adress.size() != 0)
                {
                    break;
                }
                else if (choice == '4' && email.size() != 0)
                {
                    break;
                }
                else if (choice == '5' && tel1 != 'x')
                {
                    break;
                }
                else if (choice == 'z' || choice == 'Z')
                {
                    break;
                }
            }  

            if (choice == '1')
            {
                nome.clear();
            }
            else if (choice == '2')
            {
                cpf1 = 'x';
                cpf2 = 'x';
                cpf3 = 'x';
                cpf4 = 'x';
                cpf5 = 'x';
                cpf6 = 'x';
                cpf7 = 'x';
                cpf8 = 'x';
                cpf9 = 'x';
                cpf10 = 'x';
                cpf11 = 'x';
            }
            else if (choice == '3')
            {
                adress.clear();
            }
            else if (choice == '4')
            {
                email.clear();
            }
            else if (choice == '5')
            {
                tel1 = 'x';
                tel2 = 'x';
                tel3 = 'x';
                tel4 = 'x';
                tel5 = 'x';
                tel6 = 'x';
                tel7 = 'x';
                tel8 = 'x';
                tel9 = 'x';
                tel10 = 'x';
                tel11 = 'x';
            }

            SetConsoleTextAttribute(a, 7);

        }
        else if (choice == 'x' || choice == 'X')
        {
            break;
        }
    }
}