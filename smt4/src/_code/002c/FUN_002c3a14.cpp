/* NON_MATCHING: retail compares the colour scale and identity matrix with vcmp against a register copy of 1.0 and does not unroll the stack-dirty loop; this version compares equality of the float bit patterns (armcc turns == 1.0f into an integer compare), so the instruction counts differ. The stores, calls and loops are the same. */
#include "camp/RenderCtx.h"

namespace {
/* One combiner stage (24 bytes) of the texture combiner setup. */
struct CombinerStage {
    u8 data[24];
};

/* The context's shared header bytes and floats, addressed by offset. */
static inline u32 &ctxWord(RenderCtx *ctx, u32 offset)
{
    return *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(ctx) + offset);
}

static inline u8 &ctxByte(RenderCtx *ctx, u32 offset)
{
    return *(reinterpret_cast<u8 *>(ctx) + offset);
}

static inline f32 &ctxFloat(RenderCtx *ctx, u32 offset)
{
    return *reinterpret_cast<f32 *>(reinterpret_cast<u8 *>(ctx) + offset);
}

/* Whether the 4x4 matrix is the identity. */
static bool isIdentity(const f32 *m)
{
    return m[0] == 1.0f && m[1] == 0.0f && m[2] == 0.0f && m[3] == 0.0f && m[4] == 0.0f && m[5] == 1.0f &&
           m[6] == 0.0f && m[7] == 0.0f && m[8] == 0.0f && m[9] == 0.0f && m[10] == 1.0f && m[11] == 0.0f &&
           m[12] == 0.0f && m[13] == 0.0f && m[14] == 0.0f && m[15] == 1.0f;
}
}

