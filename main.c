/*
La ville comprend de nombreuses casernes de pompiers et chacune a sa propre zone d'intervention qui lui est r�serv�e. Cependant en regardant ces zones il vous semble qu'elles ne sont pas tr�s bien choisies car parfois elles se recoupent alors que certains endroits de la ville sont en dehors de toutes les zones et donc ne sont pas prot�g�es par les pompiers. Vous d�cidez d'aider le maire � mieux organiser l'action des pompiers.

Ce que doit faire votre programme :
Votre programme doit lire la description de plusieurs paires de zones rectangulaires, et pour chacune, d�terminer si les deux rectangles s'intersectent.

Vous devez lire un premier entier, le nombre de paires de zones que votre programme devra tester. Ensuite, pour chaque paire possible, deux zones rectangulaires et parall�les aux axes vous sont donn�es l'une apr�s l'autre. Chaque zone est d�crite par 4 entiers : son abscisse minimale et maximale puis son ordonn�e minimale et maximale.

Sur cet exemple, la zone du bas est donc d�crite par les 4 entiers (1, 6, 1, 5) et l'autre par (4, 9, 3, 8) :


Pour chaque paire de zones, votre programme doit �crire "OUI" si les zones s'intersectent et "NON" sinon. Si elles ne font que se toucher sur les bords il doit �crire "NON".

EXAMPLE

input:
1
1
6
1
5
4
9
3
8

output:
OUI
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Veuillez saisir le nombre de paires de zones : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int A_min_x, A_max_x, A_min_y, A_max_y;
        int B_min_x, B_max_x, B_min_y, B_max_y;

        // Lire les coordonn�es du premier rectangle
        printf("Veuillez saisir les coordonn�es du premier rectangle (min_x max_x min_y max_y) : \n");
        scanf("%d %d %d %d", &A_min_x, &A_max_x, &A_min_y, &A_max_y);

        // Lire les coordonn�es du deuxi�me rectangle
        printf("Veuillez saisir les coordonn�es du deuxi�me rectangle (min_x max_x min_y max_y) : \n");
        scanf("%d %d %d %d", &B_min_x, &B_max_x, &B_min_y, &B_max_y);

        // V�rifier si les rectangles ne se recoupent pas
        if (A_max_x <= B_min_x || A_min_x >= B_max_x || A_max_y <= B_min_y || A_min_y >= B_max_y) {
            printf("NON\n");
        } else {
            printf("OUI\n");
        }
    }

    return 0;
}

