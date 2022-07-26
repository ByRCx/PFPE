#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    
    
    printf("Proyecto Final de Programación estructurada\n");
    
    int z = 0;
    int y;
    int pesos;
    float pesosf;
    char ch;
    

    while (z != 3){
        
    printf("\nSeleccione El programa a correr \n");
    printf("1- Dispensador de billetes \n");
    printf("2- Juego de basketball\n");
    printf("3- Salir \n\n");
    scanf("%d", &z);
    switch(z)
    {
    case 1:
    system("clear");
    printf("Dispensador de billetes \n");
    printf("inserte la cantidad a retirar del cajero: \n"), scanf("%f", &pesosf);
    printf("[round(%f)] Billete/s de 2000 \n", pesosf / 2000, round(pesosf));
    pesosf = round(fmod(pesosf, 2000));
    printf("[%f] Billete/s de 1000 \n", pesosf / 1000);
    pesosf = fmod(pesosf, 1000);
    printf("[%f] Billete/s de 500 \n", pesosf / 500);
    pesosf = fmod(pesosf, 500);
    printf("[%f] Billete/s de 200 \n", pesosf / 200);
    pesosf = fmod(pesosf, 200);
    printf("[%f] Billete/s de 100 \n", pesosf / 100);
    pesosf = fmod(pesosf, 100);
    printf("[%f] Billete/s de 50 \n", pesosf / 50);
    pesosf = fmod(pesosf, 50);
    printf("[%f] Modena/s de 25 \n", pesosf / 25);
    pesosf = fmod(pesosf, 25);
    printf("[%f] Modena/s de 10 \n", pesosf / 10);
    pesosf = fmod(pesosf, 10);
    printf("[%f] Modena/s de 5 \n", pesosf / 5);
    pesosf = fmod(pesosf, 5);
    printf("[%f] Modena/s de 1 \n", pesosf / 1);
    pesosf = fmod(pesosf, 1);
    printf("[%f] Modena/s de 25 centavos\n", pesosf / 0.25);
    pesosf = fmod(pesosf, 0.25);
    printf("[%f] Modena/s de 10 centavos\n", pesosf / 0.10);
    pesosf = fmod(pesosf, 0.10);
    printf("[%f] Modena/s de 5 centavos\n", pesosf / 0.05);
    pesosf = fmod(pesosf, 0.05); 
    printf("[%f] chicle/s como no hay de 1 centavo/s \n", pesosf / 0.01);
    pesosf = fmod(pesosf, 0.01);
    printf("\n Presione cualquier boton para continuar\n"), scanf("%c, &ch");
    break;
    
    case 2:
    system("clear");
    printf("Juego de basketball\n");
    printf("Nombre el primer equipo\n");
    char equipo1[20];
    scanf("%s", equipo1);
    printf("Nombre el segundo equipo\n");
    char equipo2[20];
    scanf("%s", equipo2);
    break;
    
    case 3:
    break;
    
    default:
    system("clear");
    printf("Esta opcion no es valida pulse cualquier tecla para continuar");
    //scanf();
    break;
    }
    }
    system("clear");
    printf("\nLa ejecucion de este programa culmino \n");
    getch();
    
}