extern "C" {
void FUN_00126d14(u32 shader);
void FUN_002b634c(u32 shader, void *colors);
void modelCmdAppendPacked(u32 a, u32 b, u32 c, u32 d);
void mathCopyIdentityMatrix(void *matrix);
void FUN_002bbbc8(RenderCtx *ctx, void *a, void *b, void *matrix);
void FUN_002bbb74(u32 shader, void *block);
void FUN_002b612c(CombinerStage *stages);
void nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(CombinerStage *stage);
void nn_gr_CTR_Combiner_Stage_SetupPrevious(CombinerStage *stage);
u32 FUN_002b7148(void);
u32 nn_gr_CTR_Combiner_MakeCommand(CombinerStage *stages, u32 buffer);
void FUN_002af390(u32 buffer, u32 command);

/* Prepares the draw context for a frame: resets the colour scale and the model matrices when they changed,
   rebuilds the six-stage texture combiner (primary modulated by texture 0, the rest passing the previous stage
   through) and re-applies the twelve render-state stacks' current states. */
void FUN_002c3a14(RenderCtx *ctx)
{
    CombinerStage stages[6];
    ctxByte(ctx, 0x11e8) = 1;
    ctxByte(ctx, 0x11e9) = 3;
    ctxByte(ctx, 0x5b0) = 1;
    ctxByte(ctx, 0x11dc) = 1;
    ctxByte(ctx, 0x11e1) = 1;
    ctxByte(ctx, 0x5f4) = 0;
    for (s32 i = 0; i < 12; i++) {
        ctxByte(ctx, i * 0x20 + 0x1204) = 1;
    }
    FUN_00126d14(ctxWord(ctx, 0x52c));
    if (ctxByte(ctx, 0x11dc) != 0 || ctxFloat(ctx, 0x11cc) != 1.0f || ctxFloat(ctx, 0x11d0) != 1.0f ||
        ctxFloat(ctx, 0x11d4) != 1.0f || ctxFloat(ctx, 0x11d8) != 1.0f) {
        ctxFloat(ctx, 0x11cc) = 1.0f;
        ctxFloat(ctx, 0x11d0) = 1.0f;
        ctxFloat(ctx, 0x11d4) = 1.0f;
        ctxFloat(ctx, 0x11d8) = 1.0f;
        FUN_002b634c(ctxWord(ctx, 0x52c), reinterpret_cast<u8 *>(ctx) + 0x11cc);
    }
    ctxByte(ctx, 0x11dc) = 0;
    if (ctxByte(ctx, 0x11e1) != 0 || ctxByte(ctx, 0x11dd) != 0 || ctxByte(ctx, 0x11de) != 0 ||
        ctxByte(ctx, 0x11df) != 0 || ctxByte(ctx, 0x11e0) != 0) {
        modelCmdAppendPacked(0, 0, 0, 0);
    }
    if (ctxByte(ctx, 0x5b0) != 0 || !isIdentity(&ctxFloat(ctx, 0x530))) {
        mathCopyIdentityMatrix(reinterpret_cast<u8 *>(ctx) + 0x530);
        mathCopyIdentityMatrix(reinterpret_cast<u8 *>(ctx) + 0x570);
        FUN_002bbbc8(ctx, reinterpret_cast<u8 *>(ctx) + 0x114c, reinterpret_cast<u8 *>(ctx) + 0x110c,
                     reinterpret_cast<u8 *>(ctx) + 0x530);
        FUN_002bbb74(ctxWord(ctx, 0x52c), reinterpret_cast<u8 *>(ctx) + 0x118c);
        ctxByte(ctx, 0x5b0) = 0;
    }
    ctxWord(ctx, 0x1128) = ctxWord(ctx, 0x5d0);
    ctxWord(ctx, 0x1114) = ctxWord(ctx, 0x5bc);
    ctxWord(ctx, 0x1118) = ctxWord(ctx, 0x5c0);
    ctxWord(ctx, 0x111c) = ctxWord(ctx, 0x5c4);
    ctxWord(ctx, 0x1120) = ctxWord(ctx, 0x5c8);
    ctxWord(ctx, 0x1124) = ctxWord(ctx, 0x5cc);
    ctxWord(ctx, 0x110c) = ctxWord(ctx, 0x5b4);
    ctxWord(ctx, 0x1110) = ctxWord(ctx, 0x5b8);
    ctxWord(ctx, 0x112c) = ctxWord(ctx, 0x5d4);
    ctxWord(ctx, 0x1130) = ctxWord(ctx, 0x5d8);
    ctxWord(ctx, 0x1134) = ctxWord(ctx, 0x5dc);
    ctxWord(ctx, 0x1138) = ctxWord(ctx, 0x5e0);
    ctxWord(ctx, 0x113c) = ctxWord(ctx, 0x5e4);
    ctxWord(ctx, 0x1140) = ctxWord(ctx, 0x5e8);
    ctxWord(ctx, 0x114c) = ctxWord(ctx, 0x5b4);
    ctxWord(ctx, 0x1150) = ctxWord(ctx, 0x5b8);
    ctxWord(ctx, 0x1144) = ctxWord(ctx, 0x5ec);
    ctxWord(ctx, 0x1148) = ctxWord(ctx, 0x5f0);
    ctxWord(ctx, 0x1154) = ctxWord(ctx, 0x5bc);
    ctxWord(ctx, 0x1158) = ctxWord(ctx, 0x5c0);
    ctxWord(ctx, 0x115c) = ctxWord(ctx, 0x5c4);
    ctxWord(ctx, 0x1160) = ctxWord(ctx, 0x5c8);
    ctxWord(ctx, 0x1168) = ctxWord(ctx, 0x5d0);
    ctxWord(ctx, 0x1164) = ctxWord(ctx, 0x5cc);
    ctxWord(ctx, 0x116c) = ctxWord(ctx, 0x5d4);
    ctxWord(ctx, 0x1170) = ctxWord(ctx, 0x5d8);
    ctxWord(ctx, 0x1174) = ctxWord(ctx, 0x5dc);
    ctxWord(ctx, 0x1178) = ctxWord(ctx, 0x5e0);
    ctxWord(ctx, 0x117c) = ctxWord(ctx, 0x5e4);
    ctxWord(ctx, 0x1180) = ctxWord(ctx, 0x5e8);
    ctxWord(ctx, 0x1184) = ctxWord(ctx, 0x5ec);
    ctxWord(ctx, 0x1188) = ctxWord(ctx, 0x5f0);
    FUN_002b612c(stages);
    nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(&stages[0]);
    for (s32 i = 1; i < 6; i++) {
        nn_gr_CTR_Combiner_Stage_SetupPrevious(&stages[i]);
    }
    u32 buffer = FUN_002b7148();
    FUN_002af390(buffer, nn_gr_CTR_Combiner_MakeCommand(stages, buffer));
    RenderStateStack *stacks = reinterpret_cast<RenderStateStack *>(reinterpret_cast<u8 *>(ctx) + 0x11ec);
    for (s32 i = 0; i < 12; i++) {
        renderStackSet(&stacks[i], ctxWord(ctx, 0x136c + i * 4));
    }
}

} /* extern "C" */
