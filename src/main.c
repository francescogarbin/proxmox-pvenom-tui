#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "");
    wchar_t* str = L"Hello, pvenom-tui! \U0001F92B\n";
    printf("%ls", str);
    return EXIT_SUCCESS;
}