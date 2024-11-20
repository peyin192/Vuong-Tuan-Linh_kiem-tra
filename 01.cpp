#include <stdio.h>
#include <ctype.h>
#include <string.h>

void chuanhoaten(char *name) {
    int len = strlen(name);
    int i = 0;

    while (name[i] == ' ') i++;
    int start = i;

    i = len - 1;
    while (name[i] == ' ') i--;
    int end = i;

    char temp[end - start + 2];
    int j = 0;
    for (i = start; i <= end; i++) {
        temp[j++] = name[i];
    }
    temp[j] = '\0';

    int n = strlen(temp);
    for (i = 0; i < n; i++) {
        if (i == 0 || temp[i-1] == ' ') {
            temp[i] = toupper(temp[i]);
        } else {
            temp[i] = tolower(temp[i]);
        }
    }

    printf("%s\n", temp);
}

int main() {
    int t;
    scanf("%d\n", &t);

    for (int i = 0; i < t; i++) {
        char name[81];
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        chuanhoaten(name);
        
        chuanhoaten(name);
        printf("ket qua: %s\n", str);
    }

    return 0;
}
