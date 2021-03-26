//Fonctions réalisées par l'étudiant 1 :










//Fonctions réalisées par l'étudiant 2 :










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
          
