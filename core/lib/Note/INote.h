#pragma once
#include <iostream>

class INote {
public:
    virtual std::string type() const noexcept = 0;    
    virtual std::string lexical() const noexcept = 0;
    virtual INote* next() noexcept = 0;
};