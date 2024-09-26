int phoneSearch(char* ptrSearch) {
    Record currentRecord;
    int i = 0;
    FILE* fptr;
    fptr = fopen("rehber.txt", "r");
    if (fptr == NULL) {
        return -1;
    }
    while (!feof(fptr)) {
        fscanf(fptr, "%s%s%s", currentRecord.name, currentRecord.lastName, currentRecord.phone);
        if (! strcmp(ptrSearch,currentRecord.name)) {
            // 0 degeri dondurdugu icin ! koyduk
        printf("%s\t\t\t",currentRecord.name);
        printf("%s\t\t\t",currentRecord.lastName);
        printf("   %s\t\t\t",currentRecord.phone);
        i++;
        }
    }
    fclose(fptr);

    return i;
}
