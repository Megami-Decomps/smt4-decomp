/* NON_MATCHING: the 4x4 matrix copy loads and stores through different VFP register groups (retail copies two eight-float blocks with vldmia/vstmia and patches the last column), and the two inlined state pops lay out differently. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* A draw packet (0x58 bytes): a flags word, two handles, a 4x4 matrix, an RGBA color and a pending
 * word that is cleared once consumed. */
typedef struct DrawPacket {
    /* 0x00 */ u16 flags;      /* 0x100: draw with state 5 instead of 1, 0x200: only the handle */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 handle;
    /* 0x08 */ u32 object;
    /* 0x0C */ u32 aux;
    /* 0x10 */ f32 matrix[16];
    /* 0x50 */ u8 color[4];
    /* 0x54 */ u32 pending;
} DrawPacket;

extern RenderCtx *g_titleScene;

s32 FUN_002c5d80(u32 kind, u32 arg);
void FUN_001f6b74(u32 aux);
void FUN_002c1b64(RenderCtx *ctx, u32 handle);
void camSetMatrixB(RenderCtx *ctx, const f32 *matrix);
void FUN_00343810(RenderCtx *ctx, f32 a, f32 b, f32 c, f32 d);
void FUN_002571e8(u32 mode);
void FUN_00347198(u32 object);
void FUN_0034724c(u32 object);
void FUN_002c18e4(RenderCtx *ctx);
void FUN_002c198c(RenderCtx *ctx);

/* Draws one packet under a pushed render state (5 or 1 by its flags): sets its camera matrix and
 * color, runs the draw and pops the state. */
void FUN_00256a50(DrawPacket *packet, u32 mode)
{
    RenderCtx *ctx = g_titleScene;

    if ((packet->flags & 0x100) != 0) {
        renderCtxPushA(ctx, FUN_002c5d80(5, 0));
    } else {
        renderCtxPushA(ctx, FUN_002c5d80(1, 0));
    }
    if ((packet->flags & 0x200) != 0) {
        FUN_001f6b74(packet->aux);
        renderStackPop(&g_titleScene->stackA);
    } else {
        FUN_002c1b64(g_titleScene, packet->handle);

        f32 matrix[16];
        for (s32 i = 0; i < 16; i++) {
            matrix[i] = packet->matrix[i];
        }
        matrix[3] = 0.0f;
        matrix[7] = 0.0f;
        matrix[11] = 0.0f;
        matrix[15] = 1.0f;
        camSetMatrixB(g_titleScene, matrix);

        f32 r = (f32)packet->color[3] * (1.0f / 255.0f);
        f32 g = (f32)packet->color[2] * (1.0f / 255.0f);
        f32 b = (f32)packet->color[1] * (1.0f / 255.0f);
        f32 a = (f32)packet->color[0] * (1.0f / 255.0f);
        FUN_00343810(g_titleScene, r * (1.0f / 255.0f), g * (1.0f / 255.0f), b * (1.0f / 255.0f),
                     a * (1.0f / 255.0f));
        FUN_002571e8(mode);
        if (packet->pending != 0) {
            FUN_00347198(packet->object);
            packet->pending = 0;
        }
        FUN_0034724c(packet->object);
        FUN_002c18e4(g_titleScene);
        FUN_002c198c(g_titleScene);
        renderStackPop(&g_titleScene->stackA);
    }
}

}
