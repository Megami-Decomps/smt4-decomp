/* A list panel drawn with sprites from sprite group 0x33, with a scroll bar and a scissored row area. */
#ifndef SHARD_S1LISTPANEL_H
#define SHARD_S1LISTPANEL_H

#include "common.h"
#include <stddef.h>
#include "camp/RenderCtx.h"
#include "ui/UiSpriteState.h"

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

/* Turn scissoring off if it is on; returns whether it was. */
static __inline bool renderCtxSuspendScissor(RenderCtxA *ctx)
{
    bool suspended = false;
    if (renderCtxStackTop(ctx, RENDER_STACK_SCISSOR) == RENDER_STATE_SCISSOR) {
        renderCtxSetStackTop(ctx, RENDER_STACK_SCISSOR, 0);
        suspended = true;
    }
    return suspended;
}

/* Turn scissoring back on. */
static __inline void renderCtxResumeScissor(RenderCtxA *ctx)
{
    renderStackSetCounted(ctx->stacks + RENDER_STACK_SCISSOR, RENDER_STATE_SCISSOR);
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
    /* 0x2C8 */ UiSpriteState sprite;   /* the panel's position and opacity */
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
