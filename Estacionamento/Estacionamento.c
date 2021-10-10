#include <stdio.h>
#include <stdlib.h>

//Estacionamento Versão refatorada com ponteiros

struct car
{
    int id;
    int ano;
    char model[20];
    char placa[7];
    char marca[20];

} cars[15];
int i = 0, choose = 0, *pointerCar;

void carsInput();
void carsShow();

int main()
{

    pointerCar = &cars[0];
    carsInput();
    carsShow();
}

void carsShow()
{
    for (i = 0; i < choose; i++)
    {
        printf("\nCar id : %d\nmodel: %s\n\n,a,b", cars[i].id, cars[i].model);
    }
}

void carsInput()
{
    do
    {
        choose = 0;
        printf("\n\nEntry the quantity of cars that you want to add: ");
        setbuf(stdin, NULL);
        scanf("%d", &choose);
        if (choose > 10)
        {
            printf("\n\n---> the limit is 10 cars! <---\n\n");
        }
    } while (choose <= 0 || choose > 10);

    for (i = 0; i < choose; i++)
    {
        printf("\n\ntype the car model: \n");
        setbuf(stdin, NULL);
        scanf("%s", &cars[i].model);
        cars[i].id = i + 1;
    }
}