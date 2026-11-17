#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/CampStateA.h"

struct CampSpritePivot {
    f32 depth;
    s16 horizontalMode, verticalMode;
    u16 x, y;
};
extern "C" {
f32 vec2GetSpeed(const void *vector); /* linker-inlined: vldr s0, [r0, #0x20] */
f32 jobGetScalarValue();
void efctSetSpeed(f32 speed);
void FUN_00281000(CampSpritePivot *pivot, f32 depth, s32 horizontalMode, s32 verticalMode, s32 x, s32 y);
void FUN_0032cdc8(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags, const CampSpritePivot *pivot);

/* Draws the camp transition frame at (x, y) at the transition sprite's speed times `scale`, then its pivoted corner piece. */
void FUN_00227294(s32 x, s32 y, s32 scale)
{
    CampStateA *camp = g_camp;
    if (camp != NULL && camp->spriteState != 0 && camp->spriteState != 4) {
        f32 previousSpeed = jobGetScalarValue();
        efctSetSpeed(vec2GetSpeed(&camp->sprites[36]) * static_cast<f32>(scale));
        texDrawTableEntryAtStoredOrigin(2, 20, 0x5ca, x, y, 11);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x5cb, x, y, 11);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x5cc, x, y, 11);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x5cd, x, y, 11);
        const TextureTableEntryIV *frame = asdTMTexTableEntryAt(20, 0x5ca);
        const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(20, 0x5ce);
        CampSpritePivot pivot;
        FUN_00281000(&pivot, -64.0f, 3, 3, anchor->x,
            static_cast<s16>(anchor->y + (frame->height & 0x7fff)));
        s32 drawX = anchor->x + x - frame->x - (frame->height & 0x7fff);
        s32 drawY = anchor->y + y - frame->y;
        FUN_0032cdc8(2, 20, 0x5ca, drawX, drawY, 11, &pivot);
        efctSetSpeed(previousSpeed);
    }
}
}
