//
// Created by Miller on 23.09.2020.
//

#ifndef OOP_L_W_1_BANKOMAT_H
#define OOP_L_W_1_BANKOMAT_H
#include <vector>
#endif //OOP_L_W_1_BANKOMAT_H

class Bankomat{
private:
    int MaxAmount;
    int CurrentAmount;
    std::vector <char> CurrentID;
public:
    Bankomat(); //Конструктор по умолчанию
    Bankomat(int _MaxAmount,int _CurrentAmount,std::vector <char>); // Конструктор с параметрами
    Bankomat(const Bankomat &bankomat1);
   ~Bankomat();//Destrucktor

    void setID(std::vector <char>);
 void setRandomID(std::vector <char>);

 void setMaxAmount(int );
 int getMaxAmount();


 void setCurrentAmount(int );
 int getCurrentAmount();

 void Message();
 void Actions();
};