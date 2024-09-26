#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"
#include "menu.h"
#include "phoneAdd.h"
#include "phoneList.h"
#include "phoneSearch.h"

int main() {
    int choice = 0;
    char searchName[20];
    int searchResult = 0;

    menu();
    
    do {
        printf("\nSeciminizi girin:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (phoneAdd() == 0) {
                    printf("\nTelefon numarasi basarili bir sekilde eklendi\n");
                } else {
                    printf("\nTelefon numarasi eklenirken hata olustu\n");
                }
                break;
            case 2:
                if (phoneList() == 0) {
                    printf("\n\nTelefon numarasi basarili bir sekilde Listelendi.\n");
                } else {
                    printf("\nTelefon numarasi listelenirken hata olustu\n");
                }
                break;
            case 3:
                printf("\nAranacak ismi giriniz:");
                scanf("%s", &searchName);
                searchResult = phoneSearch(searchName);

                if (searchResult == 0) {
                    printf("\nAranilan Kayit bulunamadi.\n");
                } else {
                    printf("\n Toplam %d kayit bulundu\n", searchResult);
                }
                break;
            case 4:
                printf("\nCikis yapiliyor...\n\n");
                break;
            default:
                printf("\n\n1 - 4 arasinda bir deger giriniz!!\n\n");
        }

    } while (choice != 4);

    system("pause");
    return 0;
}
// edge caseler secim ekraninda harfde bugga giriyor.