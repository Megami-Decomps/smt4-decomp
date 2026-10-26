/* NON_MATCHING: owner/group saved registers and pointer-versus-inline dimension load scheduling differ from retail. */
#include "classes/Obj422594.h"
#include "classes/Obj4221a4.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W6_W6Match1_TouchRegionOwner.h"

extern "C" {
extern const u32 DAT_00587fe4[3];
extern const u32 DAT_00587ff0[3];
extern const u32 DAT_00587ffc[3];
u32 recordCompareKind(const Obj422594 *owner);
void touchRegisterFirstRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void FUN_004d091c(TouchRegionOwner *owner, s32 x, s32 y, s32 width, s32 height);

// Initialize the terminal window's two sprite regions and its table-defined touch rectangle.
void FUN_00492e20(Obj422594 *owner, const void *source)
{
    owner->Obj422594::initialize(source);
    const TextureTableEntryIV *first = asdTMTexTableEntryAt(19, DAT_00587fe4[recordCompareKind(owner)]);
    touchRegisterFirstRegion(owner, first->x, first->y,
        first->placement ? first->placement->width : first->width & 0x7fff,
        first->placement ? first->placement->height : first->height & 0x7fff);
    const TextureTableEntryIV *second = asdTMTexTableEntryAt(19, DAT_00587ff0[recordCompareKind(owner)]);
    touchRegisterSecondRegion(owner, second->x, second->y,
        second->placement ? second->placement->width : second->width & 0x7fff,
        second->placement ? second->placement->height : second->height & 0x7fff);
    const TextureTableEntryIV *rectangle = asdTMTexTableEntryAt(19, DAT_00587ffc[recordCompareKind(owner)]);
    FUN_004d091c((TouchRegionOwner *)owner, rectangle->x, rectangle->y,
        rectangle->placement ? rectangle->placement->width : rectangle->width & 0x7fff,
        rectangle->placement ? rectangle->placement->height : rectangle->height & 0x7fff);
}
}