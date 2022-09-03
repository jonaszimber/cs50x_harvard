#include <stdio.h>
int main() {

    int line, column, num;
    printf("\n\n ENTER A NUMBER BETWEEN 1 AND 8:");
    scanf("%d",&num);
    while(num<1||num>8)
    {
    printf("\n THE NUMBER ENTERED IS INCORRECT. TYPE IT AGAIN:");
    scanf("%d",&num);
    }
    printf("\n\n THE NUMBER ENTERED IS:% d",num);
    printf("\n\n");
    for (line=1; line<10; line++) {
        for(column=0; column<=num; column++)
            printf(column<9-line?" ":"#");
        printf("\n");
    }
    }
