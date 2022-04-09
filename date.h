#include <iostream>
#pragma once
class date
{
    public:
    
    int jour;
    int mois;
    int annee;
    date(int =0,int =0,int =0);
    ~date();
    void affichedate();
    int getjour();
    int getmois();
    int getannee();
};
