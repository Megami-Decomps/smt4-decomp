/* NON_MATCHING: retail loads the size pointer into r3; the native member currently uses a different register. */
#include "classes/Obj4221a4.h"
extern "C" {
const Obj4221a4Entry *FUN_001834a4(u32 group, u32 entry);
void touchRegisterFirstRegion(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
void FUN_004d091c(Obj4221a4 *context, s32 x, s32 y, s32 width, s32 height);
}

void Obj4221a4::initialize(const void *source)
{
    Obj422594::initialize(source);
    const Obj4221a4Entry *region = FUN_001834a4(0x2F, 0x4F);
    touchRegisterFirstRegion(this, region->x, region->y, region->size->width, region->size->height);
    region = FUN_001834a4(0x2F, 0x50);
    touchRegisterSecondRegion(this, region->x, region->y, region->size->width, region->size->height);
    region = FUN_001834a4(0x2F, 0x4E);
    FUN_004d091c(this, region->x, region->y, region->size->width, region->size->height);
    ready = 1;
}
