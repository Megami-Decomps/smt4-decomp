/* NON_MATCHING: retail hoists the row-independent math into s16..s23 differently and shares the row draw call across the three layout cases (this version merges the two column-count cases into one); the same calls and floats. */
#include "common.h"
#include "shard/TextureDrawCall.h"

namespace {
/* One row of the list (0x60 bytes). */
struct RowEntry {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ u8 active;
    /* 0x4d */ u8 unk4d[3];
    /* 0x50 */ s32 mode;                 /* 1: laid out against the first column count, else the second */
    /* 0x54 */ s32 index;
    /* 0x58 */ u8 unk58[8];
};

/* The panel's work block. */
struct PanelWork {
    /* 0x000 */ RowEntry rows[8];        /* [rowCount] used; covers 0x000..0x300 */
    /* 0x300 */ u8 unk300[0x60];
    /* 0x360 */ s32 rowCount;
    /* 0x364 */ s32 firstColumns;
    /* 0x368 */ s32 secondColumns;
    /* 0x36c */ u8 unk36c[0x78];
    /* 0x3e4 */ f32 inactivePos[8][2];   /* (x, y) of inactive rows, by row index; extends to 0x404 */
};

/* The part of the work block past the rows' end that the fade reads. */
struct PanelFade {
    /* 0x400 */ u8 unk400[4];
    /* 0x404 */ f32 firstY;
    /* 0x408 */ f32 secondY;
    /* 0x40c */ s32 state;               /* 4: hidden */
    /* 0x410 */ f32 fadeIn;
    /* 0x414 */ f32 fadeAlpha;
    /* 0x418 */ f32 slide;
    /* 0x41c */ f32 scroll;
};

/* A colour (RGBA, 0..1). */
struct PanelColor {
    f32 r, g, b, a;
};

struct FixedRect {
    s16 unk00[5];
    s16 height;
};
}

extern "C" {
extern void *g_renderCtx;
void FUN_0016c4b8(void *context, void *preset);
void FUN_00164034(PanelColor *topLeft, PanelColor *topRight, PanelColor *bottomLeft, PanelColor *bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);
void FUN_001692d4(void);
void efctSetSpeed(f32 speed);
f32 FUN_001f3f34(f32 a, f32 b, f32 c, f32 d);
FixedRect *asdTMTexTableEntryAt(u32 group, u32 index);
void FUN_003f8a24(void *panel, u32 id, RowEntry *row, f32 x, f32 y, f32 z);

/* Draws the panel: a translucent full-screen fade, its two effect sprites and then each row at its slot. */
void FUN_003f931c(PanelWork *panel)
{
    PanelFade *fade = reinterpret_cast<PanelFade *>(reinterpret_cast<u8 *>(panel) + 0x400);
    if (fade->state == 4) {
        return;
    }
    f32 fadeOut = 1.0f - fade->fadeIn * 0.25f;
    PanelColor color;
    color.r = 0.0f;
    color.g = 0.0f;
    color.b = 0.0f;
    color.a = fade->fadeAlpha * 0.25f * fadeOut * 0.7f;
    FUN_0016c4b8(g_renderCtx, NULL);
    FUN_00164034(&color, &color, &color, &color, 0.0f, 0.0f, 400.0f, 240.0f, 0.87109375f);
    FUN_001692d4();
    efctSetSpeed(fadeOut);
    f32 slide = (4.0f - fade->slide) * 24.5f;
    s32 offset = (s32)(0.0f + slide);
    FUN_001835b4(2, 0xc, 0x54, 0, offset, 0x23);
    FUN_001835b4(2, 0xc, 0x55, 0, offset, 0x23);
    f32 scrollBase = FUN_001f3f34(30.0f, 0.0f, 8.0f, fade->scroll);
    f32 rowZ = fade->scroll * 0.03125f * fadeOut;
    for (s32 i = 0; i < panel->rowCount; i++) {
        RowEntry *row = &panel->rows[i];
        if (row->active == 0) {
            f32 *pos = &panel->inactivePos[row->index][0];
            FUN_003f8a24(panel, 0x24, row, pos[0], pos[1] + slide, fadeOut);
            continue;
        }
        s32 columns = row->mode == 1 ? panel->firstColumns : panel->secondColumns;
        f32 x = (f32)row->index * 76.0f;
        x += (400.0f - (f32)columns * 76.0f) * 0.5f;
        f32 y;
        if (panel->firstColumns != 0 && panel->secondColumns != 0) {
            y = row->mode == 1 ? fade->firstY : fade->secondY;
        } else {
            y = (f32)asdTMTexTableEntryAt(12, 156)->height;
        }
        FUN_003f8a24(panel, 0x24, row, x + scrollBase, y, rowZ);
    }
}

} /* extern "C" */
