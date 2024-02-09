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

#include "user_data_cpf_ischaracter.h"

using namespace std;

bool user_data_cpf_ischaracter(extern char cpf)
{
    if (cpf != '1' && cpf != '2' && cpf != '3' && cpf != '4' && cpf != '5' && cpf != '6' && cpf != '7' && cpf != '8' && cpf != '9' && cpf != '0')
    {
        return true;
    }
}