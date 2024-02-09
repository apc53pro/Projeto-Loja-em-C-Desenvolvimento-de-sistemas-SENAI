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
#include "products_main.h"
#include "order_list_main.h"
#include "xclockym.h"
#include "get_window_size.h"
#include "print_title.h"


using namespace std;


int on = 1;
char choice;
char loop = 'y';

char cpf1 = 'x';
char cpf2 = 'x';
char cpf3 = 'x';
char cpf4 = 'x';
char cpf5 = 'x';
char cpf6 = 'x';
char cpf7 = 'x';
char cpf8 = 'x';
char cpf9 = 'x';
char cpf10 = 'x';
char cpf11 = 'x';

char tel1 = 'x';
char tel2 = 'x';
char tel3 = 'x';
char tel4 = 'x';
char tel5 = 'x';
char tel6 = 'x';
char tel7 = 'x';
char tel8 = 'x';
char tel9 = 'x';
char tel10 = 'x';
char tel11 = 'x';

int nome_toobig;
int adress_toobig;

string nome;
string adress;
string email;


extern int h;
extern int d;
extern int m;
extern int s;


int windowcolumns;
int windowrows;

//Variaveis de quantidade comprada dos produtos

int product_pc_desktop_orders1;
int product_pc_desktop_orders2;
int product_pc_desktop_orders3;

//Saldo Dinheiro

float money = 10000;

float product_pc_desktop_price1 = 1000;
float product_pc_desktop_price2 = 1450;
float product_pc_desktop_price3 = 1950;
float ordertotal = (product_pc_desktop_price1 * product_pc_desktop_orders1) + (product_pc_desktop_price2 * product_pc_desktop_orders2) + (product_pc_desktop_price3 * product_pc_desktop_orders3);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    thread worker1(xclockym);
    thread worker2(get_window_size);

    while (loop == 'y')
    {
        main_menu();

        if (choice == '1')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);
            user_data_main();
        }
        else if(choice == '2')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);
            products_main();
        }
        else if (choice == '3')
        {
            PlaySound(TEXT("menuselect.wav"), NULL, SND_ASYNC);
            order_list_main();
        }
        else if (choice == '4')
        {
            
        }
        else if (choice == 'x' || choice == 'X')
        {
            system("cls");
            exit(0);
        }
    }
}

