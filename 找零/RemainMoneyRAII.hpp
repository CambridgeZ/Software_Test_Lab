//
// Created by Mac on 24-10-29.
//

#ifndef GETCHANGE_REMAINMONEYRAII_HPP
#define GETCHANGE_REMAINMONEYRAII_HPP

#include "RemainMoney.hpp"
#include <iostream>

using std::cout;
using std::endl;

class RemainMoneyRAII {
public:
    RemainMoneyRAII(int n) : rm(new RemainMoney(n)) {}

    ~RemainMoneyRAII() {
        rm->handle();
        delete rm;
        cout<<"--------------------------------"<<endl;
    }
private:
    RemainMoney *rm;
};


#endif //GETCHANGE_REMAINMONEYRAII_HPP
