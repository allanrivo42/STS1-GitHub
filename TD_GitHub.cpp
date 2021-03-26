#include "TD_GitHub.h"
//Fonctions réalisées par l'étudiant 1 :










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
          
