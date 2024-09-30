#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// icinden _sleep(zaman);
// function'nini aldim bu icine girdigin degerde milisaniye cinsi ama programi bekletiyor.
void universalSleep();
int userWinning(int, int);
int userLosing(int, int);
int draw(int, int);

int menu();
// 4 = tas .
// 5 = kagit
// 6 = makas
int main() {
    int option = 1, random, userScore = 0, computerScore = 0, tas = 0, kagit = 0, makas = 0;
    char userName[40];

    printf("\t\t\t\t\tTas Kagit Makas\n\n");
    printf("kullanici adi girin:");

    scanf("%s", &userName);

    while (option != 0) {

        srand(time(NULL));

        option = menu();

        random = rand() % 3 + 4;
        // + 4 yaparak 3 7 arasindaki tum degerleri alıyor 4 , 5 , 6 diyip (tek tek deneyerek bunu buldum.)
        if (random == 4) {
            tas = 4;
        } else if (random == 5) {
            kagit = 5;
        } else {
            makas = 6;
        }
        switch (option) {
            case 1:
                // tas secimi
                if (random == kagit) {
                    printf("\n");
                    printf("Bilgisayarin Secimi: Kagit\n");
                    userScore -= 1;
                    computerScore += 1;
                    userLosing(userScore, computerScore);
                    continue;
                }
                else if (random == makas) {
                    printf("\n");
                    printf("Bilgisayarin secimi: Makas\n");
                    userScore += 1;
                    computerScore -= 1;
                    userWinning(userScore, computerScore);
                    continue;
                }
                else (random == tas); {
                    printf("\n");
                    printf("Bilgisayarin secimi: Tas\n");
                    draw(userScore, computerScore);
                    continue;
                }
            case 2:
                // kagit secimi
                if (random == tas) {
                    printf("\nBilgisayarin secimi: Tas\n");
                    userScore += 1;
                    computerScore -= 1;
                    userWinning(userScore, computerScore);
                    continue;
                }
                else if (random == kagit) {
                    printf("\nBilgisayarin secimi: Kagit\n");
                    draw(userScore, computerScore);
                    continue;
                }
                else (random == makas); {
                    printf("\nBilgisayarin secimi: Makas\n");
                    userScore -= 1;
                    computerScore += 1;
                    userLosing(userScore, computerScore);
                    continue;
                }
            case 3:
                // makas secimi
                if (random == tas) {
                    printf("\nBilgisayarin secimi: Tas\n");
                    userScore -= 1;
                    computerScore += 1;
                    userLosing(userScore, computerScore);
                    continue;
                }
                else if (random == kagit) {
                    printf("\nBilgisayarin secimi: Kagit\n");
                    userScore += 1;
                    computerScore -= 1;
                    userWinning(userScore, computerScore);
                    continue;
                }
                else (random == makas); {
                    printf("\nBilgisayarin secimi: Makas\n");
                    draw(userScore, computerScore);
                    continue;
                }
            case 0:
                printf("Oyun sonu skoru:\n\n");
                universalSleep();
                printf("%s'in Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userName, userScore, computerScore);
                universalSleep();
                if (computerScore > userScore) {
                    printf("Bilgisayar kazandi.\n\n");
                } else if (userScore > computerScore) {
                    printf("%s kazandi.\n\n", userName);
                } else {
                    printf("Berabere.\n\n");
                }
                break;
            default:
                    printf("\nHatali deger!!\n");
                    universalSleep();
                    option = menu();
                    // bu seferde case 0 algiliyor.
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
int userWinning(userScore, computerScore) {
     printf("Tebrikler, kazandiniz\n");
    universalSleep();
    printf("Skor hesaplaniyor...\n\n");
    universalSleep();
    printf("Kulanicinin Skoru:%d\t\t\tBilgisayarin skoru:%d\n\n", userScore, computerScore);
    universalSleep();
    
    return userScore, computerScore;
}
int userLosing(userScore, computerScore) {
    printf("Kaybettiniz\n\n");
    universalSleep();
    printf("Skor hesaplaniyor...\n\n");
    universalSleep();
    printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
    universalSleep();
    
    return userScore, computerScore;
}
int draw(userScore, computerScore) {
    printf("Berabere\n\n");
    universalSleep();
    printf("Skor hesaplaniyor...\n\n");
    universalSleep();
    printf("Kulanicinin Skoru:%d\t\t\t Bilgisayarin skoru:%d\n\n", userScore, computerScore);
    universalSleep();

    return userScore, computerScore;
}
void universalSleep() {
    _sleep(1500);
}