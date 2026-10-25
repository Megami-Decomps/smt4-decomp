/* NON_MATCHING: retail keeps the arguments in single registers (s19/s16) and the quad size loaded together up front; ours copies the float pair as a double and schedules the corner math after the texture bind (161 rows against 151). */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/FUN_002b8660.h"

/* A loaded texture the title scene can bind (handle at +8). */
struct TitleTexture {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
};

/* The title scene's fading overlay job, as its draw step reads it. */
struct TitleFadeWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ TitleTexture *first;
    /* 0x10 */ u32 table;
    /* 0x14 */ u32 firstNode;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ f32 halfWidth;
    /* 0x20 */ f32 halfHeight;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ f32 alpha;
    /* 0x2C */ f32 brightness;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 fullBrightness;
    /* 0x32 */ u8 unk32[2];
    /* 0x34 */ f32 x;
    /* 0x38 */ f32 y;
    /* 0x3C */ f32 z;
    /* 0x40 */ u8 unk40[0x18];
    /* 0x58 */ f32 xOffset;
    /* 0x5C */ u8 unk5C[0x1C];
    /* 0x78 */ s32 enabled;
    /* 0x7C */ u8 unk7C[4];
    /* 0x80 */ TitleTexture *second;
    /* 0x84 */ u32 secondNode;
    /* 0x88 */ f32 secondAlpha;
    /* 0x8C */ u8 unk8C;
    /* 0x8D */ u8 secondUsesOwnAlpha;
};

extern "C" {

extern u32 g_titleScene;

TitleFadeWork *jobGetWork(void);
s32 FUN_002c1d5c(void);
void FUN_002c1b64(u32 scene, u32 texture);
void FUN_002ba1e0(u32 c0, u32 c1, u32 c2, u32 c3, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3, f32 u0, f32 v0, f32 u1, f32 v1,
                  f32 u2, f32 v2, f32 u3, f32 v3);

/* Grey level in the three high bytes, alpha in the low byte. */
static inline u32 greyAlphaColor(f32 grey, f32 alpha)
{
    u32 g = (u32)(grey * 255.0f);
    u32 a = (u32)(alpha * 255.0f);

    return a + g * 0x01010100;
}

/* Draws a quad of the given half size around (x, y) with the texture bound for it. */
static inline void drawOverlayQuad(TitleTexture *texture, u32 color, f32 x, f32 y, f32 z, f32 halfWidth, f32 halfHeight)
{
    f32 left = x - halfWidth;
    f32 right = x + halfWidth;
    f32 top = y + halfHeight;
    f32 bottom = y - halfHeight;

    FUN_002c1b64(g_titleScene, texture->handle);
    FUN_002ba1e0(color, color, color, color, left, top, z, left, bottom, z, right, top, z, right,
                 bottom, z, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f);
}

/* Draws the title fade overlay: the main sprite, then the secondary one when it is loaded. */
void FUN_001dbc5c(f32 xShift, f32 yShift)
{
    TitleFadeWork *work = jobGetWork();
    f32 x;
    f32 y;
    f32 z;
    f32 halfWidth;
    f32 halfHeight;
    f32 brightness;

    if (work->enabled == 0) {
        return;
    }
    if (work->alpha == 0.0f && work->second == NULL) {
        return;
    }
    if (FUN_002c1d5c() != 0 && FUN_002b8660() != 0) {
        return;
    }
    x = work->x + work->xOffset + xShift;
    y = work->y + yShift;
    z = work->z;
    halfWidth = work->halfWidth;
    halfHeight = work->halfHeight;
    if (work->fullBrightness != 0) {
        brightness = work->brightness;
    } else {
        brightness = work->brightness * 0.5f;
    }
    if (asdTMTexTableNodeIsLoaded(work->table, work->firstNode) != 0) {
        drawOverlayQuad(work->first, greyAlphaColor(brightness, work->alpha), x, y, z, halfWidth, halfHeight);
    }
    if (asdTMTexTableNodeIsLoaded(work->table, work->secondNode) != 0) {
        f32 alpha = work->secondAlpha;

        if (work->secondUsesOwnAlpha == 0) {
            alpha = work->alpha;
            if (asdTMTexTableNodeIsLoaded(work->table, work->firstNode) != 0) {
                return;
            }
        }
        drawOverlayQuad(work->second, greyAlphaColor(brightness, alpha), x, y, z, halfWidth, halfHeight);
    }
}

} /* extern "C" */
