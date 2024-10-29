#include <iostream>
#include <string>
#include "RemainMoneyRAII.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool isNumber(string number){
    for(auto c : number){
        if(c < '0' || c > '9'){
            return false;
        }
    }
    return true;
}

int main(){
    string numberPayed;
    string numberWorthed;
    int n;

    while(cin>>numberPayed >> numberWorthed){
        // number 当中是否有非数字字符

        bool flag = isNumber(numberPayed) && isNumber(numberWorthed);

        if(!flag){
            cout<<"非法输入"<<endl;
            continue;
        }

        int payed = std::stoi(numberPayed);
        if(payed < 0 || payed > 100){
            cout<<"请确保支付金额在0-100之间"<<endl;
        }
        int worthed = std::stoi(numberWorthed);
        if(worthed< 0 || worthed > 100){
            cout<<"请确保商品金额在0-100之间"<<endl;
        }

        n = payed - worthed;
        if(n < 0){
            cout<<"支付金额不足"<<endl;
            continue;
        }

        RemainMoneyRAII r(n);

        cout<<"--------------------------------"<<endl;
    }
    return 0;
}