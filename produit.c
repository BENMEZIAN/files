#include <stdio.h>
#include <stdlib.h>

typedef struct produit{
	char designation[20];
	char reference[20];
	int quantite;
	float prix;
}produit;

int main(int argc, char *argv[]) {
	
	produit prod;
	
	FILE *f;
	
	f=fopen("produit.txt","w");
	
	printf("donner les informations de produit:\n");
	printf("designation:");
	scanf("%s",&prod.designation);
	printf("reference:");
	scanf("%s",&prod.reference);
	printf("quantite:");
	scanf("%d",&prod.quantite);
	printf("prix:");
	scanf("%f",&prod.prix);
	
	fprintf(f,"%s  %s  %d  %f",prod.designation,prod.reference,prod.quantite,prod.prix);
	
	fclose(f);
	
	f=fopen("produit.txt","r");
	
	while(!feof(f)){
		fscanf(f,"%s",&prod.designation);
		printf("la designation:%s\n",prod.designation);
		fscanf(f,"%s",&prod.designation);
		printf("la reference:%s\n",prod.reference);
		fscanf(f,"%d",&prod.quantite);
		printf("la quantite\n",prod.quantite);
		fscanf(f,"%f",&prod.prix);
		printf("la prix:%f\n",prod.prix);
	}
	
	fclose(f);
	
	f=fopen("produit.txt","a+");

	printf("donner les informations de produit a ajouter:\n");
	printf("designation:");
	scanf("%s",&prod.designation);
	printf("reference:");
	scanf("%s",&prod.reference);
	printf("quantite:");
	scanf("%d",&prod.quantite);
	printf("prix:");
	scanf("%f",&prod.prix);
	
	fprintf(f,"\n%s  %s  %d  %f",prod.designation,prod.reference,prod.quantite,prod.prix);
	
	fclose(f);
	
   system("pause");
   
	return 0;
}
