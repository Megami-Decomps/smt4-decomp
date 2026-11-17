/* NON_MATCHING: owner/group saved registers and pointer-versus-inline dimension load scheduling differ from retail. */
#include "classes/Obj422594.h"
#include "classes/Obj4221a4.h"
#include "shard/W6_W6Match1_TouchRegionOwner.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern const u32 DAT_0044cf78[3];
extern const u32 DAT_0044cf84[3];
extern const u32 DAT_0044cf90[3];
u32 recordCompareKind(const Obj422594 *owner);
void touchRegisterFirstRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void touchRegionOwnerAddRegion(TouchRegionOwner *owner, s32 x, s32 y, s32 width, s32 height);

// Initialize the terminal window's two sprite regions and its table-defined touch rectangle.
void FUN_0039f874(Obj422594 *owner, const void *source)
{
    owner->Obj422594::initialize(source);
    const TextureTableEntryIV *first = asdTMTexTableEntryAt(28, DAT_0044cf78[recordCompareKind(owner)]);
    touchRegisterFirstRegion(owner, first->x, first->y,
        first->placement ? first->placement->width : first->width & 0x7fff,
        first->placement ? first->placement->height : first->height & 0x7fff);
    const TextureTableEntryIV *second = asdTMTexTableEntryAt(28, DAT_0044cf84[recordCompareKind(owner)]);
    touchRegisterSecondRegion(owner, second->x, second->y,
        second->placement ? second->placement->width : second->width & 0x7fff,
        second->placement ? second->placement->height : second->height & 0x7fff);
    const TextureTableEntryIV *rectangle = asdTMTexTableEntryAt(28, DAT_0044cf90[recordCompareKind(owner)]);
    touchRegionOwnerAddRegion((TouchRegionOwner *)owner, rectangle->x, rectangle->y,
        rectangle->placement ? rectangle->placement->width : rectangle->width & 0x7fff,
        rectangle->placement ? rectangle->placement->height : rectangle->height & 0x7fff);
}
}
