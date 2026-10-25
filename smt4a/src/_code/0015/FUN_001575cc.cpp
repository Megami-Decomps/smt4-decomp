/* NON_MATCHING: pointer registers are swapped (retail keeps the context in r5 and ctx+0x1000 in r4) and the colour-scale / packed-flag checks are compiled as separate float compares with a copied constant in retail, as conditional chains here */
#include "gfx/RenderStateStack.h"
#include "nw/math/MTX44.h"
#include "shard/W6_W6Match7_CombinerState.h"
#include "quest_center/qcMain.h"
#include "shard/FUN_00169db4.h"

using nw::math::MTX44;

/* The render context as the frame reset sees it: its colour-scale and projection state, the
   twelve render-state stacks and the values queued for them. */
struct GxResetContext {
    /* 0x0000 */ u8 unk0000[0x52c];
    /* 0x052C */ u32 viewport;
    /* 0x0530 */ u32 colorTarget;
    /* 0x0534 */ MTX44 projection;
    /* 0x0574 */ MTX44 projectionPrevious;
    /* 0x05B4 */ u8 projectionDirty;
    /* 0x05B5 */ u8 unk05B5[3];
    /* 0x05B8 */ MTX44 transform;
    /* 0x05F8 */ u8 transformDirty;
    /* 0x05F9 */ u8 unk05F9[0xb1f];
    /* 0x1118 */ MTX44 transformA;
    /* 0x1158 */ MTX44 transformB;
    /* 0x1198 */ MTX44 transformC;
    /* 0x11D8 */ f32 colorScale[4];
    /* 0x11E8 */ u8 colorScaleDirty;
    /* 0x11E9 */ u8 packedFlags[4];
    /* 0x11ED */ u8 packedFlagFirst;
    /* 0x11EE */ u8 unk11EE[6];
    /* 0x11F4 */ u8 mode;
    /* 0x11F5 */ u8 submode;
    /* 0x11F6 */ u8 unk11F6[2];
    /* 0x11F8 */ RenderStateStack stacks[12];
    /* 0x1378 */ u32 pending[9];
};

extern "C" {
void FUN_0016c744(u32 target);
void FUN_0019f828(u32 target, f32 *colorScale);
void modelCmdAppendPacked(s32 a, s32 b, s32 c, s32 d);
void mathCopyIdentityMatrix(MTX44 *matrix);
void FUN_00187a84(GxResetContext *context, MTX44 *destinationB, MTX44 *destinationA, const MTX44 *projection);
void FUN_00187d90(u32 target, MTX44 *matrix);
void FUN_00158b88(CombinerState *state);
void FUN_00158b2c(CombinerStage *stage);
u32 *asdGxGetCommandCursor(void);
u32 *FUN_0015fcec(CombinerState *state, u32 *cursor);
void asdModelCommitCommandRange(u32 *begin, u32 *end);
s32 renderCtxSetMirroredScissorRect(s32 x, s32 y, s32 width, s32 height);

static __inline bool sameValue(f32 value, f32 expected)
{
    return value == expected;
}

/* Whether every element of the matrix is the identity's. */
static __inline bool isIdentity(const MTX44 *m)
{
    return m->m[0][0] == 1.0f && m->m[0][1] == 0.0f && m->m[0][2] == 0.0f && m->m[0][3] == 0.0f &&
           m->m[1][0] == 0.0f && m->m[1][1] == 1.0f && m->m[1][2] == 0.0f && m->m[1][3] == 0.0f &&
           m->m[2][0] == 0.0f && m->m[2][1] == 0.0f && m->m[2][2] == 1.0f && m->m[2][3] == 0.0f &&
           m->m[3][0] == 0.0f && m->m[3][1] == 0.0f && m->m[3][2] == 0.0f && m->m[3][3] == 1.0f;
}

/* Brings the GPU state back to its defaults for a new frame: marks every render-state stack
   dirty, resets the colour scale and projection, re-uploads the combiner and pushes the queued
   stack values; the scissor ends up covering the whole viewport. */
s32 FUN_001575cc(GxResetContext *context)
{
    context->mode = 1;
    context->submode = 3;
    context->projectionDirty = 1;
    context->colorScaleDirty = 1;
    context->packedFlagFirst = 1;
    context->transformDirty = 0;
    for (s32 i = 0; i < 12; i += 2) {
        context->stacks[i].dirty = 1;
        context->stacks[i + 1].dirty = 1;
    }
    FUN_0016c744(context->colorTarget);

    f32 unit = 1.0f;
    if (context->colorScaleDirty != 0 || !sameValue(context->colorScale[0], unit) ||
        !sameValue(context->colorScale[1], unit) || !sameValue(context->colorScale[2], unit) ||
        !sameValue(context->colorScale[3], unit)) {
        context->colorScale[0] = unit;
        context->colorScale[1] = unit;
        context->colorScale[2] = unit;
        context->colorScale[3] = unit;
        FUN_0019f828(context->colorTarget, context->colorScale);
    }
    context->colorScaleDirty = 0;
    if (context->packedFlagFirst != 0 || context->packedFlags[0] != 0 || context->packedFlags[1] != 0 ||
        context->packedFlags[2] != 0 || context->packedFlags[3] != 0) {
        modelCmdAppendPacked(0, 0, 0, 0);
    }

    if (context->projectionDirty != 0 || !isIdentity(&context->projection)) {
        mathCopyIdentityMatrix(&context->projection);
        mathCopyIdentityMatrix(&context->projectionPrevious);
        FUN_00187a84(context, &context->transformB, &context->transformA, &context->projection);
        FUN_00187d90(context->colorTarget, &context->transformC);
        context->projectionDirty = 0;
    }
    context->transformA = context->transform;
    context->transformB = context->transform;

    CombinerState combiner;
    gfxCombinerStateInitialize(&combiner);
    FUN_00158b88(&combiner);
    FUN_00158b2c(&combiner.stages[1]);
    FUN_00158b2c(&combiner.stages[2]);
    FUN_00158b2c(&combiner.stages[3]);
    FUN_00158b2c(&combiner.stages[4]);
    FUN_00158b2c(&combiner.stages[5]);
    u32 *cursor = asdGxGetCommandCursor();
    asdModelCommitCommandRange(cursor, FUN_0015fcec(&combiner, cursor));

    for (s32 i = 0; i < 9; i++) {
        renderStackSet(&context->stacks[i & 0xff], context->pending[i]);
    }
    u32 viewport = context->viewport;
    return renderCtxSetMirroredScissorRect(0, 0, FUN_00169d8c(viewport), FUN_00169db4(viewport));
}
}
