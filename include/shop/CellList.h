#ifndef SHOP_CELLLIST_H
#define SHOP_CELLLIST_H

#include "common.h"

typedef struct Cell {
    /* 0x0 */ u16 x;
    /* 0x2 */ u16 bits;   /* bit 0: flag, bit 1: second flag, bits 2-9: value */
} Cell;

/* A list of up to 0x400 cells followed by its entry count (0x1002 bytes). */
typedef struct CellList {
    /* 0x0000 */ Cell cells[0x400];
    /* 0x1000 */ u16 count;
} CellList;

typedef char CellListLayoutCheck[sizeof(Cell) == 4 && sizeof(CellList) == 0x1002 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

void cellListAppend(CellList *list, u16 x, u16 flag, s16 second, s16 value);

#ifdef __cplusplus
}
#endif

#endif
