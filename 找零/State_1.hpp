#ifndef STATE_1_HPP
#define STATE_1_HPP


#include "State.hpp"

class State_1: public State{
public:
    void handle(RemainMoney* rm) override;
};

#endif