#include <stdio.h>
#include <stdlib.h>

struct Lieu
{
    char* nom; // Abscisses
    int numero; // Ordonnées
};
typedef struct Lieu lieu;

int main(){
  int choix;
  lieu maison={"Maison",1};
  lieu foret={"Foret",2};
  printf("Choisissez le numero lieu\n");
  printf("%d: %s\n",maison.numero,maison.nom);
  printf("%d: %s\n",foret.numero,foret.nom);
  scanf("%d",&choix);
  int k=0;
  while (k==0){
    if(choix==maison.numero){
      printf("Vous etes allez a la %s\n",maison.nom);
      k++;
    }
    else if(choix==maison.numero){
      printf("Vous etes allez a la %s\n",foret.nom);
      k++;
    }
    else{
      printf("Merci d'utiliser le bon numero de lieu\n");
      scanf("%d",&choix);
    }
  }
}
