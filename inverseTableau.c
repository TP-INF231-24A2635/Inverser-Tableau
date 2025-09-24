#include <stdio.h>
#include <stdbool.h>

void inverserTableau(float tableau[], unsigned int taille)
{
    float *debut = tableau;
    float *fin = tableau + (taille-1);

    for(int i=0; i < taille/2; i++)
    {
        float tampon = *debut;
        *debut = *fin;
        *fin = tampon;
        fin--;
        debut++;
    }
}

void afficherTableau(float tableau[], unsigned int taille)
{
    printf("(");
    for(int i = 0; i<taille; i++)
        printf(" %f", tableau[i]);
    printf(")\n");
}






int main()

{

    float tableauA[5]={1, 2, 3, 4, 5};
    printf("tableau initial\n");
    afficherTableau(tableauA, 5);

    inverserTableau(tableauA, 5);
    printf("Inverse de tableau:\n");
    afficherTableau(tableauA, 5);

    return 0;
}