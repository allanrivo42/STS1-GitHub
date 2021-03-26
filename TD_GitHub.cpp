#include "TD_GitHub.h"
//Fonctions réalisées par l'étudiant 1 :


bool estMajeur(int age)
{
    int age;
	bool majeur
cout <<"Quel est votre age ?"<< endl;
cin>> age;

if (age>=18)
{
majeur=true;
return majeur
}

else 
{
   majeur=false
   return majeur
}
	
}

 

int exposant(int nbre, int exp)
{
    int nbre,exp,calc;
    
cout <<"Donner un nombre"<< endl;
cin>> nbre;
cout <<"Donner un exposant"<< endl;
cin>> exp;

calc=pow(nbre,exp);

//return nbre;

return calc;

}


float TVA(int prix)
{
    float prix,prixfin;
    
cout <<"Entrer un prix"<< endl;
cin>> prix;
prixfin=prix*1.196;
return prixfin;

}



int plusGrand(int a, int b, int c
{
   {
  int a,b,c;
  
  cout<<("Rentrez 3 nombres")<< endl;
  cin>>a;
  cin>>b;
  cin>>c;
  
  if (a>b and a>c)
  {
      
      return a;
  }
  
  else if (b>a and b>c)
  {
     
      return b;
  }
  
  else if (c>a and c>a)
  {
      
      return c;
  }
















//Fonctions réalisées par l'étudiant 2 (Allan.R) :

bool estPair(int nb)
{
  int nb;
 
  printf("Tapez un nombre: ");
  scanf("%d", &nb);
 
  if( ( nb % 2 ) == 0)
      printf("Nombre pair");
  if( ( nb % 2 ) ==1)
      printf("Nombre Impair");
 
  return 0;
}

int sommeNombre(int nb, int i)
{
  int nb,i;
  
 
  cout<<("Tapez un nombre: ")<< endl;
  cin>>nb;
  i=nb;
  nb=0;
  
  while(i >0)
  
  {
     nb=nb+i;
     i=i-1;
  }
  
  return nb
  
}

float salaireNet(int salaire)
{
  int salaire;
  
  cout<<("entrez le salire brut de l'employé")<< endl;
  cin>>salaire;
  salaire=salaire*0.77;
  return salaire;
}


int plusPetit(int nb1, int nb2, int nb3);
{
  int nb1,nb2,nb3;
  
  cout<<("donnez 3 nombres différents")<< endl;
  cin>>nb1;
  cin>>nb2;
  cin>>nb3;
  
  if (nb1<nb2 and nb1<nb3)
  {
      return nb1;
  }
  
  else if (nb2<nb1 and nb2<nb3)
  {
      return nb2;
  }
  
  else if (nb3<nb1 and nb3<nb1)
  {
      return nb3;
  }
  
  
}










//Fonctions réalisées par l'étudiant 3 (Thomas):
bool estImpair(int nb)
{
int reste = nb % 2;
            if (reste == 0) {
                return true;
            } else {
                return false;
            }
}

			
float moyenne(int nb1, int nb2, int nb3)
{
  int moyenne = (nb1 + nb2 + nb3)/3;
    return moyenne;
}


float reduction(int prix, int reduc)
{
  int pris = prix - prix*reduc/100;
    return pris;
}

int nombreMedian(int a, int b, int c)
{
  if (a<b) 
  {
    if (a>c) 
    {
      return a;
    }
	else 
	{
	if (b<c) 
      {
      return b;
    }
      else 
      {
        return c;
      }
	}
  }
  else //a>b
  {
      if (a<c)
      {
          return a;
      }
      else //a>b a>c
      {
          if (b<c) //a>b a>c b<c a>c>b
      {
      return c;
    }
      else //a>b a>c b>c a>b>c
      {
        return b;
      }
      }
  }
  
}
      else 
      {
        return c;
           }
    }
  }
}
          
