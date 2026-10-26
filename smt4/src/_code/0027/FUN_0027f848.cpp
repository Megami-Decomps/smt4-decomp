/* NON_MATCHING: model layout (block offsets 0xC/0x1C, writeback ldrb [r0,#12]!) and control flow match retail; only VFP register numbering of the position saves/radius constants, `mov r0,sp` placement differ (same residue as smt4a FUN_002469d0). */
#include "shard/W6_W6Match6_CollisionQuad.h"

extern "C" {

/* One deferred map model; the position is its collision circle's center. */
typedef struct DeferredMapModel {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ CollisionVector position;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ s32 pointLike;
    /* 0x30 */ u8 unk30[8];
} DeferredMapModel;

typedef struct DeferredMapModels {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ DeferredMapModel models[64];
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
            if (model->pointLike != 0) {
                if (mapResolveCircleOverlapXZ(&result, position, 50.0f, model->position, 0.0f)) {
                    position = result;
                    moved = true;
                }
            } else {
                if (mapResolveCircleOverlapXZ(&result, position, 50.0f, model->position, 20.0f)) {
                    position = result;
                    moved = true;
                }
            }
        }
    }
    FUN_001e2a40(&result, position);
    *out = result;
    return moved;
}

} /* extern "C" */
