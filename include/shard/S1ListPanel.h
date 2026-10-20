/* A list panel drawn with sprites from sprite group 0x33, with a scroll bar and a scissored row area. */
#ifndef SHARD_S1LISTPANEL_H
#define SHARD_S1LISTPANEL_H

#include "common.h"

/* Sprite description returned by FUN_001834a4(group, id). */
typedef struct SpriteInfo {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;        /* width, height */
} SpriteInfo;

/* The render context's state stack: the current slot holds 3 while scissoring is enabled. */
typedef struct RenderCtx {
    /* 0x0000 */ u8 unk0000[0x1318];
    /* 0x1318 */ s32 stateIndex;
    /* 0x131C */ s32 unk131C;
    /* 0x1320 */ s32 states[4];
    /* 0x1330 */ u8 dirty;
    /* 0x1331 */ u8 unk1331[3];
    /* 0x1334 */ void (*flush)(void);
} RenderCtx;

enum {
    RENDER_STATE_SCISSOR = 3
};

/* Turn scissoring off if it is on; returns whether it was. */
static __inline bool renderCtxSuspendScissor(RenderCtx *ctx)
{
    if (ctx->states[ctx->stateIndex] != RENDER_STATE_SCISSOR) {
        return false;
    }
    s32 previous = ctx->states[ctx->stateIndex];

    ctx->states[ctx->stateIndex] = 0;
    if (ctx->dirty != 0 || previous != 0) {
        ctx->flush();
        ctx->dirty = 0;
    }
    return true;
}

/* Turn scissoring back on. */
static __inline void renderCtxResumeScissor(RenderCtx *ctx)
{
    s32 previous = ctx->states[ctx->stateIndex];

    ctx->states[ctx->stateIndex] = RENDER_STATE_SCISSOR;
    if (ctx->dirty != 0 || previous != RENDER_STATE_SCISSOR) {
        ctx->flush();
        ctx->dirty = 0;
    }
}

/* One visible range of rows (28 bytes). */
typedef struct PanelRow {
    /* 0x00 */ s32 first;           /* first entry index */
    /* 0x04 */ s32 last;            /* last entry index */
    /* 0x08 */ u8 kind;             /* 0: empty, 1: icon strip, 2: entry text */
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ s32 iconIndex;       /* -1: none */
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ s32 textKind;        /* 1 or 2: how the entry is drawn */
} PanelRow;

typedef struct ListPanel {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 type;            /* 8 and 9 show the tab strip */
    /* 0x005 */ u8 unk005[0x83];
    /* 0x088 */ u32 icons[4];
    /* 0x098 */ PanelRow rows[5];
    /* 0x124 */ u8 scrollBar[0x64]; /* scroll bar state (FUN_002c2c68 and friends) */
    /* 0x188 */ s32 scroll;         /* first visible entry */
    /* 0x18C */ u8 unk18C[0x13C];
    /* 0x2C8 */ u8 position[0x20];  /* a vec2 (x, y) */
    /* 0x2E8 */ f32 speed;
} ListPanel;

#endif
