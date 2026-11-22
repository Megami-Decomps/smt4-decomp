#include "classes/Obj4221a4.h"
#include "classes/Obj422594.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void touchRegionOwnerAddRegion(Obj4221a4 *obj, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj4221a4 *obj, s32 x, s32 y, s32 width, s32 height);
void touchRegisterFirstRegion(Obj4221a4 *obj, s32 x, s32 y, s32 width, s32 height);
}

/* Reads rows 79, 80 and 78 of table 58 and hands each to one of the object's setters. */
void Obj4221a4::initialize(const void *param)
{
    Obj422594::initialize(param);
    TextureTableEntryIV *entry;
    s32 x;
    s32 y;
    s32 width;
    s32 height;
    entry = asdTMTexTableEntryAt(58, 79);
    x = entry->x;
    y = entry->y;
    width = entry->placement->width;
    height = entry->placement->height;
    touchRegisterFirstRegion(this, x, y, width, height);
    entry = asdTMTexTableEntryAt(58, 80);
    x = entry->x;
    y = entry->y;
    width = entry->placement->width;
    height = entry->placement->height;
    touchRegisterSecondRegion(this, x, y, width, height);
    entry = asdTMTexTableEntryAt(58, 78);
    x = entry->x;
    y = entry->y;
    width = entry->placement->width;
    height = entry->placement->height;
    touchRegionOwnerAddRegion(this, x, y, width, height);
    ready = 1;
}
