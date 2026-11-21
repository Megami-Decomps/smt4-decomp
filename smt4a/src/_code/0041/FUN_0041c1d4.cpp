/* NON_MATCHING: marker-ring draw split from FUN_0041c108 (+0xcc); with the pop through renderStackPopChecked the only
 * difference left is the pop's base: retail loads g_renderCtx into r0 and builds the stack address in r4 (add r4, r0, ...),
 * the build loads it into r4 directly. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "code/Code0016.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"


/* A rotating marker ring: the animation phase and the highlighted slot. */
struct MarkerRing {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 image;
    /* 0x10 */ s32 phase;
    /* 0x14 */ s32 slot;
};

extern "C" {
s32 renderCtxPackPassFlags(s32 first, s32 second);
void gxResetColorQuadToWhite(void);

// Draw the marker ring: nine slot sprites, then the highlight pairs that rotate around it.
void FUN_0041c1d4(MarkerRing *ring)
{
    f32 positions[9][2];
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    asdTMTexTableEntryAt(43, ring->image);
    texDrawCompositeSprite(2, 43, ring->image, 0, 0, 211);
    for (s32 i = 0; i < 9; i++) {
        TextureTableEntryIV *slot = asdTMTexTableEntryAt(43, i + 98);
        positions[i][0] = slot->x;
        positions[i][1] = slot->y;
        texDrawTableEntryAtStoredOrigin(2, 43, 95, slot->x, slot->y, 211);
    }
    ring->phase = (ring->phase + 1) % 4;
    if (ring->phase <= 0) {
        ring->slot++;
    }
    ring->slot = ring->slot % 8;
    s32 first = ring->slot;
    s32 second = (first + 1) & 7;
    s32 third = (first + 4) & 7;
    s32 fourth = (third + 1) & 7;
    texDrawTableEntryAtStoredOrigin(2, 43, 97, (s32)positions[first][0], (s32)positions[first][1], 211);
    texDrawTableEntryAtStoredOrigin(2, 43, 96, (s32)positions[second][0], (s32)positions[second][1], 211);
    texDrawTableEntryAtStoredOrigin(2, 43, 97, (s32)positions[third][0], (s32)positions[third][1], 211);
    texDrawTableEntryAtStoredOrigin(2, 43, 96, (s32)positions[fourth][0], (s32)positions[fourth][1], 211);
    renderStackPopChecked(g_renderCtx->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
}
}
