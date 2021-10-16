#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables a usar...
    float a, b, resultado;
    int op = 0;
    //Inicializar variables...
    a = 0.0f;
    b = 0.0f;
    resultado = 0.0f;

    printf("===========\n");
    printf("Calculadora\n");
    printf("===========\n\n");

    //Estructura de control para realizar una seleccion de opciones y sus operaciones
    do{
        printf("Selecciona una opcion...\n");
        printf("[1] Suma \n");
        printf("[2] Resta \n");
        printf("[3] Multiplicacion \n");
        printf("[4] Division \n");
        printf("[5] Salir \n");

        scanf("%i", &op);

        switch(op){
        case 1:
            printf("Ingrese el primer valor...\n");
            scanf("%f", &a);
            printf("Ingrese el segundo valor...\n");
            scanf("%f", &b);
            resultado = a + b;
            printf("El resultado de la suma es %f\n", resultado);
            break;
        case 2:
            printf("Ingrese el primer valor...\n");
            scanf("%f", &a);
            printf("Ingrese el segundo valor...\n");
            scanf("%f", &b);
            resultado = a - b;
            printf("El resultado de la resta es %f\n", resultado);
            break;
        case 3:
            printf("Ingrese el primer valor...\n");
            scanf("%f", &a);
            printf("Ingrese el segundo valor...\n");
            scanf("%f", &b);
            resultado = a * b;
            printf("El resultado de la multplicacion es %f\n", resultado);
            break;
        case 4:
            printf("Ingrese el dividendo...\n");
            scanf("%f", &a);
            printf("Ingrese el divisor...\n");
            scanf("%f", &b);
            resultado = a / b;
            printf("El resultado de la division es %f\n", resultado);
            break;
        case 5:
        	printf("Salir...");
        	break;
        default:
            printf("Opcion no valida, selecciona otra opcion...");
            break;
        }
    }while(op != 5);
}
