/* NON_MATCHING: register allocation only: the y/x offset loads use r1/r2/r3 where retail reuses the pool-constant register (r2, r1); the gxSetMirroredClippedScissor argument loads are scheduled in a different order. */
#include "camp/RenderCtxTitle.h"
#include "util/BitsAndBytes_VariantA.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

/* Fixed-point (20.12) position pair. */
struct FixedPosition {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 x;
    /* 0x10 */ s32 y;
};

struct IconScroller {
    /* 0x0000 */ u8 unk0000[0x598];
    /* 0x0598 */ UiSpriteState fade;
    /* 0x05BC */ u8 unk05BC[0xC94];
    /* 0x12B8 */ FixedPosition position;
    /* 0x12CC */ u8 unk12CC[0x1D90];
    /* 0x305C */ s32 icon;
    /* 0x3060 */ u8 unk3060[0x24];
    /* 0x3084 */ u8 hidden;
    /* 0x3085 */ u8 unk3085[0x7FF];
    /* 0x3884 */ s32 offsetX;
    /* 0x3888 */ s32 offsetY;
};

extern "C" {

void efctSetSpeed(f32 speed);
void texDrawTableEntryAtStoredOrigin(u32 flags, u32 table, s32 entry, u32 argument, TextureDrawPayloadIV payload);
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);

static __inline TextureDrawPayloadIV payloadAt(s32 y)
{
    TextureDrawPayloadIV payload;
    payload.words[0] = y;
    payload.words[1] = 0x2e;
    return payload;
}

/* Draws the scroller's arrow icon (stacked layers, then a clipped strip) fading in `amount` eighths of a step. */
void uiIconScrollerDrawArrow(IconScroller *scroller, s32 amount)
{
    if (scroller->hidden != 0) {
        return;
    }
    amount = amount * 8;
    if (amount > 40) {
        amount = 40;
    }
    if (scroller->icon > 3) {
        return;
    }
    s32 x = vec2GetXInt((const UiSpriteState *)&scroller->position);
    s32 y = vec2GetYInt((const UiSpriteState *)&scroller->position);
    x = x + scroller->offsetX;
    y = y + scroller->offsetY;
    efctSetSpeed(vec2GetSpeed(&scroller->fade));
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x15, scroller->icon + 0x52);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4f, entry->x + x, payloadAt(entry->y + y));
    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4e, entry->x + x, payloadAt(entry->y + y - amount));
    renderStackSetCounted(&g_titleScene->scissor, 3);
    gxSetMirroredClippedScissor(entry->x + x, entry->y + y, entry->placement->width, entry->placement->height - amount, 1);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x50, entry->x + x, payloadAt(entry->y + y));
    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x51, entry->x + x, payloadAt(entry->y + y));
    renderStackSetCounted(&g_titleScene->scissor, 0);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(1.0f);
}
}
