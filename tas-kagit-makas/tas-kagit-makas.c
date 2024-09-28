#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// icinden _sleep(zaman);
// funciton'nini aldim bu icine girdigin degerde milisaniye cinsi ama programi bekletiyor.

int menu();
// yarin kazanma ve kaybetmeyi void'e al cok kotu duruyor suan.

// 1 = tas tas kagidi kaybeder makasi yener.
// 2 = kagit
// 3 = makas

int main() {
    int option = 1, random, userScore = 0, computerScore = 0;

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
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                userScore -= 1;
                computerScore += 1;
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
            else if (random == 3) {
                printf("\n");
                printf("Bilgisayarin secimi: Makas\n");
                printf("Tebrikler, kazandiniz\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                userScore += 1;
                computerScore -= 1;
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
            else (random == 1); {
                printf("\n");
                printf("Bilgisayarin secimi: Tas\n");
                printf("Berabere\n\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
        case 2:
            // kagit secimi
            if (random == 1) {
                printf("\n");
                printf("Bilgisayarin secimi: Tas\n");
                printf("Tebrikler, kazandiniz\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                userScore += 1;
                computerScore -= 1;
                printf("Kulanicinin Skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
            else if (random == 2) {
                printf("\n");
                printf("Bilgisayarin secimi: Kagit\n");
                printf("Berabere\n\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
            else (random == 3); {
                printf("\n");
                printf("Bilgisayarin secimi: Makas\n");
                printf("Kaybettiniz\n\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                userScore -= 1;
                computerScore += 1;
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
        case 3:
            // makas secimi
            if (random == 1) {
                printf("\n");
                printf("Bilgisayarin secimi: Tas\n");
                printf("Kaybettiniz\n\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                userScore -= 1;
                computerScore += 1;
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
            else if (random == 2) {
                printf("\n");
                printf("Bilgisayarin secimi: Kagit\n");
                printf("Tebrikler, kazandiniz\n\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                userScore += 1;
                computerScore -= 1;
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000); 
                continue;
            }
            else (random == 3); {
                printf("\n");
                printf("Bilgisayarin secimi: Makas\n");
                printf("Berabere\n\n");
                _sleep(1000);
                printf("Skor hesaplaniyor...\n\n");
                _sleep(1000);
                printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
                _sleep(2000);
                continue;
            }
        case 0:
            printf("Oyun sonu skoru:\n\n");
            _sleep(1000);
            printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
            _sleep(1000);
            if (computerScore > userScore) {
                printf("Bilgisayar kazandi.\n\n");
            } else {
                printf("Kullanici kazandi.\n\n");
            }
            break;
        default:
            if (option > 3 || option < 1) {
                printf("\nHatali deger!!\n");
                _sleep(1000);
                continue;
            }
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