#include <iostream>
#include<vector>
#include"reservations.h"
#include"personnes.h"
#include"parkings.h"
#include"date.h"
using namespace std;

parking::parking(int id,int effectif,string adresse)
{
    idParc=id;
    this->effectif=effectif;
    this->adresse=adresse;

}
parking::parking(const parking & w)
{
    voiture v;
    for(long unsigned int i=0;i<w.liste_voitures.size();i++)
    {
        v=w.liste_voitures[i];
        liste_voitures.push_back(v);
    }

}
parking::~parking()
{
    for(int i=0;i<liste_voitures.size();i++)
        delete liste_voitures[i];
    liste_voitures.clear();
}
void parking::ajouterVoiture(voiture vo)
{
    voiture v=new voiture(vo);
    v.push_back(v);
}
void parking::supprimerVoiture(int i)
{
    delete liste_voitures[i];
    v.erase(liste_voitures.begin()+i);
}


void parking::afficherParc()
{
    for(int i=0;i<liste_voitures.size();i++)
        liste_voitures[i]->affiche();
}
//LES VOITURES
voiture::voiture( )
{

}
voiture::~voiture()
{}
void voiture::affiche()
{
}
void voiture::calculeprix(int a)
{
    int d;
    cout<<" donner l'annee"<<endl;
    cin>>d;
    prix_courant=prix;
    prix_courant=prix_courant -(prix_courant*0.02)*(a -date_achat.getannee());
    prix_courant=prix_courant - (prix_courant*0.05)*(kilo/10000);
    if (marque=="Renault" || marque=="Fiat")
       prix_courant=prix_courant - (prix_courant*0.1);
     else if (marque=="Ferrari" || marque=="Porshe")
         prix_courant=prix_courant - (prix_courant*0.2);


}
