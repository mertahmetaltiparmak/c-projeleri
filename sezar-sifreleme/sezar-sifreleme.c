#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
// aslinda basit bir kaydirma islemi yaparak sifreliyor normal deger olarak 3 almasi lazim ama disaridan girilen turlusunu yaptik.
void menu() {
    printf("\n 1 - Sifrele\n");
    printf(" 2 - Sifrelenmis metni oku\n");
    printf("-1 - Cikis\n");
    _sleep(1000);
    printf("Seciminizi yapin:");
}

void sezarSifreleme(char *ptr, int key) {
    while (*ptr != '\0') {
        *ptr = *ptr + key;
        ptr++;
    }
}
void sezarSifreCoz(char *ptr, int key) {
    while (*ptr != '\0') {
        *ptr = *ptr - key;
        ptr++;
    }
}
int main() {
    char text[100];
    int key = 3, choice = 0;
    while (choice != -1) {
        menu();
        scanf("%d", &choice);
        // isdigit sayi degilse 0 donduruyor eger char veya string girersek bunu calistiyor.
        if (isdigit(choice) == 0) {
            printf("Hata!\nCikis yapiliyor...\n");
            _sleep(1500);
            break;
        }
    switch (choice) {
        case 1:
            printf("Sifrelenecek metini giriniz: ");
            // bosluktan sonraki metinleri almak icin bunu kullanabiliriz. getchar yerine   
            scanf(" %[^\n]s", text);
            printf("Key: ");
            scanf("%d", &key);

            printf("Metin sifreleniyor...");
            sezarSifreleme(text, key);
            _sleep(1500);
            printf("\nSifrelenmis metin: %s \n", text);
            continue;
        case 2:
            printf("Sifresini cozmek istediginiz metni girin: ");
            scanf(" %[^\n]s", text);
            printf("Metnin sifresi cozuluyor...");
            _sleep(1500);
            sezarSifreCoz(text, key);
            printf("\nCozulmus metin: %s \n",text);
            continue;
        case 0:
            break;
    }    
}
    system("pause");
    return 0;
}