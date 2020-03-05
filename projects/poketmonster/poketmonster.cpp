#include <iostream>
#include <vector>
#include <string>
#include "Monstreallie.cpp"
#include <time.h> 

using namespace std;

int main()
{

Monstreallie pokachu;
Monstreallie vomix;
Monstreallie bulbutopet;
int potion = 3;
int loop = 1;
int compteur =0;
int electrique = 1;
cout << "poketmonster The game !" << endl;
  cout << "pukacho en avant !" << endl;
  int demande;
while (loop == 1)
{
    cout << "bulbutopet a : " << bulbutopet.getPv() << " hp" << endl;
    cout << "que veux tu faire ?" << endl;
    cout << "soigner (1) ou attaquer (2) ton poketmonster ?" << endl;
    cin >> demande;
    if (demande == 1)
    {
      cout << "Quel poketmonster veut tu soigner  ? (1) pokachu (2) Vomix !" << endl;
      cin >> demande;
      if (demande == 1 && potion > 0)
      {
          potion -=1;
          pokachu.setPv(10);
          cout << "poketmonster soigné !" << endl;
      }
      else if (demande == 2 && potion > 0)
      {
          potion -=1;
          vomix.setPv(10);
          cout << "poketmonster soigné !" << endl;
      }
      else if( potion <= 0)
      {
          cout << "tu n'as plus de potion !" << endl;
      }
      
      
      

        cout << "le bulbutopet lance une attaque !" << endl;
        int alea = rand() %2 +1;
        if (alea == 1)
        {
            int alea_attaque = rand() %2 +1;
            if (alea_attaque == 1)
            {
                cout << "bulbutopet attaque pokachu !" << endl;
                pokachu.setPv(-20);
            }
            else if(alea_attaque == 2){
                cout << "pokachu évite l'attaque en entendant vos encouragements ** pokachu saute deux fois**" <<endl;
            }
            
        }
        else if (alea == 2){
            int alea_attaque = rand() %2 +1;
            if (alea_attaque == 1)
            {
                cout << "bulbutopet attaque vomix !" << endl;
                vomix.setPv(-20);
            }
            else if(alea_attaque == 2){
                cout << "vomix évite l'attaque en entendant vos encouragements ** vomix saute deux fois**" << endl;
            }
        }

        cout << "Pokachu a : " << pokachu.getPv() << " hp" << endl;
      cout << "Vomix a : " << vomix.getPv() << " hp" << endl;
        
    }
    else if(demande == 2)
    {
        cout << "quel pokemon attaque ? (1) pokachu (2) Vomix !";
        cin >> demande;
        if (demande == 1 && pokachu.getPv() > 0)
        {
            bulbutopet.setPv(-20);
            cout << "pokachu attaque Péclaire !" << endl;
            cout << "bulbutopet a : " << bulbutopet.getPv() << " hp" << endl;
            if (electrique !=2)
            {
                electrique = rand() %2 +1;
            }
            
            
                       

        }
        else if (demande == 2 && vomix.getPv() > 0)
        {
            bulbutopet.setPv(-10);
            cout << "Vomix attaque : la roche nous tombe sur la tête !" << endl;
            cout << "bulbutopet a : " << bulbutopet.getPv() << " hp" << endl;
        }
        else if(demande ==1 && pokachu.getPv() <=0)
        {
            cout << "ce poketmonster est mort !" << endl;
        }
        else if(demande ==2 && vomix.getPv()<=0){
            cout << "ce poketmonster est mort !" << endl;
        }

        cout << "le bulbutopet lance une attaque !" << endl;
        int alea = rand() %2 +1;
        if (alea == 1)
        {
            int alea_attaque = rand() %2 +1;
            if (alea_attaque == 1)
            {
                cout << "bulbutopet attaque pokachu !" << endl;
                pokachu.setPv(-20);
            }
            else if(alea_attaque == 2){
                cout << "pokachu évite l'attaque en entendant vos encouragements ** pokachu saute deux fois**" << endl;
            }
            
        }
        else if (alea == 2){
            int alea_attaque = rand() %2 +1;
            if (alea_attaque == 1)
            {
                cout << "bulbutopet attaque vomix !" << endl;
                vomix.setPv(-20);
            }
            else if(alea_attaque == 2){
                cout << "vomix évite l'attaque en entendant vos encouragements ** vomix saute deux fois**" << endl;
            }
        }
        cout << "Pokachu a : " << pokachu.getPv() << " hp" << endl;
      cout << "Vomix a : " << vomix.getPv() << " hp" << endl;
    }

    if (electrique == 2)
        {
            cout << "bulbutopet est électrifié ! il perds 5 hp !" << endl;
            bulbutopet.setPv(-5);
            
        }
        
    if (pokachu.getPv() <= 0 && vomix.getPv() <= 0)
    {
        loop = 0;
        cout << "tout tes poketmonster sont mort !" << endl;
    }
    if (bulbutopet.getPv() <= 0)
    {
        cout << "tu veux refaire un combat ? (1) oui (2) non" << endl;
        cin >> demande;
        if (demande == 1)
        {
            electrique = 1;
            compteur +=1;
            while (bulbutopet.getPv() < (100 * compteur))
            {
                int compteur_pv =0;
                compteur_pv +=1;
                bulbutopet.setPv(compteur_pv);
            }
            
        }
        else
        {
            loop =0;
        }
        
        
        
        
        
    }
    
    
    
}
cout << "merci d'avoir joué !" << endl;




}