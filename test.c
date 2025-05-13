#include <stdio.h>
#include <stdlib.h>

int* creer_tableau (int taille)
{
  int* tab = malloc(taille*sizeof(int);
  return tab;
}

int ajouter_position (int* tab1, int* tab2, int taille, Position* p)
{
  int* tab3 = creer_tableau(taille + 1);
  int* tab4 = creer_tableau(taille + 1);
  int i;
  for (i=0; i<taille-1; i++)
    {
      tab3[i]=tab1[i];
      tab4[i]=tab2[i];
    }
  tab3[t-1]= (p->x);
  tab4[t-1]= (p->y);
  free(tab1); free(tab2);
  tab1=tab3; tab2=tab4;
  return taille;
}

