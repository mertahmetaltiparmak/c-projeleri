int phoneList() {
    Record currentRecord;
    FILE* fptr;
    fptr = fopen("rehber.txt", "r");
    if (fptr == NULL) {
        return -1;
    } 
    printf("\n\nIsim\t\t\tSoyisim\t\t\t\tTelefon Numarasi\n");
    printf("----\t\t\t---------\t\t\t ---------------\n\n");

    while (!feof(fptr)) {
        fscanf(fptr, "%s%s%s", currentRecord.name, currentRecord.lastName, currentRecord.phone);
        printf("%s\t\t\t",currentRecord.name);
        printf("%s\t\t\t",currentRecord.lastName);
        printf("   %s\t\t\t",currentRecord.phone);
        printf("\n\n");
    }
    fclose(fptr);

    return 0;
}