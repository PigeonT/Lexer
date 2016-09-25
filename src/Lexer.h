#ifndef _LEXER_H__
#define _LEXER_H__

#include <iostream>
#include <vector>

namespace Compiler
{
class Lexer;
enum class Operator;
}

enum class Operator
{
Equal, Minus, Multiply, Division
};

class Lexer final 
{
private:
    std::vector<std::string> tokens;

public:
    explicit Lexer();  

    void getInputs(const std::string&);

};
#endif
