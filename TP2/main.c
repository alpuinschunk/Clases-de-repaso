#include <stdio.h>
#include <stdlib.h>
#include "TP2.h"
#define CANT 1

int main()
{
    int id;
    int opcion=0;
    char name[51];
    char lastName[51];
    float salary;
    int sector;


    Employee employee[CANT];
    initEmployees(employee,CANT);

    do
    {
        system("cls");
        printf("--MENU--\n\n");
        printf("1- ALTAS\n");
        printf("2- BAJAS\n");
        printf("3- MODIFICACIONES\n");
        printf("4- INFORMAR\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese nombre ");
                fflush(stdin);
                gets(name);

                printf("Ingrese apellido ");
                fflush(stdin);
                gets(lastName);
                printf("Ingrese salario ");
                scanf("%f",&salary);
                printf("Ingrese sector ");
                scanf("%d",&sector);

                addEmployee(employee,CANT,name, lastName, salary, sector);
                for(i=0;i<CANT)
                printf("ID: %d",id);
                system("pause");
                break;

            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                printf("Data collection completed");
                break;
            default:
                printf("Wrong option");
        }
    }while(opcion!=5);

    return 0;
}
