#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TP2.h"
#define TRUE 1
#define FALSE 0


static int generarNextId()
{
    static int id=-1;
    id++;
    return id;

}

int initEmployees(Employee* list, int len)//void init(EPersona lista[], int len)
{
    int i;
    int retorno=0;

    if(list==NULL)
    {
       if(len<=0)
       {
           retorno = -1;
       }
    }
    for(i=0; i<len; i++)
    {
        list[i].isEmpty = TRUE;
    }

    return retorno;
}

int getFreeSpace(Employee list[], int len)
{
    int i;
    int retorno = -1;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty == 1)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}


int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{
    int retorno= -1;
    int found;

    found = getFreeSpace(list,len);

    if(found != -1 && list !=NULL)
    {
        retorno=0;//verlo
        Employee employee;
        employee.salary=salary;
        employee.sector=sector;
        strcpy(employee.name,name);
        strcpy(employee.lastName,lastName);
        employee.isEmpty=generarNextId();//ID
        id=generarNextId();
        employee.isEmpty=0;
        list[found]=employee;
    }
    else
    {
        printf("There is not space");
    }
    return retorno;
}


int getById(Empoyee*list,int len,int id)
{
    int retorno = -1, i;
    if(list!=NULL&&len>0)
    {
        for(i=0; i<len;i++)
        {
            if(list[i].id==)
        }
    }
}

