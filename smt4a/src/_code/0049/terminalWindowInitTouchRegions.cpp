#include "classes/Obj422594.h"
#include "classes/Obj4221a4.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W6_W6Match1_TouchRegionOwner.h"

extern "C" {
extern const u32 DAT_00587fe4[3];
extern const u32 DAT_00587ff0[3];
extern const u32 DAT_00587ffc[3];
u32 recordCompareKind(const Obj422594 *owner);
void touchRegisterFirstRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height); // declcheck: local (the shared declaration does not compile here or changes this unit)
void touchRegisterSecondRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void touchRegionOwnerAdd(TouchRegionOwner *owner, s32 x, s32 y, s32 width, s32 height);

/* Initializes the terminal window's two sprite regions and its table-defined touch rectangle. */
void terminalWindowInitTouchRegions(Obj422594 *owner, const void *source)
{
    owner->Obj422594::initialize(source);
    s32 x, y, width, height;
    asdTMTexTableEntryRect(19, DAT_00587fe4[recordCompareKind(owner)], &x, &y, &width, &height);
    touchRegisterFirstRegion(owner, x, y, width, height);
    asdTMTexTableEntryRect(19, DAT_00587ff0[recordCompareKind(owner)], &x, &y, &width, &height);
    touchRegisterSecondRegion(owner, x, y, width, height);
    asdTMTexTableEntryRect(19, DAT_00587ffc[recordCompareKind(owner)], &x, &y, &width, &height);
    touchRegionOwnerAdd((TouchRegionOwner *)owner, x, y, width, height);
}
}