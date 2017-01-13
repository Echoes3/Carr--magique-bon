#include <stdio.h>
#include <stdlib.h>
#define TAITAB 3
//constante impaire  int TAITAB=13;      //changer la constante permet de changer taille de carré magique


//BUT: programme qui affiche un carré magique
//ENTREE:constante rentré par l'utilisateur
//SORTIE:carré magique de la taille de la constante choisie


//-----------------------------------------------------------------------------------------------------------
//typedef struct facilitant l'écriture des programmes, et d'en augmenter la lisibilité
typedef struct Case Case;
struct Case
{
    int x;
    int y;
};
int i,j,k,l;
nbr=1;

Case pos;
carremagique[TAITAB][TAITAB];

//-------------------------------------------------------------------------------------------------------
//Programme Principal

int main()
{
initialisation();
deplacement();
affichage();
}

//--------------------------------------------------------------------------------------
//Procedure d'initialisation du tableau

void initialisation()
    {
    for(i=0;i<TAITAB;i++)
    {
    for(j=0;j<TAITAB;j++)
    {
carremagique[i][j]=0;
}
}
}

//----------------------------------------------------------------------------------------------------
//procedure permettant d'afficher le tableau
void affichage()
    {
    for(i=0;i<TAITAB;i++)
    {
    for(j=0;j<TAITAB;j++)
    {
    if (j!=TAITAB-1)
    {
        printf("%d      ",carremagique[i][j]);
    }
else {
 printf("%d\n",carremagique[i][j]);
}
}
}
}


//-----------------------------------------------------------------------------
//procedure qui teste chaque case et qui avance
void deplacement()
{
pos.x=((TAITAB/2));
pos.y=((TAITAB/2));
carremagique[pos.x][pos.y]=l;
for(k=0;k<(TAITAB*TAITAB)-1;k++)
{
    l++;
    pos.x--;
    pos.y++;
    if (pos.x<0)
    {
            pos.x=TAITAB-1;
    }
    if (pos.y>TAITAB-1)
    {
            pos.y=0;
    }
    if (carremagique[pos.x][pos.y]==0)
    {
    carremagique[pos.x][pos.y]=l;
    }
    else
    {
        do
        {
        pos.x--;
        pos.y--;
         if (pos.x<0)
         {
            pos.x=TAITAB-1;
    }
     else if (pos.y<0)
     {
            pos.y=TAITAB-1;
    }
        }while(carremagique[pos.x][pos.y]!=0);
    }
carremagique[pos.x][pos.y]=l;
}
}
