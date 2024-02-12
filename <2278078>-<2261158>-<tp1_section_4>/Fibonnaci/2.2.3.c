// Autheurs : Abass, Ely Cheikh - Brizini, Mahfoud - Chekkaf, Mehdi
// Modifié par : Tristan Cholette 2261158 Hossam Moustafa 2278078
// Date : 2024-02-05
#include <stdio.h>

int fibonacci(int n) {
    int x = 0;
    int y = 1;
    int temp = 0;
    // Cette fonction devrait retourner le nième terme de la suite
    while (n > 0) {
        x += y;
        temp = x;
        x = y;
        y = temp;
        n--;
    }
    return x;
}

int main() {
    // Affichage des 10 premiers termes de la suite de Fibonacci
    for (int i = 0; i < 10; i ++) printf("Fibonacci %d = %d\n", i, fibonacci(i));
    return 1;
}