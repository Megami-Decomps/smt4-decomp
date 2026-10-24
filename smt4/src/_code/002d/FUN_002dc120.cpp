/* NON_MATCHING: register allocation only: the render-stack setters keep the slot address in r1 and the old state in r2, where retail uses r2 and r1; the FUN_0029a17c arguments are also loaded in a different order. */
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"

/* A texture-table entry as the draw routine reads it. */
struct IconTextureEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size; /* width, height */
};

/* Fixed-point (20.12) position pair. */
struct FixedPosition {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 x;
    /* 0x10 */ s32 y;
};

struct IconFade {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 speed;
};

struct IconScroller {
    /* 0x0000 */ u8 unk0000[0x598];
    /* 0x0598 */ IconFade fade;
    /* 0x05BC */ u8 unk05BC[0xCFC];
    /* 0x12B8 */ FixedPosition position;
    /* 0x12CC */ u8 unk12CC[0x1D90];
    /* 0x305C */ s32 icon;
    /* 0x3060 */ u8 unk3060[0x24];
    /* 0x3084 */ u8 hidden;
    /* 0x3085 */ u8 unk3085[0x7FF];
    /* 0x3884 */ s32 offsetX;
    /* 0x3888 */ s32 offsetY;
};

/* The title scene's draw context, which carries one more render-state stack. */
struct TitleRenderCtx : RenderCtx {
    /* 0x12CC */ u8 unk12CC[0x40];
    /* 0x130C */ RenderStateStack stackE;
};

extern "C" {
extern TitleRenderCtx *g_titleScene;

s32 vec2GetXInt(FixedPosition *position);
s32 vec2GetYInt(FixedPosition *position);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const IconFade *fade);
IconTextureEntry *FUN_002bf4f8(u32 file, s32 index);
void FUN_002bf288(u32 flags, u32 table, s32 entry, u32 argument, TextureDrawPayloadIV payload);
void FUN_0029a17c(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);

static __inline TextureDrawPayloadIV payloadAt(s32 y)
{
    TextureDrawPayloadIV payload;
    payload.words[0] = y;
    payload.words[1] = 0x2e;
    return payload;
}

/* Draws the scroller's arrow icon (stacked layers, then a clipped strip) fading in `amount` eighths of a step. */
void FUN_002dc120(IconScroller *scroller, s32 amount)
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
    s32 x = vec2GetXInt(&scroller->position);
    s32 y = vec2GetYInt(&scroller->position);
    x = x + scroller->offsetX;
    y = y + scroller->offsetY;
    efctSetSpeed(vec2GetSpeed(&scroller->fade));
    IconTextureEntry *entry = FUN_002bf4f8(0x15, scroller->icon + 0x52);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    FUN_002bf288(2, 0x15, 0x4f, entry->x + x, payloadAt(entry->y + y));
    FUN_002bf288(2, 0x15, 0x4e, entry->x + x, payloadAt(entry->y + y - amount));
    renderStackSet(&g_titleScene->stackE, 3);
    FUN_0029a17c(entry->x + x, entry->y + y, entry->size[0], entry->size[1] - amount, 1);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    FUN_002bf288(2, 0x15, 0x50, entry->x + x, payloadAt(entry->y + y));
    FUN_002bf288(2, 0x15, 0x51, entry->x + x, payloadAt(entry->y + y));
    renderStackSet(&g_titleScene->stackE, 0);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(1.0f);
}
}
