#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} position;

typedef enum {
    NORD,
    SUD,
    EST,
    OUEST,
    AUCUNE_DIRECTION = -1
} direction;

typedef struct {
    direction_t *directions;
    int taille;
    int capacite;
} pile_directions;




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

void avancer(Position * p; Direction d)
{
  if (d==nord)
    p->y = p->y +1;
  if (d==sud)
    p->y = p->y -1;
  if (d==est)
    p->x = p->x -1;
  if (d==ouest)
    p->x = p->x +1;
}
