#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>

class RemainMoney;

class State{
public:
    virtual void handle(RemainMoney* rm) =0;
};


#endif 