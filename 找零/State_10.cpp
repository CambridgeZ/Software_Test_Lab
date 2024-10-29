#include "State_10.hpp"
#include "RemainMoney.hpp"
#include <iostream>
#include "State_5.hpp"

void State_10::handle(RemainMoney* rm){
    if(rm->getMoney() >= 10){
        std::cout << "10元:" <<rm->getMoney()/10 <<std::endl;
        rm->setMoney(rm->getMoney() % 10);
    }
    rm->setState(new State_5)->handle();
}