#include<stdio.h>



int main(){

int andar_i = 20;
int andar_x = 12;

printf("Andares do Hotel, sem o 13° andar e utilizando a estrutura WHILE: ");


    while (andar_i <= 20 && andar_i > 13)
    {
        printf("\n%d° andar", andar_i);
        andar_i--;
    }
    

     while (andar_x < 13 && andar_x > 0)
    {
        printf("\n%d° andar", andar_x);
        andar_x--;
    }



    


    return 0;
}