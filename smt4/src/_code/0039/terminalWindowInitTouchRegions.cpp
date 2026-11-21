#include "classes/Obj422594.h"
#include "classes/Obj4221a4.h"
#include "shard/W6_W6Match1_TouchRegionOwner.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern const u32 DAT_0044cf78[3];
extern const u32 DAT_0044cf84[3];
extern const u32 DAT_0044cf90[3];
u32 recordCompareKind(const Obj422594 *owner);
void touchRegisterFirstRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height); // declcheck: local (the shared declaration does not compile here or changes this unit)
void touchRegisterSecondRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void touchRegionOwnerAddRegion(TouchRegionOwner *owner, s32 x, s32 y, s32 width, s32 height);

/* Initializes the terminal window's two sprite regions and its table-defined touch rectangle. */
void terminalWindowInitTouchRegions(Obj422594 *owner, const void *source)
{
    owner->Obj422594::initialize(source);
    s32 x, y, width, height;
    asdTMTexTableEntryRect(28, DAT_0044cf78[recordCompareKind(owner)], &x, &y, &width, &height);
    touchRegisterFirstRegion(owner, x, y, width, height);
    asdTMTexTableEntryRect(28, DAT_0044cf84[recordCompareKind(owner)], &x, &y, &width, &height);
    touchRegisterSecondRegion(owner, x, y, width, height);
    asdTMTexTableEntryRect(28, DAT_0044cf90[recordCompareKind(owner)], &x, &y, &width, &height);
    touchRegionOwnerAddRegion((TouchRegionOwner *)owner, x, y, width, height);
}
}
