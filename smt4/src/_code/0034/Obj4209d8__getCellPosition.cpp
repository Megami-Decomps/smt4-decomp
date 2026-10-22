#include "classes/Obj4209d8.h"
extern "C" void FUN_0023aa28(void *range, f32 *x, f32 *y);

const f32 *Obj4209d8::getCellPosition(s32 index)
{
    Obj4209d8Cell *cell = &owner->cells[index];
    f32 offset[2];
    position = cell->position;
    if (cell->hasOffset == 1) {
        FUN_0023aa28(cell->offsetRange, &offset[0], &offset[1]);
        position.x += offset[0];
        position.y += offset[1];
    }
    position.x += cell->height;
    position.y += cell->height * 0.25f;
    return &position.x;
}
