#include "Lexer.h"
#include <boost/algorithm/string.hpp>
#include <sstream>

Lexer::Lexer() = default;

void Lexer::getInputs(const std::string& inputs)
{
    std::stringstream ss(inputs);
    std::string item;
    char delim = ' ';

    while(std::getline(ss, item, delim))
    {
        std::cout << item << std::endl;
    }
}
