#include "State_50.hpp"
#include "State_20.hpp"
#include "RemainMoney.hpp"
#include <iostream>

void State_50::handle(RemainMoney* rm){
    if(rm->getMoney() >= 50){
        std::cout << "50元:" <<rm->getMoney()/50 <<std::endl;
        rm->setMoney(rm->getMoney() % 50);
    }
    rm->setState(new State_20)->handle();
}