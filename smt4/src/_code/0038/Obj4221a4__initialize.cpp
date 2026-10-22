/* NON_MATCHING: same loads and calls; the scheduler stores the height argument (str r0, [sp]) before loading the width, and retail uses ip for the height in the second and third calls. */
#include "classes/Obj4221a4.h"
#include "classes/Obj422594.h"

extern "C" {
Obj4221a4Entry *FUN_002bf4f8(u32 table, u32 id);
void FUN_002346ac(Obj4221a4 *obj, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj4221a4 *obj, s32 x, s32 y, s32 width, s32 height);
void touchRegisterFirstRegion(Obj4221a4 *obj, s32 x, s32 y, s32 width, s32 height);
}

/* Reads rows 79, 80 and 78 of table 58 and hands each to one of the object's setters. */
void Obj4221a4::initialize(const void *param)
{
    Obj4221a4Entry *entry;
    Obj4221a4Size *size;
    s32 x;
    s32 y;

    Obj422594::initialize(param);
    entry = FUN_002bf4f8(58, 79);
    size = entry->size;
    x = entry->x;
    y = entry->y;
    touchRegisterFirstRegion(this, x, y, size->width, size->height);
    entry = FUN_002bf4f8(58, 80);
    size = entry->size;
    x = entry->x;
    y = entry->y;
    touchRegisterSecondRegion(this, x, y, size->width, size->height);
    entry = FUN_002bf4f8(58, 78);
    size = entry->size;
    x = entry->x;
    y = entry->y;
    FUN_002346ac(this, x, y, size->width, size->height);
    ready = 1;
}
