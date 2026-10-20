#include "common.h"

extern "C" {

typedef struct Cell {
    /* 0x0 */ u16 x;
    /* 0x2 */ u16 bits;   /* bit 0: flag, bit 1: second flag, bits 2-9: value */
} Cell;

typedef struct CellList {
    /* 0x0000 */ Cell cells[0x400];
    /* 0x1000 */ u16 count;
} CellList;

void cellListAppend(CellList *list, u16 x, u16 flag, s16 second, s16 value)
{
    u16 bits;
    Cell *cell;
    u16 *count = &list->count;

    list->cells[*count].x = x;
    cell = &list->cells[*count];
    flag = flag | (cell->bits & 0xfffe);
    cell->bits = flag;
    bits = (flag & 0xfffd) | (second << 1);
    list->cells[*count].bits = bits;
    list->cells[*count].bits = (bits & 0xfc03) | (value << 2);
    *count = *count + 1;
}

} /* extern "C" */
