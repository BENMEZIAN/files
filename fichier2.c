#include<stdio.h>
#include<stdlib.h>

typedef struct prof{
	char nom[20];
	char prenom[15];
	int age;
	int matricule;
}prof;

void main(){

	    int i,n;
	   prof prof[20];
	   char block;
	   FILE*f;

      do{
	   	printf("donner le nombre n:");
	   	scanf("%d",&n);
	   }while(n<0 || n>20);

	   for(i=0;i<n;i++){
	   	printf("donner les informations de l'enseingent numero:%d\n",i+1);
	   	printf("le nom:");
	   	scanf("%s",&prof[i].nom);
	   	printf("le prenom:");
	   	scanf("%s",&prof[i].prenom);
	   	printf("l'age:");
	   	scanf("%d",&prof[i].age);
	   	printf("le matricule:");
	   	scanf("%d",&prof[i].matricule);
	   }
	   printf("OUVERTURE EN MODE ECRITURE.\n");

	   for(i=0;i<n;i++){
	   	f=fopen("essai.word","a");
	   	printf("les informations de l'enseingent numero:%d\n",i+1);
	   	fprintf(f,"les informations de l'enseingent numero:%d\n",i+1);
	   	printf("le nom est:%s\n",prof[i].nom);
	   	fprintf(f,"le nom est:%s\n",prof[i].nom);
	   	printf("le prenom est:%s\n",prof[i].prenom);
	    fprintf(f,"le prenom est:%s\n",prof[i].prenom);
	   	printf("l'age est:%d\n",prof[i].age);
	   	fprintf(f,"l'age est:%d\n",prof[i].age);
	   	printf("le matricule est:%d\n",prof[i].matricule);
	    fprintf(f,"le matricule est:%d\n",prof[i].matricule);
	   }

	         fclose(f);
	    printf("OUVERTURE EN MODE LECTURE.\n");

	    f=fopen("essai.word","r");

	   while(!feof(f)){
	   	 block=fgetc(f);
	   	 printf("%c",block);
	   }

	    fclose(f);




}
