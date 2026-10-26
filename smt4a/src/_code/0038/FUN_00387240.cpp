/* NON_MATCHING: same arithmetic; retail ends each arm with its own pop (the zero-size arm placed second, loading all four fields before the stores), armcc here joins the arms with a branch. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


/* The target object: a center point at 0x18. */
struct CenterTarget {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s16 centerX;
    /* 0x1A */ s16 centerY;
};


/* Stores the center of the looked-up rectangle (its size override if present) in the target. */
void FUN_00387240(CenterTarget *target, u32 file, s32 id)
{
    TextureTableEntryIV *rect = asdTMTexTableEntryAt(file, id);
    TexturePlacementPrefixIV *size = rect->placement;

    if (size != NULL) {
        s32 centerX = rect->x + size->width / 2;
        s32 centerY = rect->y + size->height / 2;
        target->centerX = centerX;
        target->centerY = centerY;
    } else {
        s32 centerX = rect->x + ((rect->width & 0x7FFF) >> 1);
        s32 centerY = rect->y + ((rect->height & 0x7FFF) >> 1);
        target->centerX = centerX;
        target->centerY = centerY;
    }
}

} /* extern "C" */
