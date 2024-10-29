#include "State_5.hpp"
#include "RemainMoney.hpp"
#include "State_2.hpp"

void State_5::handle(RemainMoney* rm){
    if(rm->getMoney() >= 5){
        std::cout << "5元:" <<rm->getMoney()/5 <<std::endl;
        rm->setMoney(rm->getMoney() % 5);
    }
    rm->setState(new State_2)->handle();
}