#include<stdio.h>



int main(){

int andar_i = 20;
int andar_x = 12;

printf("Andares do Hotel, sem o 13° andar e utilizando a estrutura DO WHILE: ");


    do {

        printf("\n%d° andar", andar_i);

        andar_i--;

    } while ( andar_i > 13);

    do {

        printf("\n%d° andar", andar_x);

        andar_x--;

    } while ( andar_x < 12 && andar_x > 0);


    return 0;
}