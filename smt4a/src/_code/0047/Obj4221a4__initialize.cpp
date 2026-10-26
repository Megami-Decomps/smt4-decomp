/* NON_MATCHING: retail loads the size pointer into r3; the native member currently uses a different register. */
#include "classes/Obj4221a4.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
void touchRegisterFirstRegion(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
void FUN_004d091c(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
}

void Obj4221a4::initialize(const void *source)
{
    Obj422594::initialize(source);
    const TextureTableEntryIV *region = asdTMTexTableEntryAt(0x2F, 0x4F);
    touchRegisterFirstRegion(this, region->x, region->y, region->placement->width, region->placement->height);
    region = asdTMTexTableEntryAt(0x2F, 0x50);
    touchRegisterSecondRegion(this, region->x, region->y, region->placement->width, region->placement->height);
    region = asdTMTexTableEntryAt(0x2F, 0x4E);
    FUN_004d091c(this, region->x, region->y, region->placement->width, region->placement->height);
    ready = 1;
}
