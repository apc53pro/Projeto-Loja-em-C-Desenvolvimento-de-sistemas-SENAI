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

#include "user_data_tel_ischaracter.h"

using namespace std;

bool user_data_tel_ischaracter(extern char tel)
{
    if (tel != '1' && tel != '2' && tel != '3' && tel != '4' && tel != '5' && tel != '6' && tel != '7' && tel != '8' && tel != '9' && tel != '0')
    {
        return true;
    }
}