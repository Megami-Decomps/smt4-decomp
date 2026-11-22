/* NON_MATCHING: 130 lines (145 vs 125 rows): real renderCtxPackPassFlagsWithAlpha(6, 0.0f), DrawVec2 by-value pass, and renderStackPushCounted on stack A match; retail keeps the white color (1.0f * 255.0f) unfolded per entry while armcc folds it here. */
#include "common.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "code/Code0038.h"

extern "C" {
/* One drawn entry: the three words handed to the draw call and a placement record. */
typedef struct DrawEntry {
    /* 0x00 */ u32 model;
    /* 0x04 */ u32 variant;
    /* 0x08 */ u32 motion;
    /* 0x0C */ u32 unk0c;
} DrawEntry;

/* 2D draw coordinate pair passed by value. */
typedef struct DrawVec2 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
} DrawVec2;

/* A placement the entry is drawn with (0x1C bytes): a 2D position at 0xC is passed along. */
typedef struct DrawPlacement {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ DrawVec2 pos;
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


s32 renderCtxPackPassFlags(u32 kind, u32 arg);
void FUN_003fba4c(u32 model, u32 variant, u32 motion, DrawPlacement *placement, u32 color, u32 flags, DrawVec2 pos);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Packs four 0..1 components into a word, most significant byte first. */
static __inline u32 packColorBytes(f32 r, f32 g, f32 b, f32 a)
{
    u32 red = (u32)(r * 255.0f);
    u32 green = (u32)(g * 255.0f);
    u32 blue = (u32)(b * 255.0f);
    u32 alpha = (u32)(a * 255.0f);

    return alpha + (blue + (green + red * 256) * 256) * 256;
}

/* Draws each present entry of the group with its placement, under the draw states pushed on the
 * first and third render-state stacks, unless the group is in mode 1 or 2. */
void btlPartnerDrawEntries(DrawGroup *group, DrawEntrySource *source)
{
    if (group->mode == 1 || group->mode == 2) {
        return;
    }
    renderStackPushCounted(g_renderCtx->stacks + RENDER_STACK_A, renderCtxPackPassFlags(5, 1));
    renderStackPushCounted(g_renderCtx->stacks + RENDER_STACK_C, renderCtxPackPassFlagsWithAlpha(6, 0.0f));

    s32 drawn = 0;
    for (s32 i = 0; i < 12; i++) {
        if (source->entries[i].model != 0) {
            FUN_003fba4c(source->entries[i].model, source->entries[i].variant, source->entries[i].motion,
                         &group->placements[drawn], packColorBytes(1.0f, 1.0f, 1.0f, 1.0f), 0,
                         group->placements[drawn].pos);
            drawn++;
        }
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
