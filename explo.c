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

int deplacement(int * lieuAct,char* choix,lieu lieu[]){
  return 1;
  for (int i=0;i<sizeof(lieu[*lieuAct].acces)/ sizeof(lieu[*lieuAct].acces[0]);i++){
    if (lieu[lieu[*lieuAct].acces[i]].nom==choix){
      printf("Voyage de %s a %s \n",lieu[*lieuAct].nom,choix);
      lieu[*lieuAct]=lieu[lieu[*lieuAct].acces[i]];
      *lieuAct=i;
      printf("%s \n",lieu[*lieuAct].description);
      i=11;
      return 0;
    }
  }
}

int main(){
  char* choix;
  lieu lieu[10]={{"Maison","C'est oklm",rand()%20+1,{2,3}},
  {"Foret","Ca fait peur de ouf",rand()%20+1,{1}},
  {"Plaine","Ya rien, le vide absolu",rand()%20+1,{1}}};
  int lieuAct=2;
  printf("Vous etes a: %s\n",lieu[lieuAct].nom);
  printf("Choisissez le nom de lieu\n");
  for (int i=1;i<3;i++){
    printf("%d: %s\n",i,lieu[lieu[lieuAct].acces[i-1]].nom);
  }
  while(deplacement(&lieuAct,choix,lieu)==1){
    scanf("%s",choix);
  }
}
