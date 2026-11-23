/* NON_MATCHING: 213 raw / 155 shape lines; the instructions agree and the registers differ: retail keeps the zero in fp and the colour and draw slot in sl (the build swaps them, turning two `str` into `strd`), the board x in r6 where the build reuses r5, and orders its float constants s18/s21-s23 differently. All three pushes use the one counted push with the apply test written out (renderStackPushCountedDirect); mixing in the shared-predicate push for the blend pushes scored 225 and was rejected as two spellings chosen by score. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtxSelect.h"
#include "gfx/StereoParallax.h"
#include "frame_tex/FrameTexA.h"
#include "shard/TextureDrawCall.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The CAMP transition's texture table and its entries. */
enum {
    CAMP_TABLE = 20,
    CAMP_BOARD_POINT_FIRST = 0x7D5, /* where each of the 24 tiles sits */
    CAMP_BACK = 2000,
    CAMP_GRID_CELL = 0x7F2,
    CAMP_FRAME = 0x7F3,
    CAMP_FRAME_PART_FIRST = 0x7F4,
    CAMP_FRAME_PART_COUNT = 11,
    CAMP_GRID_COLUMNS = 13,
    CAMP_GRID_ROWS = 9,
    CAMP_GRID_CELL_SIZE = 32,
    CAMP_TILE_COUNT = 24,
    CAMP_DRAW_SLOT = 11
};

extern "C" {

bool mapMainIsIdle(void);
f32 FUN_001a9698(f32 base, f32 exponent);
void FUN_0019e3d0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

/* Draws the CAMP capture (the right one when drawing the right screen and it exists) as a screen-sized quad
   at `x`: frameTexDrawXfadeCapture's body with the capture scaled down by the work surface's factor.
   Retail reads g_frameTex again at its start while the caller's copy is live. */
static __inline void frameTexDrawCampCapture(s32 mode, s32 x)
{
    FrameTexWorkA *work = g_frameTex;
    const f32 top = 0.0f;
    const f32 bottom = 240.0f;
    const f32 depth = 0.0f;
    const f32 screenWidth = 400.0f;
    f32 left = (f32)x;
    u32 color = 0xFFFFFFFF;
    f32 logicalWidth = 240.0f;
    if (work->campCaptureResult == 0)
        logicalWidth = 480.0f;
    f32 scale = FUN_001a9698(2.0f, 1.0f);
    f32 height = screenWidth / scale;
    f32 width = logicalWidth / scale;
    AsdTexture *target;
    if (mode == 0 && work->campCapturedRight) {
        target = work->surfaceRight;
    } else {
        target = work->surfaceLeft;
    }
    /* Retail reads the size before marking the target filtered. */
    f32 v = height / (f32)target->dimensions.height;
    f32 u = width / (f32)target->dimensions.width;
    target->filterX = 1;
    target->filterY = 1;
    renderCtxSelectTexture(g_renderCtx, target);
    FUN_0019e3d0(color, color, color, color,
        left, top, depth, left + screenWidth, top, depth,
        left, bottom, depth, left + screenWidth, bottom, depth,
        u, 0.0f, u, v, 0.0f, 0.0f, 0.0f, v);
}

/* Draws the CAMP transition for one eye: the captured frame while the map is idle, then the backdrop,
   the grid, the frame and the 24 board tiles, each layer shifted by its own stereo parallax. */
void frameTexDrawCampTransition(s32 mode)
{
    FrameTexWorkA *work = g_frameTex;
    if (work == NULL || work->value == 0) {
        return;
    }
    renderCtxPushACountedDirect(g_renderCtx, renderCtxPackPassFlags(1, 0));
    RenderCtxA *context = g_renderCtx;
    s32 blend = packNibblesAndByte(6, 7, 0);
    renderStackPushCountedDirect(context->stacks + RENDER_STACK_B, blend);
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);

    s32 backX = (s32)renderCtxCalculateStereoParallax(g_renderCtx, work->campWidthScale);
    if (mapMainIsIdle()) {
        frameTexDrawCampCapture(mode, backX);
    }
    efctSetSpeed(vec2GetSpeed(&work->campWidgets[0]));
    texDrawTableEntryAtStoredOrigin(2, CAMP_TABLE, CAMP_BACK, backX, 0, CAMP_DRAW_SLOT);
    efctSetSpeed(1.0f);

    s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, work->campHeightScale);
    efctSetSpeed(vec2GetSpeed(&work->campWidgets[2]));
    for (s32 row = 0; row < CAMP_GRID_ROWS; row++) {
        for (s32 column = 0; column < CAMP_GRID_COLUMNS; column++) {
            texDrawTableEntryAtStoredOrigin(2, CAMP_TABLE, CAMP_GRID_CELL, x + column * CAMP_GRID_CELL_SIZE,
                                            row * CAMP_GRID_CELL_SIZE, CAMP_DRAW_SLOT);
        }
    }
    texDrawTableEntryAtStoredOrigin(2, CAMP_TABLE, CAMP_FRAME, x, 0, CAMP_DRAW_SLOT);
    for (s32 part = 0; part < CAMP_FRAME_PART_COUNT; part++) {
        texDrawTableEntryAtStoredOrigin(2, CAMP_TABLE, CAMP_FRAME_PART_FIRST + part, x, 0, CAMP_DRAW_SLOT);
    }
    efctSetSpeed(1.0f);

    for (s32 tile = 0; tile < CAMP_TILE_COUNT; tile++) {
        TextureTableEntryIV *point = asdTMTexTableEntryAt(CAMP_TABLE, CAMP_BOARD_POINT_FIRST + tile);
        s32 tileX = point->x + x;
        s32 tileY = point->y;
        efctSetSpeed(vec2GetSpeed(&work->campWidgets[3]) * frameTexCampTileAlpha(&work->campBoard, tile));
        texDrawTableEntryAtStoredOrigin(2, CAMP_TABLE, work->campBoard.tileImages[tile], x + tileX, tileY,
                                        CAMP_DRAW_SLOT);
    }
    efctSetSpeed(1.0f);

    context = g_renderCtx;
    blend = packNibblesAndByte(6, 1, 0);
    renderStackPushCountedDirect(context->stacks + RENDER_STACK_B, blend);
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_B);
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_B);
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_A);
}

} /* extern "C" */
