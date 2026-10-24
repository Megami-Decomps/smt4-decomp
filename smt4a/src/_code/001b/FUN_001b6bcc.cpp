/* NON_MATCHING: retail tests the flag with bics against a hoisted 1 and lays the world-matrix branch between the guard test and the guard initializer; armcc here folds the test to tst and lays the branches out in source order. */
#include "common.h"
#include "nw/math/MTX34.h"

using nw::math::MTX34;

struct ModelRenderFlags {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 flags;
};

struct ModelRenderState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelRenderFlags *flags;
};

/* The model (the part this reads): its two transforms and its render state. */
struct ModelTransforms {
    /* 0x000 */ u8 unk000[0x8c];
    /* 0x08C */ MTX34 worldMatrix;
    /* 0x0BC */ u8 unk0bc[0x100];
    /* 0x1BC */ MTX34 viewMatrix;
    /* 0x1EC */ u8 unk1ec[0x34];
    /* 0x220 */ ModelRenderState *state;
};

struct ModelMatrixUploader {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ ModelTransforms *model;
};

extern "C" {
extern u32 *g_commandBufferCursor;
void FUN_001bc768(u32 *out, const void *matrix, u32 header);

// Emit a matrix upload command (register index, 12 floats) and advance the command buffer.
static inline void modelEmitMatrix(u32 index, const MTX34 *matrix)
{
    u32 *cursor = g_commandBufferCursor;
    cursor[0] = 0x80000000 | index;
    cursor[1] = 0xf02c0;
    FUN_001bc768(cursor + 2, matrix, 0xbf02c1);
    g_commandBufferCursor += 16;
}

// Upload the model's world matrix (the identity when its transform flag is clear) and view matrix.
void FUN_001b6bcc(ModelMatrixUploader *uploader, ModelTransforms *model)
{
    if ((~model->state->flags->flags & 1) == 0) {
        modelEmitMatrix(0, &model->worldMatrix);
    } else {
        modelEmitMatrix(0, &MTX34::Identity());
    }
    modelEmitMatrix(3, &model->viewMatrix);
    uploader->model = model;
}
}
