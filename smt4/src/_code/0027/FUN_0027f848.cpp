/* NON_MATCHING: retail indexes the 0x38-byte models from the block start (active at +0xC with writeback, flag at +0x38); with the 4-byte header armcc adds #4 first, and the constant/VFP setup order differs. */
#include "shard/W6_W6Match6_CollisionQuad.h"

extern "C" {

/* One deferred map model; the position is its collision circle's center. */
typedef struct DeferredMapModel {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ CollisionVector position;
    /* 0x18 */ u8 unk18[0x1C];
    /* 0x34 */ s32 pointLike;
} DeferredMapModel;

typedef struct DeferredMapModels {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ DeferredMapModel models[64];
} DeferredMapModels;

extern DeferredMapModels *g_deferredMapModels;
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first, f32 firstRadius,
                               CollisionVector second, f32 secondRadius);
void FUN_001e2a40(CollisionVector *result, CollisionVector position);

/* Pushes `position` (radius 50) out of every active deferred model's circle (radius 20, or 0 for point-like ones);
 * returns whether any overlap moved it. */
bool FUN_0027f848(CollisionVector *out, CollisionVector position)
{
    CollisionVector result;
    bool moved = false;

    for (s32 i = 0; i < 64; i++) {
        DeferredMapModel *model = &g_deferredMapModels->models[i];
        if (model->active) {
            bool hit;
            if (model->pointLike != 0) {
                hit = mapResolveCircleOverlapXZ(&result, position, 50.0f, model->position, 0.0f);
            } else {
                hit = mapResolveCircleOverlapXZ(&result, position, 50.0f, model->position, 20.0f);
            }
            if (hit) {
                position = result;
                moved = true;
            }
        }
    }
    FUN_001e2a40(&result, position);
    *out = result;
    return moved;
}

} /* extern "C" */
