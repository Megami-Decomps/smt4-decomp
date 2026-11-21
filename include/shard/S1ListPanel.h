/* A list panel drawn with sprites from sprite group 0x33, with a scroll bar and a scissored row area. */
#ifndef SHARD_S1LISTPANEL_H
#define SHARD_S1LISTPANEL_H

#include "common.h"
#include <stddef.h>
#include "camp/RenderCtx.h"

/* Sprite description returned by asdTMTexTableEntryAt(group, id). */
typedef struct SpriteInfo {
    union {
        /* 0x00 */ u8 unk00[8];
        struct {
            u8 unk00[4];
            /* 0x04 */ u16 width;
            /* 0x06 */ u16 height;
        } bounds;
    };
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;        /* width, height */
} SpriteInfo;

/* Apocalypse's scissor stacks are part of RenderCtxA. */
typedef RenderCtxA RenderCtxScissorA;
/* Indexed array view of RenderCtxA's 12 contiguous RenderStateStacks starting at 0x11F8 (index 9 = scissor at 0x1318). */
struct RenderCtxStateStacksA {
    /* 0x0000 */ u8 unk0000[0x11F8];
    /* 0x11F8 */ RenderStateStack stacks[12];
};

typedef char RenderCtxScissorLayoutCheck[
    sizeof(RenderCtxStateStacksA) == sizeof(RenderCtxA) &&
    offsetof(RenderCtxStateStacksA, stacks) == offsetof(RenderCtxA, depthStacks.stackD) &&
    offsetof(RenderCtxA, scissor) == 0x1318 &&
    offsetof(RenderCtxA, scissorMinimum) == 0x1338 &&
    offsetof(RenderCtxA, scissorMaximum) == 0x1358 ? 1 : -1];

/* IV's draw context seen the same way: its 12 RenderStateStacks start at 0x11EC (index 9 = scissor at 0x130C). */
struct RenderCtxStateStacks {
    /* 0x0000 */ u8 unk0000[0x11EC];
    /* 0x11EC */ RenderStateStack stacks[12];
};

typedef char RenderCtxStateStacksLayoutCheck[
    sizeof(RenderCtxStateStacks) == sizeof(RenderCtx) &&
    offsetof(RenderCtxStateStacks, stacks) == offsetof(RenderCtx, depthStacks.stackD) &&
    offsetof(RenderCtxStateStacks, stacks[9]) == offsetof(RenderCtx, scissor) ? 1 : -1];

enum {
    RENDER_STACK_SCISSOR = 9,
    RENDER_STACK_SCISSOR_MINIMUM = 10,
    RENDER_STACK_SCISSOR_MAXIMUM = 11,
    RENDER_STATE_SCISSOR = 3
};

static __inline s32 renderCtxGetStateStackTop(RenderCtxScissorA *ctx, s32 stackIndex)
{
    RenderCtxStateStacksA *table = (RenderCtxStateStacksA *)ctx;
    return table->stacks[stackIndex].entries[table->stacks[stackIndex].count];
}

/* renderCtxGetStateStackTop for IV's context. */
static __inline s32 renderCtxIvGetStateStackTop(RenderCtx *ctx, s32 stackIndex)
{
    RenderCtxStateStacks *table = (RenderCtxStateStacks *)ctx;
    return table->stacks[stackIndex].entries[table->stacks[stackIndex].count];
}

static __inline void renderCtxSetStateStackTop(RenderCtxScissorA *ctx, s32 stackIndex, s32 state)
{
    RenderCtxStateStacksA *table = (RenderCtxStateStacksA *)ctx;
    renderStackSetCounted(&table->stacks[stackIndex], state);
}

/* Turn scissoring off if it is on; returns whether it was. */
static __inline bool renderCtxSuspendScissor(RenderCtxScissorA *ctx)
{
    bool suspended = false;
    if (renderCtxGetStateStackTop(ctx, RENDER_STACK_SCISSOR) == RENDER_STATE_SCISSOR) {
        renderCtxSetStateStackTop(ctx, RENDER_STACK_SCISSOR, 0);
        suspended = true;
    }
    return suspended;
}

/* Turn scissoring back on. */
static __inline void renderCtxResumeScissor(RenderCtxScissorA *ctx)
{
    renderStackSetCounted(&ctx->scissor, RENDER_STATE_SCISSOR);
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
    /* 0x124 */ u8 scrollBar[0x64]; /* scroll bar state (gridNavigationGetItemCount and friends) */
    /* 0x188 */ s32 scroll;         /* first visible entry */
    /* 0x18C */ u8 unk18C[0x13C];
    /* 0x2C8 */ u8 position[0x20];  /* a vec2 (x, y) */
    /* 0x2E8 */ f32 speed;
} ListPanel;

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
s32 FUN_0028d1f4(u32 id);
#ifdef __cplusplus
}
#endif

#endif
