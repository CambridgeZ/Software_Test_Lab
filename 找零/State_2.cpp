#include "State_2.hpp"
#include "State_1.hpp"
#include "RemainMoney.hpp"

void State_2::handle(RemainMoney* rm){
    if(rm->getMoney() >= 2){
        std::cout << "2元:" <<rm->getMoney()/2 <<std::endl;
        rm->setMoney(rm->getMoney() % 2);
    }
    rm->setState(new State_1)->handle();
}