// Autheurs : Abass, Ely Cheikh - Brizini, Mahfoud - Chekkaf, Mehdi
// Modifié par : Tristan Cholette 2261158 Hossam Moustafa 2278078
// Date : 2024-02-09

#include <stdio.h>


int syracuse(int u0, int nb) {
    for (int i = 0; i < nb; i++)
    {
    
        int temp = u0;
        temp = temp/2;
        temp = temp*2;
        temp = temp - u0;
        if (temp == 0)
        {
            u0 = (u0/2);
        } else
        {
            u0 = (3*u0 + 1);
        }
    }
    return u0;
}

int main() {
    int nb = 3; // Nombre de termes
    int u0 = 15; // Terme initial
    printf("Syracuse %d = %d\n", u0, syracuse(u0, nb));
    return 0;
}