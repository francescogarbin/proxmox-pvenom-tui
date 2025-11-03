#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <uchar.h>
#include <wchar.h>

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "");
    wchar_t str[] = L"Hello, pvenom-tui! \U0001F92B\n";
    printf("%ls", str);  // %ls converte wchar_t* → char* UTF-8
    return EXIT_SUCCESS;
}