/* NON_MATCHING: identical code; the literal pool order differs (retail pools 0xf02c0 before the command cursor's address, this build the reverse). */
#include "common.h"
#include "nw/math/MTX34.h"

using nw::math::MTX34;

/* The model (the part this reads): its view matrix. */
struct ModelView {
    /* 0x000 */ u8 unk000[0x1BC];
    /* 0x1BC */ MTX34 viewMatrix;
};

struct ModelMatrixUploader {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ ModelView *model;
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

// Upload the identity as the world matrix and the model's view matrix.
void FUN_001b6ae0(ModelMatrixUploader *uploader, ModelView *model)
{
    modelEmitMatrix(0, &MTX34::Identity());
    modelEmitMatrix(3, &model->viewMatrix);
    uploader->model = model;
}
}
