#include "shop/CellList.h"

extern "C" {

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
