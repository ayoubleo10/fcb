#include <stdio.h>
#include <string.h>


typedef struct {
    int jour;
    int mois;
    int annee;
} date;


typedef struct {
    char titre[50];
    char description[200];
    int priorite;
    date Dates;
} Tache;


Tache ik;

void ajouter() {
    printf("Donner le titre:\n");
    scanf("%s", ik.titre);

    printf("Donner la description:\n");
    scanf("%s", ik.description);

    printf("Donner la priorite (1=higt, 2=low):\n");
    scanf("%d", &ik.priorite);

    printf("Donner la date (jour mois annee):\n");
    scanf("%d %d %d", &ik.Dates.jour, &ik.Dates.mois, &ik.Dates.annee);
}


    void afficher() {
    printf("Titre: %s\n", ik.titre);
    printf("Description: %s\n", ik.description);

    // Afficher la priorite
    if (ik.priorite == 1) {
        printf("priorite:hight \n");
    } else if (ik.priorite == 2) {
        printf("priorite:low\n");
    } else {
        printf("Priorité introuvable!\n");
    }


    // Afficher la date
    printf("Date: %d/%d/%d\n", ik.Dates.jour, ik.Dates.mois, ik.Dates.annee);
}



    int main() {
    //premier etape afficher menu des operation 
    printf("Menu:\n");
    printf("selectionner choix , pour votre tache!\n");
    printf("1: Ajouter\n");
    printf("2: Afficher\n");
    printf("3: Modifier\n");
    printf("4: Supprimer\n");

    int choix;

    do {
        printf("Donner votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
            ajouter();
                break;

            case 2:
            afficher();
                break;

            default:
            printf("pardon! Choix introuvable!\n");
        }

    } while (choix != 2);


    return 0;
}