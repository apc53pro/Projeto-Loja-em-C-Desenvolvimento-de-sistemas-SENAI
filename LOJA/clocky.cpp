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

#include "clocky.h"

using namespace std;

int clocky()
{
    

    int d;
    int h;
    int m;
    int s;

    tuple <int, int, int, int> clockytime;

    for (d = 0; d < 32; d++)
    {
        for (h = 0; h < 24; h++)
        {
            for (m = 0; m < 60; m++)
            {
                for (s = 0; s < 60; s++)
                {
                    Sleep(1000);

                }
            }
        }
    }

    return {d, h, m, s};
}