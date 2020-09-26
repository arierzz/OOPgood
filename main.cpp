#include <iostream>
#include "Bankomat.h"
#include <cstdlib>
#include <ctime>
int main() {
    int move,CurrentAmount,MaxAmount=0;
    std::vector <char> CurrentID;
Bankomat bankomat;
std::cout<<"[1]Создание ID.\n 1.Ввести ID вручную \n 2.Заполнить ID рандомно"<<std::endl;
std::cin>>move;
if(move==1){
    bankomat.setID(CurrentID);
}
if(move==2){
    bankomat.setRandomID(CurrentID);
}

std::cout<<"Введите текущую сумму в банкомате: "<<std::endl; std::cin>>CurrentAmount;
std::cout<<"Введите максимальную сумму,которую можно снять разово в банкомате: "<<std::endl; std::cin>>MaxAmount;
    bankomat.setCurrentAmount(CurrentAmount);
    bankomat.setMaxAmount(MaxAmount);

   bankomat.Message();
    bankomat.Actions();


}