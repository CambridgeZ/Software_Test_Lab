#ifndef REMAINMONEY_HPP
#define REMAINMONEY_HPP

#include "State_50.hpp"
#include "State.hpp"

class RemainMoney{
private:
    State* state;
    int money;
    
public:
    RemainMoney(int m):money(m), state(new State_50){}

    RemainMoney* setState(State* s){
        state = s;
        return this;
    }

    void setMoney(int m){
        money = m;
    }

    void handle(){
        state->handle(this);
    }

    int getMoney(){
        return money;
    }
    
};



#endif