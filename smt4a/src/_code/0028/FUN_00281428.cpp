/* NON_MATCHING: VFP register assignment and the packing of the vertex colour differ (retail loads the half-size with one vldmia into s17/s18 and keeps the shift in s19/s16); same loads, conversions and the two FUN_0019e3d0 quads. */
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

namespace {
/* A texture slot; the object it points at is at +8. */
struct QuadTextureSlot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AsdTexture *texture;
};

/* The job's work block as the quad drawer reads it. */
struct QuadWork {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ QuadTextureSlot *slot;
    /* 0x10 */ u32 table;                /* texture table the nodes below are looked up in */
    /* 0x14 */ u32 node;
    /* 0x18 */ u8 unk18[4];
    /* 0x1c */ f32 halfWidth;
    /* 0x20 */ f32 halfHeight;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ f32 fade;
    /* 0x2c */ f32 alpha;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 solid;                 /* alpha is used as it is; otherwise it is halved */
    /* 0x32 */ u8 unk32[2];
    /* 0x34 */ f32 x;
    /* 0x38 */ f32 y;
    /* 0x3c */ f32 depth;
    /* 0x40 */ u8 unk40[0x18];
    /* 0x58 */ f32 offsetX;
    /* 0x5c */ u8 unk5c[0x1c];
    /* 0x78 */ s32 enabled;
    /* 0x7c */ u8 unk7c[4];
    /* 0x80 */ QuadTextureSlot *overlaySlot;
    /* 0x84 */ u32 overlayNode;
    /* 0x88 */ f32 overlayFade;
    /* 0x8c */ u8 unk8c;
    /* 0x8d */ u8 overlayUsesFade;
    /* 0x8e */ u8 unk8e[2];
    /* 0x90 */ f32 shiftX;
    /* 0x94 */ f32 shiftY;
};
}

extern "C" {
extern RenderCtxA *g_renderCtx;
QuadWork *jobGetWork(void);
s32 FUN_00162ea4(void);
void FUN_0019e3d0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

/* Draws the job's texture (and its overlay) as a quad centred on its position, shifted by (offsetX, offsetY);
   the vertex colour carries the alpha and the fade. */
void FUN_00281428(f32 offsetX, f32 offsetY)
{
    QuadWork *work = jobGetWork();
    if (work->enabled == 0) {
        return;
    }
    if (work->fade == 0.0f && work->overlaySlot == NULL) {
        return;
    }
    if (FUN_00162ea4() != 0 && engineCleanupIsDone() != 0) {
        return;
    }
    f32 centerX = (work->x + work->offsetX) + (work->shiftX + offsetX);
    f32 centerY = (work->y + work->shiftY) + offsetY;
    f32 depth = work->depth;
    f32 halfWidth = work->halfWidth;
    f32 halfHeight = work->halfHeight;
    f32 alpha;
    if (work->solid != 0) {
        alpha = work->alpha;
    } else {
        alpha = work->alpha * 0.5f;
    }
    if (asdTMTexTableNodeIsLoaded(work->table, work->node) != 0) {
        AsdTexture *texture = work->slot->texture;
        halfWidth *= (f32)texture->dimensions.width * 0.001953125f;
        halfHeight *= (f32)texture->dimensions.height * 0.001953125f;
        u32 high = (u32)(alpha * 255.0f);
        u32 low = (u32)(work->fade * 255.0f);
        u32 color = (high << 24) | (high << 16) | (high << 8) | low;
        renderCtxSelectTexture(g_renderCtx, work->slot->texture);
        FUN_0019e3d0(color, color, color, color,
            centerX - halfWidth, centerY + halfHeight, depth,
            centerX - halfWidth, centerY - halfHeight, depth,
            centerX + halfWidth, centerY + halfHeight, depth,
            centerX + halfWidth, centerY - halfHeight, depth,
            0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f);
    }
    if (asdTMTexTableNodeIsLoaded(work->table, work->overlayNode) != 0) {
        f32 overlayFade = work->overlayFade;
        if (work->overlayUsesFade == 0) {
            overlayFade = work->fade;
            if (asdTMTexTableNodeIsLoaded(work->table, work->node) != 0) {
                return;
            }
        }
        u32 high = (u32)(alpha * 255.0f);
        u32 low = (u32)(overlayFade * 255.0f);
        u32 color = (high << 24) | (high << 16) | (high << 8) | low;
        renderCtxSelectTexture(g_renderCtx, work->overlaySlot->texture);
        FUN_0019e3d0(color, color, color, color,
            centerX - halfWidth, centerY + halfHeight, depth,
            centerX - halfWidth, centerY - halfHeight, depth,
            centerX + halfWidth, halfHeight + centerY, depth,
            centerX + halfWidth, centerY - halfHeight, depth,
            0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f);
    }
}

} /* extern "C" */
