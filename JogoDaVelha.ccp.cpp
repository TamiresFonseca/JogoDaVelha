#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char tabuleiro[3][3];
    int l, c, linha, coluna;
     
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            tabuleiro[l][c] = ' ';    	
        }
    }
		printf("\n  0  1   2");
		printf("\n");
    for (l = 0; l < 3; l++) {    
        for (c = 0; c < 3; c++) {
            if (c == 0) {
                printf(" %c", tabuleiro[l][c]);
            } if (c == 2) {
            	printf(" %d", l);
			}
			else {
                printf(" | %c", tabuleiro[l][c]);
            }
        }
        printf("\n");
        if (l < 2) {
            printf("-----------\n");
        }
        
        printf("\nInforme a linha e a coluna que deseja jogar:");
        scanf("%d", tabuleiro[l][c]);

        
    }

    return 0;
}
