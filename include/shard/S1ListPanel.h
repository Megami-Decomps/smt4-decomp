/* A list panel drawn with sprites from sprite group 0x33, with a scroll bar and a scissored row area. */
#ifndef SHARD_S1LISTPANEL_H
#define SHARD_S1LISTPANEL_H

#include "common.h"
#include <stddef.h>

/* Sprite description returned by FUN_001834a4(group, id). */
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

/* A cached GPU value with a four-slot state stack and an optional flush callback. */
struct RenderCtxCachedState {
    s32 index; // 0x00
    u32 unk04;
    u32 values[4]; // 0x08
    u8 dirty; // 0x18
    u8 unk19[3];
    void (*flush)(u32 value); // 0x1c

    void set(u32 value)
    {
        u32 previous = values[index];
        values[index] = value;
        if (dirty || previous != value) {
            flush(value);
            dirty = 0;
        }
    }

    void push(u32 value)
    {
        u32 previous = values[index];
        values[++index] = value;
        if (dirty || previous != value) {
            flush(value);
            dirty = 0;
        }
    }

    void pop()
    {
        u32 previous = values[index--];
        u32 value = values[index];
        if (dirty || previous != value) {
            flush(value);
            dirty = 0;
        }
    }
};

/* The render context's state stack: the current slot holds 3 while scissoring is enabled. */
typedef struct RenderCtx {
    union {
        /* 0x0000 */ u8 unk0000[0x1318];
        struct {
            u8 unk0000[0x52c];
            /* 0x052c */ u32 viewport;
        } viewportView;
        struct {
            u8 unk0000[0x1258];
            /* 0x1258 */ RenderCtxCachedState state;
        } drawStateView;
        struct {
            u8 unk0000[0x12b8];
            /* 0x12B8 */ RenderCtxCachedState state;
        } blendStateView;
        struct {
            /* 0x0000 */ u8 unk0000[0x14];
            /* 0x0014 */ u32 state;
            /* 0x0018 */ u8 unk0018[8];
            /* 0x0020 */ u32 flags;
            /* 0x0024 */ u8 unk0024[0x80];
            /* 0x00A4 */ void *camera;
            /* 0x00A8 */ u8 unk00A8[4];
            /* 0x00AC */ void **cameras;
            /* 0x00B0 */ u8 unk00B0[8];
            /* 0x00B8 */ s32 cameraIndex;
        } modelPass;
    };
    /* 0x1318 */ s32 stateIndex;
    /* 0x131C */ s32 unk131C;
    /* 0x1320 */ s32 states[4];
    /* 0x1330 */ u8 dirty;
    /* 0x1331 */ u8 unk1331[3];
    /* 0x1334 */ void (*flush)(int state);
    /* 0x1338 */ RenderCtxCachedState scissorMinimum;
    /* 0x1358 */ RenderCtxCachedState scissorMaximum;
} RenderCtx;
typedef char RenderCtxBlendStateLayoutCheck[
    offsetof(RenderCtx, blendStateView.state) == 0x12b8 && sizeof(RenderCtx) == 0x1378 ? 1 : -1];
typedef char RenderCtxModelPassOffsetCheck[
    offsetof(RenderCtx, modelPass.state) == 0x14 &&
    offsetof(RenderCtx, modelPass.flags) == 0x20 &&
    offsetof(RenderCtx, modelPass.camera) == 0xA4 &&
    offsetof(RenderCtx, modelPass.cameras) == 0xAC &&
    offsetof(RenderCtx, modelPass.cameraIndex) == 0xB8 &&
    sizeof(RenderCtx) == 0x1378 ? 1 : -1];

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
        ctx->flush(0);
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
        ctx->flush(RENDER_STATE_SCISSOR);
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
    /* 0x124 */ u8 scrollBar[0x64]; /* scroll bar state (objectApplyIfUnblocked and friends) */
    /* 0x188 */ s32 scroll;         /* first visible entry */
    /* 0x18C */ u8 unk18C[0x13C];
    /* 0x2C8 */ u8 position[0x20];  /* a vec2 (x, y) */
    /* 0x2E8 */ f32 speed;
} ListPanel;

#endif
