#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char a[] = "mert12345";
    char b[] = "abcdefghijklmnoprstuvyz123456789!+%&?";
    int i= 0;
    int j = 0;
    for (; i < strlen(a); i++) {
        for (; j < strlen(b); j++) {
            if (a[i] == b[j]) {
                printf("%c", b[j]);
                break;
            }
        }
        j = 0;
    }

    return 0;
}