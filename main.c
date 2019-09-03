#include <stdio.h>
#include <stdlib.h>
#include <\tp_laboratorio_1\funciones.h>

int main()
{
    int menu;
    float op1=0,op2=0;
    float suma,resta,multiplicacion,factorial1,factorial2;
    float division;



    do{

    printf("\n1- INGRESAR PRIMER NUMERO \n2- INGRESAR SEGUNDO NUMERO \n3- CALCULAR TODAS LAS OPERACIONES \n4- MOSTRAR TODOS TODOS LOS RESULTADOS \n5- CERRAR PROGRAMA\n");
    printf("Opcion: ");
    scanf("%i",&menu);
    system("cls");


    switch(menu)
{
    case 1: printf("Ingrese OP1: ");
            fflush(stdin);
            scanf("%f",&op1);
            break;
    case 2: printf("Ingrese OP2: ");
            fflush(stdin);
            scanf("%f",&op2);
            break;
    case 3:
            suma = sumar(op1,op2);

            resta = restar(op1,op2);

            multiplicacion = multiplicar(op1,op2);

            division = dividir(op1,op2);

            factorial1   =   factorizar(op1);
            factorial2  =    factorizar(op2);

            printf("\n\n***SE REALIZARON TODAS LAS OPERACIONES.***\n\n");

            break;
    case 4:         printf("\n\nLa suma es:%.0f ",suma);

                    printf("\n\nLa resta es:%.0f ",resta);

                    printf("\n\nLa multiplicacion es:%.0f ",multiplicacion);

                    printf("\n\nLas factoriales son: %.0f y %.0f ",factorial1,factorial2);

                    if (op2==0){
                    printf("\n\nNo se puede dividir por cero.");
                    }
                    else {
                    printf("\n\nLa division es :%.2f \n",division);
                    }


}
}while(menu!=5);


}//main
