#include "Lexer.h"
#include <boost/algorithm/string.hpp>
#include <sstream>
#include <iostream>

Lexer::Lexer() = default;

void Lexer::getInputs(const std::string& inputs)
{
    /*char[] _s;
    strcpy(_s, inputs);

    for(int i = 0; i < _s) 
    std::stringstream ss(inputs);
    std::string item;
    char delim = ' ';
   
    while(std::getline(ss, item, delim))
    {
        std::cout << item << std::endl;
    }
    */

    char *_s;
    std::strcpy (_s, const_cast<char*>(inputs.c_str()));

    while(NULL != _s && ' ' != *_s)
    {
        std::cout << _s << std::endl;
        _s++;
    }
}

bool Lexer::isSpace(const std::string& token)
{
    char *_s;
    strcpy(_s, const_cast<char*>(token.c_str()));
    return (0 == isspace((int)*_s)? true : false);
}
