/* NON_MATCHING: retail keeps the white color unfolded (1.0f * 255.0f converted four times per entry, constants hoisted into s16/s17); armcc folds the all-white pack to a constant here, so the loop body differs. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* One drawn entry: the three words handed to the draw call and a placement record. */
typedef struct DrawEntry {
    /* 0x00 */ u32 model;
    /* 0x04 */ u32 variant;
    /* 0x08 */ u32 motion;
    /* 0x0C */ u32 unk0c;
} DrawEntry;

/* A placement the entry is drawn with (0x1C bytes): two floats at 0xC and 0x10 are passed along. */
typedef struct DrawPlacement {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ u8 unk14[8];
} DrawPlacement;

/* The work record the entries and placements hang off. */
typedef struct DrawGroup {
    /* 0x00 */ s32 mode;
    /* 0x04 */ u8 unk04[0x30];
    /* 0x34 */ DrawPlacement placements[12];
} DrawGroup;

/* The block holding the 12 entry slots at 0x4D78. */
typedef struct DrawEntrySource {
    /* 0x0000 */ u8 unk0000[0x4D78];
    /* 0x4D78 */ DrawEntry entries[12];
} DrawEntrySource;

extern RenderCtxA *g_renderCtx;

s32 FUN_001692ac(u32 kind, u32 arg);
s32 FUN_00387580(u32 kind);
void FUN_003fba4c(u32 model, u32 variant, u32 motion, DrawPlacement *placement, u32 color, u32 flags, f32 x, f32 y);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Packs four 0..1 components into a word, most significant byte first. */
static u32 packColorBytes(f32 r, f32 g, f32 b, f32 a)
{
    u32 red = (u32)(r * 255.0f);
    u32 green = (u32)(g * 255.0f);
    u32 blue = (u32)(b * 255.0f);
    u32 alpha = (u32)(a * 255.0f);

    return alpha + (blue + (green + red * 256) * 256) * 256;
}

/* Draws each present entry of the group with its placement, under the draw states pushed on the
 * first and third render-state stacks, unless the group is in mode 1 or 2. */
void FUN_00411458(DrawGroup *group, DrawEntrySource *source)
{
    RenderCtxA *context = g_renderCtx;

    if (group->mode == 1 || group->mode == 2) {
        return;
    }
    renderCtxPushA(context, FUN_001692ac(5, 1));
    context = g_renderCtx;
    renderStackPush(&context->additional.stackC, FUN_00387580(6));

    s32 drawn = 0;
    for (s32 i = 0; i < 12; i++) {
        DrawEntry *entry = &source->entries[i];

        if (entry->model != 0) {
            FUN_003fba4c(entry->model, entry->variant, entry->motion, &group->placements[drawn],
                         packColorBytes(1.0f, 1.0f, 1.0f, 1.0f), 0, group->placements[drawn].x,
                         group->placements[drawn].y);
            drawn++;
        }
    }
    renderStackPop(&g_renderCtx->additional.stackC);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
