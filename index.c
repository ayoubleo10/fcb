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

Tache ik;  // Déclaration de la variable globale pour la tâche

// Fonction pour ajouter une tâche
void ajouter() {
    printf("Donner le titre:\n");
    scanf("%s", ik.titre);

    printf("Donner la description:\n");
    scanf("%s", ik.description);

    printf("Donner la priorite (1=hight, 2=low):\n");
    scanf("%d", &ik.priorite);

    printf("Donner la date (jour mois annee):\n");
    scanf("%d %d %d", &ik.Dates.jour, &ik.Dates.mois, &ik.Dates.annee);
}

// Fonction pour afficher une tâche
void afficher() {
    printf("Titre: %s\n", ik.titre);
    printf("Description: %s\n", ik.description);

    // Afficher la priorite
    if (ik.priorite == 1) {
        printf("Priorite: haute\n");
    } else if (ik.priorite == 2) {
        printf("Priorite: basse\n");
    } else {
        printf("Priorité introuvable!\n");
    }

    // Afficher la date
    printf("Date: %d/%d/%d\n", ik.Dates.jour, ik.Dates.mois, ik.Dates.annee);
}

// Fonction pour supprimer une tâche
void supprimer() {
    
    printf("La tâche a été supprimée.\n");
}

int main() {
    int choix;

    do {
        printf("\nMenu:\n");
        printf("1: Ajouter\n");
        printf("2: Afficher\n");
        printf("3: Supprimer\n");
        printf("Donner votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter();  
                break;

            case 2:
                afficher(); 
                break;

            case 3:
                supprimer(); 
                break;

            default:
                printf("Pardon! Choix introuvable!\n");
        }

    } while (choix != 5);  // Continuer jusqu'à ce que l'utilisateur choisisse de quitter

    return 0;
}
