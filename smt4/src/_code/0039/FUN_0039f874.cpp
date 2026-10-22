/* NON_MATCHING: owner/group saved registers and pointer-versus-inline dimension load scheduling differ from retail. */
#include "classes/Obj422594.h"
#include "classes/Obj4221a4.h"
#include "gfx/SpriteTextureRect.h"
#include "shard/W6_W6Match1_TouchRegionOwner.h"

extern "C" {
extern const u32 DAT_0044cf78[3];
extern const u32 DAT_0044cf84[3];
extern const u32 DAT_0044cf90[3];
u32 recordCompareKind(const Obj422594 *owner);
SpriteTextureRect *FUN_002bf4f8(u32 group, u32 id);
void touchRegisterFirstRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj422594 *owner, s32 x, s32 y, s32 width, s32 height);
void FUN_002346ac(TouchRegionOwner *owner, s32 x, s32 y, s32 width, s32 height);

// Initialize the terminal window's two sprite regions and its table-defined touch rectangle.
void FUN_0039f874(Obj422594 *owner, const void *source)
{
    owner->Obj422594::initialize(source);
    const Obj4221a4Entry *first = (const Obj4221a4Entry *)FUN_002bf4f8(28, DAT_0044cf78[recordCompareKind(owner)]);
    const TouchRegionInlineSize *firstSize = (const TouchRegionInlineSize *)first->unk00;
    touchRegisterFirstRegion(owner, first->x, first->y,
        first->size ? first->size->width : firstSize->width & 0x7fff,
        first->size ? first->size->height : firstSize->height & 0x7fff);
    const Obj4221a4Entry *second = (const Obj4221a4Entry *)FUN_002bf4f8(28, DAT_0044cf84[recordCompareKind(owner)]);
    const TouchRegionInlineSize *secondSize = (const TouchRegionInlineSize *)second->unk00;
    touchRegisterSecondRegion(owner, second->x, second->y,
        second->size ? second->size->width : secondSize->width & 0x7fff,
        second->size ? second->size->height : secondSize->height & 0x7fff);
    const Obj4221a4Entry *rectangle = (const Obj4221a4Entry *)FUN_002bf4f8(28, DAT_0044cf90[recordCompareKind(owner)]);
    const TouchRegionInlineSize *size = (const TouchRegionInlineSize *)rectangle->unk00;
    FUN_002346ac((TouchRegionOwner *)owner, rectangle->x, rectangle->y,
        rectangle->size ? rectangle->size->width : size->width & 0x7fff,
        rectangle->size ? rectangle->size->height : size->height & 0x7fff);
}
}
