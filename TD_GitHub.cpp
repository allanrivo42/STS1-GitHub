#include "TD_GitHub.h"
//Fonctions réalisées par l'étudiant 1 :










//Fonctions réalisées par l'étudiant 2 :

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










//Fonctions réalisées par l'étudiant 3 :
