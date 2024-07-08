#include<stdio.h>



int main(){

int andar_i = 20;


printf("Andares do Hotel, sem o 13° andar e utilizando a estrutura FOR: ");


    for (andar_i = 20; andar_i > 0; andar_i--)
    {
        if (andar_i == 13){

            continue;

        }
        
        printf("\n%d° andar", andar_i);
    }


    


    return 0;
}