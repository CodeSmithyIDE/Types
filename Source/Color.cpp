/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#include "Color.h"

namespace Ishiko
{

Color::Color(EColor color)
{
    switch(color)
    {
        case eBlack:
            red = 0;
            green = 0;
            blue = 0;
            break;

        case eGreen:
            red = 0;
            green = 0xFF;
            blue = 0;
            break;

        case eRed:
            red = 0xFF;
            green = 0;
            blue = 0;
            break;
    }
    
    alpha = 0xFF;
}

Color::Color(unsigned char red, unsigned char green, unsigned char blue)
    : red(red), green(green), blue(blue), alpha(0xFF)
{
}

}
