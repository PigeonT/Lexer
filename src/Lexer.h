#ifndef _LEXER_H__
#define _LEXER_H__

#include <iostream>
#include <vector>

namespace Compiler
{
class Lexer;
}

class Lexer final 
{
private:
    std::vector<char*> tokens;
    
public:
    explicit Lexer();  

    void getInputs(const std::string&);

    bool isSpace(const std::string&); 
};
#endif
