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

/* Apocalypse's scissor stacks extend the canonical draw-context prefix. */
struct RenderCtxScissorA : RenderCtxA {
    u8 unk12D8[0x40];
    RenderStateStack scissor;
    RenderStateStack scissorMinimum;
    RenderStateStack scissorMaximum;
};
typedef char RenderCtxScissorLayoutCheck[
    offsetof(RenderCtxScissorA, scissor) == 0x1318 &&
    offsetof(RenderCtxScissorA, scissorMinimum) == 0x1338 &&
    offsetof(RenderCtxScissorA, scissorMaximum) == 0x1358 &&
    sizeof(RenderCtxScissorA) == 0x1378 ? 1 : -1];

enum {
    RENDER_STATE_SCISSOR = 3
};

/* Turn scissoring off if it is on; returns whether it was. */
static __inline bool renderCtxSuspendScissor(RenderCtxScissorA *ctx)
{
    if (ctx->scissor.entries[ctx->scissor.count] != RENDER_STATE_SCISSOR) {
        return false;
    }
    renderStackSet(&ctx->scissor, 0);
    return true;
}

/* Turn scissoring back on. */
static __inline void renderCtxResumeScissor(RenderCtxScissorA *ctx)
{
    renderStackSet(&ctx->scissor, RENDER_STATE_SCISSOR);
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
    /* 0x124 */ u8 scrollBar[0x64]; /* scroll bar state (objectApplyIfUnblocked and friends) */
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
