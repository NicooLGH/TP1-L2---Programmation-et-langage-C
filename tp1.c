#include <stdio.h>
#include <math.h>

void exo1();
void exo2();
void exo3();
void exo4();
void exo5();
void exo6();
void exo7();
void exo7bis();

int main() {
	exo7();
	
	return 0;
}

void exo1() {
	int age;
	printf("Bonjour ! Quel est votre âge ?");
	scanf("%d", &age);
	printf("Vous avez %d ans\n", age);
}

void exo2() {
	int a, b, c;
	int plusGrand;
	
	printf("Valeur 1 : ");
	scanf("%d", &a); 
	printf("Valeur 2 : ");
	scanf("%d", &b); 
	printf("Valeur 3 : ");
	scanf("%d", &c); 
	
	plusGrand = a;
	if(b > plusGrand) {
		plusGrand = b;
	}
	if(c > plusGrand) {
		plusGrand = c;
	}
	printf("Le plus grand réel est %d", plusGrand);
}

void exo3() {
	int i = 1;
	int resultat = 0;
	for (i = 1; i <=10; i++) {
		resultat += i;
	}
	printf("Somme des 10 premiers entiers naturels : %d", resultat);
}

void exo4() {
	int valeur = 0;
	int moyenne = 0;
	int resultat = 0;
	int i = 0;
	
	printf("Saisissez des entiers : \n");
	while (valeur != -1) {
		scanf("%d", &valeur);
		if(valeur == -1) {
		  break;
		}
		moyenne += valeur;
		i++;
	}
	resultat = moyenne / i;
	printf("Moyenne : des entiers saisis : %d", resultat);
}

void exo5() {
	int valeur = 0;
	int resultat = 0;
	
	printf("Saisissez des nombres entiers");
	
	while(scanf("%d", &valeur) != EOF) {
		if (valeur%2 == 0) {
			resultat += valeur;
		}
	}
	printf("Sommes des nombres pairs saisis : %d", resultat);
}

void exo6() {
	int valeur;
	int resultat;
	
	printf("Saisissez un nombre entier");
	scanf("%d", &valeur);
	resultat = log2(valeur);
	printf("La partie entière du log2 est %d", resultat);
}

void exo7() {
	int valeur;
	int i = 1;
	int resultat = 1;
	
	printf("Saisissez un nombre : ");
	scanf("%d", &valeur);
	for(i = 1; i <= valeur; i++) {
		resultat *= i;
	}
	printf("Factorielle de %d : %d", valeur, resultat);
	
}

