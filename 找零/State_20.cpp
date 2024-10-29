#include "State_20.hpp"
#include "RemainMoney.hpp"
#include <iostream>
#include "State_10.hpp"

void State_20::handle(RemainMoney* rm){
    if(rm->getMoney() >= 20){
        std::cout << "20元:" <<rm->getMoney()/20 <<std::endl;
        rm->setMoney(rm->getMoney() % 20);
    }
    rm->setState(new State_10)->handle();
}