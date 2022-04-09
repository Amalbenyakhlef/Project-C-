#include <iostream>
#include <vector>
#include<string>
#include "reservations.h"
#pragma once
using namespace std;
class personne
{
    protected:
    string nom;
    string prenom;
    int CIN;
    public:
    personne(string ,string ,int );
    ~personne();
     void affiche();
};
class fonctionnaire:public personne
{
    string role;
    bool voiture_fonction;
    vector <reservation*> liste_reservations; //liste des reservations d'un employé
public:
    fonctionnaire(string ,string ,int,string,bool);
    fonctionnaire(const fonctionnaire &);
    ~fonctionnaire();
    void affiche();
    void ajouter_reservation(reservation_fonction);
    void ajouter_reservation(reservation_mission);
    void supprimer_reservation(int);

};
class chauffeur:public personne
{
public:
    chauffeur(string ,string ,int );
    ~chauffeur();
};

