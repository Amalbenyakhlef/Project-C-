#include <iostream>
#include<vector>
#include<string>
#include"reservations.h"
#include"date.h"
#pragma once
using namespace std;

class voiture
{
    int matricule; //el attribut de base (kima cle primaire)
    int emplacement;
    string marque;
    bool fonction; //=1 si c'est une voiture de fonction
    date dateAchat;
    double kilometrage; //utile si on va utiliser les fonctions du TP 5
    double prix;
    vector <reservation*> liste_reservations; //contient toutes les reservations relatives à une voiture
    public:
    voiture(int,int ,string,bool,date,double,double );
    voiture(const voiturt  e &);
    ~voiture();
    void affiche();
    void ajouter_reservation(reservation_fonction);
    void ajouter_reservation(reservation_mission);
    void supprimer_reservation(int);
    void afficherReservations();
    void modifierVoiture();
    int getMatricule();
    int getEmplacement();


};
class parking
{
    int idParc;
    int effectif;
    string adresse;
    vector <voiture> liste_voitures;
    public:
    parking(int,int,string);
    parking(const parking &);
    ~parking();
    void afficheParc(); //affichage des info du parc + liste des voitures
    void ajouterVoiture(voiture);
    void supprimerVoiture(int);
    int getIdParc();


};
