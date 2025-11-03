#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <uchar.h>

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "");
    wchar_t * salutation = NULL;
    salutation = malloc(sizeof(char16_t)*strlen("Hello, pvenom-tui!\n")+1);
    printf("Hello, pvenom-tui!");
    free(salutation);
    return EXIT_SUCCESS;
}
