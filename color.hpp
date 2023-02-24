#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>
#include <string>

namespace Color 
{

    // Enumerazione dei colori
    enum Code 
    {
        BLACK    = 30,
        RED      = 31,
        GREEN    = 32,
        YELLOW   = 33,
        BLUE     = 34,
        MAGENTA  = 35,
        CYAN     = 36,
        LIGHT_GRAY  = 37,
        DEFAULT = 39,
        DARK_GRAY = 90,
        LIGHT_RED = 91,
        LIGHT_GREEN = 92,
        LIGHT_YELLOW = 93,
        LIGHT_BLUE = 94,
        LIGHT_MAGENTA = 95,
        LIGHT_CYAN = 96,
        WHITE    = 97,
    };

    // Funzione che restituisce la stringa di escape ANSI per cambiare colore
    inline std::string color(Code code) 
    {
        return "\033[" + std::to_string(code) + "m";
    }

    inline std::ostream& operator<<(std::ostream& os, Code code) 
    {
        return os << color(code);
    }

}

#endif // COLOR_HPP
