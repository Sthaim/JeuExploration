#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lieu
{
    char* nom;
    char* description;
    int difficulte;
    int acces[10];
};
typedef struct Lieu lieu;

void deplacement(lieu lieuAct,lieu lieuArr){
  printf("Voyage de %s a %s \n",lieuAct.nom,lieuArr.nom);
  lieuAct=lieuArr;
  printf("%s \n",lieuArr.description);
}

int main(){
  char* choix;

  lieu lieu1={"Maison","C'est oklm",rand()%20+1,{1,1,1,1}};
  lieu lieu2={"Foret","Ca fait peur de ouf",rand()%20+1,{1,1,1}};
  lieu lieu3={"Plaine","Ya rien, le vide absolu",rand()%20+1,{1,1,1}};
  lieu lieuAct=lieu3;
  printf("Vous etes a: %s\n",lieuAct);
  printf("Choisissez le nom de lieu\n");
  printf("%d: %s\n",1,lieu1.nom);
  printf("%d: %s\n",2,lieu2.nom);
  scanf("%s",choix);
  int k=0;
  while (k==0){
    if(strcmp(choix,lieu1.nom)==0){
      deplacement(lieuAct,lieu1);
      k++;
    }
    else if(strcmp(choix,lieu2.nom)==0){
      deplacement(lieuAct,lieu2);
      k++;
    }
    else{
      printf("Merci d'utiliser le bon nom de lieu\n");
      scanf("%d",&choix);
    }
  }
}
