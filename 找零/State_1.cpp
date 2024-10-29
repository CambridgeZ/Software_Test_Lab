#include "State_1.hpp"
#include "RemainMoney.hpp"

void State_1:: handle(RemainMoney* rm) {
    if(rm->getMoney() >= 1){
        std::cout << "1元:" <<rm->getMoney()/1 <<std::endl;
        rm->setMoney(rm->getMoney() % 1);
    }
}