#include <stdio.h>
#include <stdlib.h>

int phoneAdd() {
    Record newRecord;
    FILE* fptr;
    fptr = fopen("rehber.txt", "a");
    if (fptr == NULL) {
        return -1;
    }
    printf("\n\n");

    printf("Isim giriniz:");
    scanf("%s", newRecord.name);
    
    printf("\nSoyadi giriniz(max 20 karakter):");
    scanf("%s", newRecord.lastName);

    printf("\nBasinda sifir ile telefon numarasini giriniz(max 11 karakter):");
    scanf("%s", newRecord.phone);
    if (strlen(newRecord.phone) != 11) {
        printf("\nGecersiz uzunluk!\n");
        return 1;
    } else {   
    
    fprintf(fptr, "\n%s %s %s", newRecord.name, newRecord.lastName, newRecord.phone);
    fclose(fptr);

    return 0;
    }
}