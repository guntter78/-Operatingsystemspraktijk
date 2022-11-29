#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nummer;

    do {

    printf("Welkom bij de menu van Rudy Houkema\n");
    printf("Er zijn 3 keuzes:\n");
    printf("1. Stop\n");
    printf("2. Run de eerste opdracht van C van mij\n");
    printf("3. Run de tweede opdracht van week 2\n");
    printf("Kies een nummer:");
    scanf("%d", &nummer);

        if (nummer == 1)
        {
            printf("%d is het gekozen nummer\n", nummer);
            break;

        } 

        if (nummer == 2)
        {
            printf("\n");
            printf("\n");
            printf("%d is het gekozen nummer\n", nummer);
            printf("Uitkomst:\n");
            printf("\n");
            printf("\n");
            system("opdracht1-week1.exe");
            break;

        }

        if (nummer == 3)
        {
            printf("\n");
            printf("\n");
            printf("%d is het gekozen nummer\n", nummer);
            printf("Uitkomst:\n");
            printf("\n");
            printf("\n");
            system("opdracht2-week2.exe");
            break;
        }

        else {
        printf("%d helaas dit werkt niet, het programma zal nu sluiten.\n", nummer);
        }

    }while(nummer !=4);

}