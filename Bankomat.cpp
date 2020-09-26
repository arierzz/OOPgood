//
// Created by Miller on 23.09.2020.
//

#include <iostream>
#include "Bankomat.h"
#include <cstdlib>
#include <ctime>
Bankomat::Bankomat() { //Конструктор
    MaxAmount=0;
    CurrentAmount=0;
}
Bankomat::Bankomat(int _MaxAmount, int _CurrentAmount,std::vector <char> _CurrentID) {       //Конструктор
    MaxAmount=_MaxAmount;
    CurrentAmount=_CurrentAmount;
    CurrentID=_CurrentID;
}
Bankomat::Bankomat(const Bankomat &bankomat1){
    this->CurrentID = bankomat1.CurrentID;
    this->MaxAmount = bankomat1.MaxAmount;
    this->CurrentAmount =bankomat1.CurrentAmount;
}


void Bankomat::setID(std::vector <char>) {
    char j;
    int i=0;
    std::cout<<"Вводите элементы: "<<std::endl;
    for(int i=0;i<5;i++){
     std::cin>>j;
CurrentID.push_back(j);
                        }
    std::cout<<"Ваш ID: "<<CurrentID[i]<<CurrentID[i+1]<<CurrentID[i+2]<<CurrentID[i+3]<<CurrentID[i+4]<<std::endl;

}

void Bankomat::setRandomID(std::vector<char>) {

        int i = 0;
        int RandomDigit = 0;
        char Alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'Q', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                             'S',
                             'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        char Numberbet[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

        srand(time(NULL));
        for (int i = 0; i <= 3; i++) {
            RandomDigit = rand() % 25 + 0;
            CurrentID.push_back(Alphabet[RandomDigit]);
        }

        for (int i = 3; i <= 5; i++) {
            RandomDigit = rand() % 9 + 0;
            CurrentID.push_back(Numberbet[RandomDigit]);
        }


    std::cout<<"Сгенерируемый ID: "<<CurrentID[i]<<CurrentID[i+1]<<CurrentID[i+2]<<CurrentID[i+3]<<CurrentID[i+4]<<std::endl;
}


void Bankomat::setMaxAmount(int _MaxAmount) {
    Bankomat::MaxAmount=_MaxAmount;
}
int Bankomat::getMaxAmount() {
return Bankomat::MaxAmount;
}

void Bankomat::setCurrentAmount(int _CurrentAmount) {
Bankomat::CurrentAmount=_CurrentAmount;
}
int Bankomat::getCurrentAmount() {
return Bankomat::CurrentAmount;
}

void Bankomat::Message(){
    int i=0;
std::cout<<"ID данного банкомата: "<<CurrentID[i]<<CurrentID[i+1]<<CurrentID[i+2]<<CurrentID[i+3]<<CurrentID[i+4]<<std::endl;
   std::cout <<"Текущая сумма денег в банкомате: "<<CurrentAmount<<"   [Максимальная сумма, которую можно снять разово: "<<MaxAmount<<"]"<<std::endl;
    std::cout<<"Доступные действия: \n 1.Снять наличные. \n 2.Внести наличные."<<std::endl;

}
void Bankomat::Actions() {
    int Move = 0;
    int Summ=0;

    std::cin>>Move;

    if(Move==1){
        std::cout<<"Введите сумму,которую вы желаете снять: "; std::cin>>Summ;

        for(int i=1; Summ>MaxAmount ; i++) {
            std::cout << "Вы ввели недопустимое значение"<< "   [Максимальная сумма, которую можно снять разово: "<<MaxAmount<<"]"<<std::endl;
            std::cout<<"Неправильных попыток:"<<i<<std::endl;
            std::cout<<"Введите сумму,которую вы желаете снять: "; std::cin>>Summ;
        }

        CurrentAmount=CurrentAmount-Summ;
        std::cout<<"Вы успешно сняли наличные.\n Текущая сумма денег в банкомате:"<<CurrentAmount<<"\n Желаете вернуться в главное меню?"<<std::endl;
        std::cout<<" 1.Да.\n 2.Нет."<<std::endl;
        std::cin>>Move;
        if(Move==1){
            Message();
            Actions();
        } else {
            system("pause");
        }
    }
    if (Move==2){
        std::cout<<"Введите сумму,которую вы желаете внести: "; std::cin>>Summ;
        CurrentAmount=CurrentAmount+Summ;
        std::cout<<"Вы успешно внесли наличные.\n Текущая сумма денег в банкомате:"<<CurrentAmount<<"\n Желаете вернуться в главное меню?"<<std::endl;
        std::cout<<" 1.Да.\n 2.Нет."<<std::endl;
        std::cin>>Move;
        if(Move==1){
            Message();
            Actions();
        } else {

        }
    }

}
Bankomat::~Bankomat() {
    std::cout<<"СРАБОТАЛ ДИСТРУКТОР"<<std::endl;

}




