#include <iostream>
#include<vector>
#include"reservations.h"
#include"personnes.h"
#include"parkings.h"
#include"date.h"
using namespace std;

reservation::reservation(int id,date d,int CIN,int matricule)
{
    idReserv=id;
    this->matricule=matricule;
    CIN_employe=CIN;
    date_debut.jour=d.jour;
    date_debut.mois=d.mois;
    date_debut.annee=d.annee;

}
reservation::~reservation(){}

void reservation::afficheReserv()
{
    cout<<"Identifiant reservation: "<<idReserv<<endl;
    cout<<"Matricule voiture: "<<matricule<<endl;
    cout<<"CIN fonctionnaire: "<<CIN_employe<<endl;
    cout<<"Debut reservation: ";
    date_debut.affichedate();

}
int reservation::getIdReserv()
{
    return idReserv;
}

 reservation_mission::reservation_mission(int id,date dd,int CIN,int matricule,date df):reservation(id,dd,CIN,matricule)
 {
     date_fin.jour=df.jour;
     date_fin.mois=df.mois;
     date_fin.annee=df.annee;

 }
 reservation_mission::~reservation_mission(){}
 void reservation_mission::afficheReserv()
 {
     reservation::afficheReserv();
     cout<<"Fin reservation: ";
     date_fin.affichedate();
 }
reservation_fonction::reservation_fonction(int id,date d,int CIN,int matricule):reservation(id,d,CIN,matricule)
{

}
reservation_fonction::~reservation_fonction(){}




