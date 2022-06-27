// Função : Calcular quantos litros de combustível serão gastos em uma viagem de carro que faz 12 km/l.
// Autor : IseAlves  

#include<stdio.h>
#include<stdlib.h>
#define CONSUMO 18 

main()
{
float litros_comb, tempo, vel_media, dist;
printf("\n\t Digite o tempo utilizado na viagem: ");
scanf("%f",&tempo);
printf("\n\t Digite a velocidade media durante a viagem: ");
scanf("%f",&vel_media);
printf("\n\n");
      
dist = vel_media * tempo;
litros_comb = dist/CONSUMO;
         
printf("\n\t A distancia percorrida: %.0f Km\n", dist);
printf("\n\t A quantidade de litros de combustivel gastos: %.2f\n", litros_comb);
printf("\n\t O tempo utilizado na viagem: %.0f\n", tempo);
printf("\n\t A velocidade media: %.0f Km/h\n", vel_media);
system("pause");        
}
