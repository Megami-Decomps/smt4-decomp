/* NON_MATCHING: only final reset registers and the 4.0f literal load differ; all coordinate lookups, conversions and extrapolation match. */
#include "shard/W6_W6Match3_PointDifference.h"
#include "shard/W6_W6Match7_TextureTransform.h"
#include <stddef.h>

namespace {
struct BattleUiAnchorPair {
    TextureTransformVector2 first;
    TextureTransformVector2 second;
};
struct BattleUiLayoutWork {
    u8 drawData[0x2F4];
    s32 state;
    s32 firstIndex;
    s32 secondIndex;
    TextureTransformVector2 origin;
    TextureTransformVector2 steps[4];
    BattleUiAnchorPair pairedAnchors[4];
    TextureTransformVector2 targets[4];
    f32 upperY;
    f32 lowerY;
    s32 visibleCount;
    f32 scale;
    f32 offset[3];
};
typedef char BattleUiLayoutOffsetsCheck[offsetof(BattleUiLayoutWork, pairedAnchors) == 0x328 &&
    offsetof(BattleUiLayoutWork, targets) == 0x368 && sizeof(BattleUiLayoutWork) == 0x3A4 ? 1 : -1];
}

extern "C" {
const PointLookupRecord *FUN_002bf4f8(s32 group, s32 index);
void memClear(void *memory, u32 size);

void FUN_0033cf30(BattleUiLayoutWork *work)
{
    for (s32 i = 0; i < 4; ++i) {
        const PointLookupRecord *point = FUN_002bf4f8(0x14, i + 0x59);
        work->pairedAnchors[i].first.x = point->x;
        work->pairedAnchors[i].first.y = point->y;
        point = FUN_002bf4f8(0x14, i + 0x5D);
        work->pairedAnchors[i].second.x = point->x;
        work->pairedAnchors[i].second.y = point->y;
    }
    const PointLookupRecord *origin = FUN_002bf4f8(0x14, 0x61);
    work->origin.x = origin->x;
    work->origin.y = origin->y;
    for (s32 i = 0; i < 3; ++i) {
        const PointLookupRecord *point = FUN_002bf4f8(0x14, 100 - i);
        work->steps[i].x = point->x;
        work->steps[i].y = point->y;
    }
    work->steps[3].y = work->steps[2].y;
    work->steps[3].x = (work->steps[2].x - work->steps[1].x) + work->steps[2].x;
    for (s32 i = 0; i < 4; ++i) {
        const PointLookupRecord *point = FUN_002bf4f8(0x14, i + 0x65);
        work->targets[i].x = point->x;
        work->targets[i].y = point->y;
    }
    work->lowerY = FUN_002bf4f8(0x14, 0x6A)->y;
    work->upperY = FUN_002bf4f8(0x14, 0x69)->y;
    memClear(work->drawData, sizeof(work->drawData));
    work->firstIndex = -1;
    work->state = 0;
    work->secondIndex = -1;
    work->offset[0] = 0.0f;
    work->offset[1] = 0.0f;
    work->offset[2] = 0.0f;
    work->scale = 4.0f;
    work->visibleCount = 4;
}
}
