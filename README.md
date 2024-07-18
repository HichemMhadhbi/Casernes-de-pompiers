# Casernes de pompiers

## Description

La ville comprend de nombreuses casernes de pompiers et chacune a sa propre zone d'intervention qui lui est réservée. Cependant en regardant ces zones il vous semble qu'elles ne sont pas très bien choisies car parfois elles se recoupent alors que certains endroits de la ville sont en dehors de toutes les zones et donc ne sont pas protégées par les pompiers. Vous décidez d'aider le maire à mieux organiser l'action des pompiers.

## Ce que doit faire votre programme :
Votre programme doit lire la description de plusieurs paires de zones rectangulaires, et pour chacune, déterminer si les deux rectangles s'intersectent.

Vous devez lire un premier entier, le nombre de paires de zones que votre programme devra tester. Ensuite, pour chaque paire possible, deux zones rectangulaires et parallèles aux axes vous sont données l'une après l'autre. Chaque zone est décrite par 4 entiers : son abscisse minimale et maximale puis son ordonnée minimale et maximale.

Sur cet exemple, la zone du bas est donc décrite par les 4 entiers (1, 6, 1, 5) et l'autre par (4, 9, 3, 8) :


Pour chaque paire de zones, votre programme doit écrire "OUI" si les zones s'intersectent et "NON" sinon. Si elles ne font que se toucher sur les bords il doit écrire "NON".

### EXAMPLE

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
