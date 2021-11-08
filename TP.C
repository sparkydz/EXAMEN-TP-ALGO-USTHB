#include <stdio.h>
#include <math.h>
/*
  ________   __          __  __ ______ _   _            _      _____  ____
 |  ____\ \ / /    /\   |  \/  |  ____| \ | |     /\   | |    / ____|/ __ \
 | |__   \ V /    /  \  | \  / | |__  |  \| |    /  \  | |   | |  __| |  | |
 |  __|   > <    / /\ \ | |\/| |  __| | . ` |   / /\ \ | |   | | |_ | |  | |
 | |____ / . \  / ____ \| |  | | |____| |\  |  / ____ \| |___| |__| | |__| |
 |______/_/ \_\/_/    \_\_|  |_|______|_| \_| /_/    \_\______\_____|\____/
 [AMIRA BOULKABOUL || SECTION:X || GROUPE:X]
*/
int main() {
  char choix;
  int i,j,n,Number,Somme,fact;
  int nombre=1;
  int x,y,s=0;
  int A,B,C;
  int r;
  int cpt=0;
  double D; /* Discriminant */
printf("\t\t\t[BIENVENUE DANS CE PROGRAMME]...\t\t\t\n");
printf("1-Calcul des solutions réelles d'une équation du second degré.\n");
printf("2-Afficher les nombres parfaits.\n");
printf("3-EXO 3 LA SOMME DES FACTORIELS.\n");
printf("4-calculer la somme des n nombres premiers.\n");
printf("Veuillez choisir une fonctionnalité (1-4):\n");
scanf("%c", &choix);
/**/
switch(choix)
    {
        case '1': /*exerice 1*/

            printf("Calcul des solutions réelles d'une équation du second \n");
            printf("degré de la forme   ax^2 + bx + c = 0 \n\n");
            printf("Introduisez les valeurs pour a, b, et c : ");
            scanf("%i %i %i", &A, &B, &C);

           /* Calcul du discriminant b^2-4ac */
          D = pow(B,2) - 4.0*A*C;

         /* Distinction des différents cas */
          if (A==0 && B==0 && C==0) /* 0x = 0 */
 	      	printf("Tout réel est une solution de cette équation.\n");
         else if (A==0 && B==0)  /* Contradiction: c # 0 et c = 0 */
 	      	printf("Cette équation ne possède pas de solutions.\n");
         else if (A==0) /* bx + c = 0 */
          {
         printf("La solution de cette équation du premier degré est :\n");
         printf(" x = %.4f\n", (double)C/B);
         }
         else if (D<0)  /* b^2-4ac < 0 */
         printf("Cette équation n'a pas de solutions réelles.\n");
         else if (D==0) /* b^2-4ac = 0 */
         {
         printf("Cette équation a une seule solution réelle :\n");
         printf(" x =  %.4f\n", (double)-B/(2*A));
         }
         else /* b^2-4ac > 0 */
         {
         printf("Les solutions réelles de cette équation sont :\n");
         printf(" x1 = %.4f\n", (-B+sqrt(D))/(2*A));
         printf(" x2 = %.4f\n", (-B-sqrt(D))/(2*A));
         }
            break;

        case '2': /* exercice 2 */
         for(Number=1;Number<500;Number++)
          {
          Somme=0;
           for(i=1;i<Number;i++)
            {
             if(Number % i == 0)
               Somme = Somme + i ;
            }
             if(Somme == Number)
               printf("\n %d is a Perfect Number bcz It's sum %d", Number,Somme);


         }
          break;

        case '3': /* exercice 3 */
          // la somme des factorielles /
          Somme=0;
          fact=1;
          printf("Veuillez entrer une valeur de n :");
          scanf("%d", &n);
          for(i=1;i<=n;i++)
           {
            fact=1;
             for(j=1;j<=i;j++) /* pour i = 1, ..., n */
            {
            fact=fact * j;
            }
            Somme=Somme+fact;
           }
           printf("la somme de 1!+..+%d!=%d",n,Somme);
            break;

        case '4': /* exercice 4 */
         Somme=0;
         printf("Veuillez entrer une valeur de n :");
         scanf("%d", &n);
         while(nombre <n)
         { //tant que nombre < n alors
         r=0; //pour compter le nombre de diviseurs
         nombre++;
         for(i=1 ; i<=nombre ; i++)
          {
          if ((nombre%i)==0)
             r++;
          }
          if(r==2)//Le nombre premier se divise sur 1 et sur lui meme
            {
            Somme=Somme+nombre;
            }
         }
         printf("la somme des %d nombres premiers est : %d",n,Somme);

            break;

        // operateur invalide!! /
        default:
            printf("Error! operator is not correct");
    }



  return 0;
}