#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lieu
{
    char* nom; // Abscisses
    int numero; // Ordonnées
};
typedef struct Lieu lieu;

int main(){
  char* choix;
  lieu maison={"Maison",1};
  lieu foret={"Foret",2};
  printf("Choisissez le nom de lieu\n");
  printf("%d: %s\n",maison.numero,maison.nom);
  printf("%d: %s\n",foret.numero,foret.nom);
  scanf("%s",choix);
  int k=0;
  while (k==0){
    if(strcmp(choix,maison.nom)==0){
      printf("Vous etes allez a la %s\n",maison.nom);
      k++;
    }
    else if(strcmp(choix,foret.nom)==0){
      printf("Vous etes allez a la %s\n",foret.nom);
      k++;
    }
    else{
      printf("Merci d'utiliser le bon nom de lieu\n");
      scanf("%d",&choix);
    }
  }
}
