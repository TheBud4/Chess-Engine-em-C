#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

typedef enum {
    EMPTY,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
} piece_kind;

typedef enum {
    BLACK = 1,
    WHITE = 2
} colors;

int piece[8][8] = {
    {ROOK,  KNIGHT,BISHOP,QUEEN, KING,  BISHOP,KNIGHT,ROOK},
    {PAWN,  PAWN,  PAWN,  PAWN,  PAWN,  PAWN,  PAWN,  PAWN},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {PAWN,  PAWN,  PAWN,  PAWN,  PAWN,  PAWN,  PAWN,  PAWN},
    {ROOK,  KNIGHT,BISHOP,QUEEN, KING,  BISHOP,KNIGHT,ROOK}
};

int color[8][8] = {
    {BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK},
    {BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY},
    {WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE},
    {WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE}
};

int main (){
    for(int i = 0; i < 8;i++){
        for(int f = 0; f<8;f++)
        printf("%d",piece[i][f]);
    printf("\n");
    }
    return 0;
}


