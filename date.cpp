#include"date.h"
#include <iostream>

using namespace std;

 date::date(int j ,int m,int a)
 {
     jour=j;
     mois=m;
     annee=a;
 }
date::~date()
{}
 void date::affichedate()
{
    cout<<"la date d'achat "<< jour<<" / "<<mois<<" / "<<annee<<endl;
}

