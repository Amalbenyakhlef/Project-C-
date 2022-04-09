#include <iostream>
#include<vector>
#include"date.h"
#pragma once

class reservation
{
    protected:
    int idReserv;
    date date_debut;
    int CIN_employe; //CIN mta3 l'employé eli 3mal l reservation
    int matricule; //matricule mta l voiture reservée
    public:
        reservation(int,date,int,int);
        ~reservation();
        void afficheReserv();
        int getIdReserv();
};
class reservation_mission:public reservation
{
    date date_fin;
    public:
     reservation_mission(int,date,int,int,date);
        ~reservation_mission();
        void afficheReserv();

};
class reservation_fonction:public reservation
{
public:
    reservation_fonction(int,date,int,int);
        ~reservation_fonction();
};
