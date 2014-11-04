#Programmation en C - Cahier de TP n°3
##I Utilisation de tableaux
###1. Lecture et affichage
Ecrire les fonctions Lecture et Ecriture qui effectuent respectivement la lecture et l’affichage d’un tableau d'entiers sur l'entrée et la sortie standard. Ne pas oublier de passer la taille du tableau en paramètre.
###2. Recherche d’un entier dans un tableau
Ecrire une fonction Position prenant en arguments un tableau T d'entiers et un entier x et qui renvoie l’indice de la première occurrence de x dans T si x apparaît dans T et −1 sinon.
###3. Somme de deux tableaux
On définit la somme de deux tableaux A et B de taille N, comme le tableau C de taille N tel que : pour tout i appartenant à l'intervalle [0..N-1] : C[i] = A[i] + B[i]
Ecrire une fonction Somme recevant en arguments A, B et C.
A la sortie de Somme, C contient la somme des tableaux A et B.
###4. Histogramme
Ecrire une fonction Histogramme qui reçoit deux tableaux d’entiers Note et Histo. Le tableau Note contient des notes de 0 à 20. Le tableau Histo de taille 21 devra représenter, après l’appel de la fonction, l’histogramme des notes du premier tableau, c’est à dire que Histo[i] est le nombre de valeurs égales à i dans le tableau Note.
###5. Nombres premiers
(a) Utiliser la fonction EstPremier pour écrire une fonction permettant de remplir un tableau avec les N premiers nombres premiers.
(b) Sans utiliser la fonction EstPremier, écrire une fonction permettant de remplir un tableau avec les N premiers nombres premiers. Cette fonction devra être plus efficace que la précédente, c’est à dire remplir le tableau en moins d’opérations.
(c) Utiliser le tableau des N premiers nombres premiers pour écrire une fonction critère de primalité plus efficace. On distinguera trois cas :
• l’entier à tester est plus petit que le plus grand nombre premier mémorisé • l’entier à tester admet un diviseur premier m ́emorisé
• l’entier à tester n’admet pas un diviseur premier mémorisé. 
###6. Crible d’Eratosthène
Le crible d’Eratosthène est une méthode efficace lorsque l’on recherche uniquement les nombres premiers inférieurs à un entier N. Il consiste à écrire les entiers de 2 à N, à rayer tous les multiples de 2, puis tous les multiples du premier entier non rayé (3 puis 5, . . .), et à recommencer jusqu’`a ce que
l’entier dont il faut suprimer les multiples soit supérieur à N1⁄2. Les entiers non rayés du tableau sont les entiers premiers inférieurs à N.
Ecrire une fonction réalisant cette méthode à l’aide d’un tableau de N entiers tel que la case i contient 1 si i est premier et 0 sinon.

##II Chaînes de caractères
###1. Copie
Implémenter les différentes versions de la copie d’une chaîne dans une autre étudiée en Td.
###2. Concaténation
Ecrire une fonction qui reçoit deux chaînes de caractères et copie la première à la suite de la seconde. On utilisera la valeur de retour pour indiquer si la concaténation a été possible. Si la place est insuffisante, on copie le maximum de caractères possibles. Le tableau obtenu doit toujours être une chaîne de caractères.
###3. Ordre lexicographique
Ecrire une fonction permettant de comparer une chaîne par rapport à une autre selon l’ordre lexicographique (ordre du dictionnaire).
Cette fonction reçoit deux chaînes de caractères Prem et Deux et renvoie :
−1 si Prem < Deux 0 si Prem = Deux 1 si Deux < Prem
###4. Occurence
Ecrire une fonction Occurrence qui reçoit une chaîne de caractères et un caractère et renvoie le nombre d’apparition du caractère dans la chaîne.
###5. Remplacement de caractère
Ecrire une fonction RemplaceCaractere qui reçoit une chaîne de caractères et deux caractères et qui remplace dans la chaîne toute apparition du premier caractère par le second.
###6. Remplacement de caractères dans des chaînes
Ecrire une fonction RemplaceListe qui reçoit trois chaînes de caractères et qui remplace dans la première chaîne toute apparition du ieme caractère de la deuxième chaîne par le ieme caractère de la troisième chaîne. Si les deux dernières chaînes n’ont pas la même longueur, seul les caractères de la plus petite seront pris en compte.
Exemple : Si la variable s est une chaîne contenant bonjour alors l’appel RemplaceListe(s,"ju","sil") transforme le contenu de s en bonsoir, en changeant le ’j’ en ’s’,le ’u’ en ’i’ et en ignorant le ’l’.
###7. Anagramme
On appelle Anagramme deux mots écrits avec les mêmes lettres (tsarine et entrais).
Ecrire une fonction permettant de déterminer si deux chaînes de caractères sont des anagrammes. Indication : on pourra utiliser un tableau de 256 int déclaré localement permettant de mémoriser le nombre d’occurrences de chaque lettre.
###8. Recherche d’un mot
Ecrire une fonction Recherche qui recherche un mot dans une chaine de caractères. Elle retournera la position du début du mot (et si le mot est absent, elle retournera −1).
Exemple : si les variables s1 et s2 sont des chaînes contenant bonjour et jour, alors l’appel Recherche(s1, s2) retourne 3.
##III Structures
###Exercice 1
On veut définir un nouveau type pour représenter une voiture.
1. Définir le type Voiture qui permette de représenter une voiture comme une structure ayant cinq champs : nom du constructeur, nom du modèle, année de fabrication, nombre de kilomètres, montant de la prime d'assurance. Les types sont : tableau de 16 caractères pour les deux premiers champs, entier pour les deux suivants, double pour le dernier.
2. Dans la fonction principale de votre programme, écrire les instructions permettant la saisie de toutes les valeurs des champs d'une voiture, puis son affichage.
3. Définir une fonction de saisie au clavier d’une voiture : saisirVoiture.
4. Définir une fonction d’affichage d’une voiture : afficherVoiture.
5. Tester les fonctions dans la fonction principale de votre programme.

###Exercice 2
On veut définir un nouveau type pour représenter une date.
1. Définir le type Date qui permette de représenter une date comme une structure ayant trois champs de type entier : jour, mois, annee.
2. Définir une fonction de saisie contrôlée au clavier d’une date : saisirDate.
3. Définir une fonction d’affichage d’une date : afficherDate.
4. Compléter le type Voiture de l'exercice 1 avec un champ pour la date de mise en circulation
du véhicule.
5. Définir une fonction de saisie au clavier d’une voiture : saisirVoiture. Vous devez utiliser la
fonction de saisie d'une date préalablement définie.
6. Définir une fonction d’affichage d’une voiture : afficherVoiture. Vous devez utiliser la
fonction d'affichage d'une date préalablement définie.
7. Définir une fonction permettant de calculer le nombre moyen de kilomètres annuel. Vous
calculererz d'abord le nombre moyen de kilomètres mensuel en utilisant la différence en mois
entre la date de mise en criculation et celle du jour.
8. Tester les fonctions dans la fonction principale de votre programme.
********************
*Cahier de TP 3 - tableaux, chaînes de caractères, structures*