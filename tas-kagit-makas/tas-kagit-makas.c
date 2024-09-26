#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// icinden _sleep(zaman);
// funciton'nini aldim bu icine girdigin degerde milisaniye cinsi ama programi bekletiyor.

int menu();

// 1 = tas tas kagidi kaybeder makasi yener.
// 2 = kagit
// 3 = makas

int main() {
    int option = 1, random;

    printf("\t\t\t\t\tTas Kagit Makas\n\n");

    while (option != 0) {

    srand(time(NULL));

    option = menu();

    random = rand() % 3 + 1;

    switch (option) {
        case 1:
            // tas secimi
            if (random == 2) {
                printf("\n");
                printf("Bilgisayarin Secimi: Kagit\n");
                printf("Kaybettiniz\n\n");
                _sleep(550);
                continue;
            }
            else if (random == 3) {
                printf("\n");
                printf("Bilgisayarin secimi: Makas\n");
                printf("Tebrikler, kazandiniz\n");
                _sleep(550);
                continue;
            }
            else (random == 1); {
                printf("\n");
                printf("Bilgisayarin secimi: Tas\n");
                printf("Berabere\n\n");
                _sleep(550);
                continue;
            }
        case 2:
            // kagit secimi
            if (random == 1) {
                printf("\n");
                printf("Bilgisayarin secimi: Tas\n");
                printf("Tebrikler, kazandiniz\n\n");
                _sleep(550);
                continue;
            }
            else if (random == 2) {
                printf("\n");
                printf("Bilgisayarin secimi: Kagit\n");
                printf("Berabere\n\n");
                _sleep(550);
                continue;
            }
            else (random == 3); {
                printf("\n");
                printf("Bilgisayarin secimi: Makas\n");
                printf("Kaybettiniz\n\n");
                _sleep(550);
                continue;
            }
        case 3:
            // makas secimi
            if (random == 1) {
                printf("\n");
                printf("Bilgisayarin secimi: Tas\n");
                printf("Kaybettiniz\n\n");
                _sleep(550);
                continue;
            }
            else if (random == 2) {
                printf("\n");
                printf("Bilgisayarin secimi: Kagit\n");
                printf("Tebrikler, kazandiniz\n\n");
                _sleep(550);
                continue;
            }
            else (random == 3); {
                printf("\n");
                printf("Bilgisayarin secimi: Makas\n");
                printf("Berabere\n\n");
                _sleep(550);
                continue;
            }
        case 0:
            break;
        default:
            printf("\nHatali deger!!\n");
            continue;
    }
    }
    system("pause");
    return 0;
}
int menu() {
    int choice;
    printf("\n");
    printf("1 - Tas\n");
    printf("2 - Kagit\n");
    printf("3 - Makas\n");
    printf("0 - Cikis\n\n");

    printf("Seciminizi yapin:");
    scanf("%d", &choice);
    
    return choice;
}