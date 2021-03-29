#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//tasma znakow(tablica 30000 wyzerowana)
unsigned char tasma[30000] = {0};
//wskaznik na poczatek tasmy
unsigned char* wsk = tasma;


void interpretuj(char* input) {
    char current_char;
    size_t i;
    size_t loop;

    for (i = 0; input[i] != 0; ++i) {
        current_char = input[i];
        if (current_char == '>') {
            ++wsk;
        } else if (current_char == '<') {
            --wsk;
        } else if (current_char == '+') {
            ++*wsk;
        } else if (current_char == '-') {
            --*wsk;
        } else if (current_char == '.' ) {
            putchar(*wsk);
        } else if (current_char == ',') {
            *wsk = getchar();
        } else if (current_char == '[') {
            continue;
        } else if (current_char == ']' && *wsk) {
            loop = 1;
            while (loop > 0) {
                current_char = input[--i];
                if (current_char == '[') {
                    loop--;
                } else if (current_char == ']') {
                    loop++;
                }
            }
        }
    }
    int size = sizeof input / sizeof input[0];
    for(int i=0; i<size;++i){
        printf("%c", tasma[i]);
    }
}

int main() {
    interpretuj("++[---------->+<]>.-[------>+<]>-.++++++++++++.[->+++++<]>-.+[----->+<]>+.-------------.-[->+++<]>.-[--->++<]>-.++++.----.----.--[--->+<]>-.++++++[->++<]>+.+[--->++++<]>+.------.+++++.-------.+++++++++++.");
    return 0;
}
