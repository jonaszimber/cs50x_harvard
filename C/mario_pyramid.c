#include <stdio.h>
int main() {
    int line, column;
    for (line=1; line<10; line++) {
        for(column=0; column<=7; column++)
            printf(column<9-line?" ":"#");
        printf("\n");
    }
}