#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int hour, minute, second;
    hour = minute = second = 0;
    while (1) {
        system("cls");
        // ekrani temizlemek icin clear screen acilimi
        printf("%02d : %02d : %02d", hour, minute, second);
        fflush(stdout);
        // akis bellegini temizlemek icin
        // standart cikis ismi
        second++;
        if (second == 60) {
            minute += 1;
            second = 0;
        }
        if (minute == 60) {
            hour += 1;
            minute = 0;
        }
        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 0; 
        }
        _sleep(1000);
        // milisaniye cinsinden aldigi icin 1000 girdik.
    }
    return 0;
}