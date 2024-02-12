// Autheurs : Abass, Ely Cheikh - Brizini, Mahfoud - Chekkaf, Mehdi
// Modifié par : Tristan Cholette 2261158 Hossam Moustafa 2278078
// Date : 2024-02-05
#include <stdio.h>

int calculerNiemeTerme(int a0, int r, int nb) {
    int rTemp = 1;
    while (nb > 1) {
        nb--;
        rTemp = rTemp * r;
    }

    return a0 * rTemp;

    // Cette fonction devrait retourner le nième terme de la série
}

int main() {
    int a0; 
    int r;  
    int nb;  

    printf("Entrez le premier terme (a0): ");
    if (scanf("%d", &a0) != 1) return -1;
    printf("Entrez la raison (r): ");
    if (scanf("%d", &r) != 1) return -1;
    printf("Entrez le nombre de termes (N): ");
    if (scanf("%d", &nb) != 1) return -1;

    int sum = calculerNiemeTerme(a0, r, nb);
    printf("La nième terme de la série géométrique est: %d\n", sum);

    return 0;
}
