#include <stdio.h>

int main(){

int S;

printf("Podaj liczbe elementow: ");

scanf("%d", &S);

int tab[S];

int g;

for(g=0; g<S; g++) {

    scanf("%d", &tab[g]);

}

int i, j;
int temp;

for(i=0; i<S-1; i++) {

    for(j=0; j<S-1; j++) {

        if(tab[j] > tab[j+1]) {

            temp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = temp;

        }

    }

}

int k;

for(k=0; k<S; k++) {

    printf("%d ", tab[k]);
}

}
