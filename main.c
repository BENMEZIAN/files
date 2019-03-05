#include <stdio.h>
#include <stdlib.h>

int main()
{
        int age,pos;   char caractere;
  FILE*f;
   f=fopen("nouveau.txt","r");

   if(f==NULL){
    printf("erreur d'ouverture de ce fichier");
    exit(1);
   }
 
    if (f != NULL){
             // COMMENT ECRIRE DANS UN FICHIER AVEC LE MODE ECRITURE 
    
		 // ecrire un seule caractère
    	 fputc('A', f); 
         // ecrire un chaine de caractère
         fputs("Salut les Zér0s\nComment allez-vous ?",f);
        /*l'indication de l'utilisation 
	          de la fonction printf*/
	     //On demande l'âge
      /* printf("Quel age avez-vous ? ");
        scanf("%d", &age);*/
        // On l'écrit dans le fichier
      // fprintf(f,"Le Monsieur qui utilise le programme, il a %d ans", age);
       
		 // COMMENT LIRE DANS UN FICHIER AVEC LE MODE LECTURE 
		while(!feof(f)){
        caractere = fgetc(f); // On lit le caractère
         printf("%c", caractere); // On l'affiche
		}
	    
        fclose(f);
    }
      
     



    return 0;
}
