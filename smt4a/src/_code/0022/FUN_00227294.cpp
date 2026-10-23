/* NON_MATCHING: transition-scale address splitting and final pivoted-draw argument scheduling differ. */
#include "camp/CampState.h"
#include "shard/S1ListPanel.h"

struct CampSpritePivot {
    f32 depth;
    s16 horizontalMode, verticalMode;
    u16 x, y;
};
extern "C" {
extern CampStateA *g_camp;
f32 jobGetScalarValue();
void efctSetSpeed(f32 speed);
void FUN_001835b4(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags);
const SpriteInfo *FUN_001834a4(u32 table, u32 image);
void FUN_00281000(CampSpritePivot *pivot, f32 depth, s32 horizontalMode, s32 verticalMode, s32 x, s32 y);
void FUN_0032cdc8(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags, const CampSpritePivot *pivot);

void FUN_00227294(s32 x, s32 y, s32 scale)
{
    CampStateA *camp = g_camp;
    if (camp != NULL && camp->spriteState != 0 && camp->spriteState != 4) {
        f32 previousSpeed = jobGetScalarValue();
        efctSetSpeed(camp->transition.scale * static_cast<f32>(scale));
        FUN_001835b4(2, 20, 0x5ca, x, y, 11);
        FUN_001835b4(2, 20, 0x5cb, x, y, 11);
        FUN_001835b4(2, 20, 0x5cc, x, y, 11);
        FUN_001835b4(2, 20, 0x5cd, x, y, 11);
        const SpriteInfo *frame = FUN_001834a4(20, 0x5ca);
        const SpriteInfo *anchor = FUN_001834a4(20, 0x5ce);
        CampSpritePivot pivot;
        FUN_00281000(&pivot, -64.0f, 3, 3, anchor->x,
            static_cast<s16>(anchor->y + (frame->bounds.height & 0x7fff)));
        FUN_0032cdc8(2, 20, 0x5ca,
            anchor->x + x - frame->x - (frame->bounds.height & 0x7fff),
            anchor->y + y - frame->y, 11, &pivot);
        efctSetSpeed(previousSpeed);
    }
}
}
