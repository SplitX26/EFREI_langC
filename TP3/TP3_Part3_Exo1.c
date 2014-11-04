#include <stdio.h>
#include <stdlib.h>

/* Structure Voiture  (Date n'a pas été ajouté ici) */
typedef struct Voiture{
	char nomConstructeur[16];
	char nomModele[16];
	int anneeFabrication;
	int nbKm;
	double montantPrime;
}Voiture;

/* Structure Date */
typedef struct Date{
	int jour;
	int mois;
	int annee;
}Date;

/* Prototypes */
void saisirVoiture(Voiture *voiture);
void afficherVoiture(Voiture voiture);
void saisirDate(Date *date);
void afficherDate(Date date);

int main(int argc, char *argv[]){
	Voiture maSuperPeugeot;
	Date maDateDeNaissance;
	/* 
	printf("Saisie de maSuperPeugeot dans le main\n");
	printf("Entrez la marque\n");
	scanf("%s", maSuperPeugeot.nomConstructeur);
	printf("Marque: %s \n\nEntrez le modele\n",maSuperPeugeot.nomConstructeur);
	scanf("%s", maSuperPeugeot.nomModele);
	printf("Modele: %s \n\nEntrez l'annee de fabrication\n",maSuperPeugeot.nomModele);
	scanf("%d", &(maSuperPeugeot.anneeFabrication));
	printf("Annee de fabrication: %d \n\nEntrez le nombre de km\n",maSuperPeugeot.anneeFabrication);
	scanf("%d", &(maSuperPeugeot.nbKm));
	printf("Kilometrage: %d \n\nEntrez le montant de la prime d'assurance\n",maSuperPeugeot.nbKm);
	scanf("%lf", &(maSuperPeugeot.montantPrime));
	printf("Montant de la prime: %lf\n",maSuperPeugeot.montantPrime); 
	*/
	printf("Saisie des valeurs de la voiture via la fonction : \n");
	saisirVoiture(&maSuperPeugeot);
	afficherVoiture(maSuperPeugeot);
	printf("Saisie des valeurs de la date via la fonction : \n");
	saisirDate(&maDateDeNaissance);
	afficherDate(maDateDeNaissance);

	
	return 0;
}

/* Fonction permettant de saisir les valeurs de notre struct */
/* On met un pointeur en parametre car on veut modifier la struct qu'on passe en parametre */
void saisirVoiture(Voiture *voiture){
	printf("Entrez la marque : ");
	scanf("%s", voiture->nomConstructeur);
	printf("Entrez le modele : ");
	scanf("%s", voiture->nomModele);
	printf("Entrez l'annee : ");
	scanf("%d", &voiture->anneeFabrication);
	printf("Entrez le nombre de km : ");
	scanf("%d", &voiture->nbKm);
	printf("Entrez le montant de la prime d'assurance : ");
	scanf("%lf", &voiture->montantPrime);
}

/* Fonction qui affiche le contenu de la structure*/
void afficherVoiture(Voiture voiture){
	printf("Voiture de marque %s\nModele %s\nAnnee: %d\nKilometrage: %d km\nPrime d'assurance de %lf\n\n", voiture.nomConstructeur, voiture.nomModele, voiture.anneeFabrication, voiture.nbKm, voiture.montantPrime);
}

/* Fonction de saisie de la date */
void saisirDate(Date *date){
	printf("Saisir la date (jour puis mois puis annee: \n");
	scanf("%d",&date->jour);
	scanf("%d",&date->mois);
	scanf("%d",&date->annee);
}

/* Fonction d'affichage de la date */
void afficherDate(Date date){
	printf("%d/%d/%d\n", date.jour, date.mois, date.annee);
}