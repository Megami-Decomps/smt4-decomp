#include "classes/Obj4221a4.h"
#include "classes/Obj422594.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void touchRegisterFirstRegion(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
void touchRegionOwnerAdd(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
} /* extern "C" */

/* Registers the object's three touch regions from the layout table. */
void Obj4221a4::initialize(const void *param)
{
    Obj422594::initialize(param);
    TextureTableEntryIV *entry;
    s32 x;
    s32 y;
    s32 width;
    s32 height;
    entry = asdTMTexTableEntryAt(0x2F, 79);
    x = entry->x;
    y = entry->y;
    width = entry->placement->width;
    height = entry->placement->height;
    touchRegisterFirstRegion(this, x, y, width, height);
    entry = asdTMTexTableEntryAt(0x2F, 80);
    x = entry->x;
    y = entry->y;
    width = entry->placement->width;
    height = entry->placement->height;
    touchRegisterSecondRegion(this, x, y, width, height);
    entry = asdTMTexTableEntryAt(0x2F, 78);
    x = entry->x;
    y = entry->y;
    width = entry->placement->width;
    height = entry->placement->height;
    touchRegionOwnerAdd(this, x, y, width, height);
    ready = 1;
}
