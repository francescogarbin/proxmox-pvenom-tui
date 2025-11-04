#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <uchar.h>
#include <wchar.h>

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "");
    wchar_t str[300];
    wcscpy(str, L"Hello, pvenom-tui! \U0001F92B What is your name?:");
    wprintf(L"%ls ", str);
    wchar_t* input = malloc(sizeof(wchar_t)*256);
    fgetws(input, 256, stdin);
    const unsigned long length = wcslen(input);
    wprintf(L"%ls - length: %lu\n", input, length);
    free(input);
    return EXIT_SUCCESS;
}
