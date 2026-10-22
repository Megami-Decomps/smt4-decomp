/* NON_MATCHING: Layer-adjusted radial-distance comparison is reconstructed; constant-zero subtraction is simplified and the two distance calculations are scheduled differently. */
#include "common.h"
#include <math.h>

struct DistanceSortEntry {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00C */ f32 x;
    /* 0x010 */ f32 y;
    /* 0x014 */ f32 z;
    /* 0x018 */ u8 unk018[0xf8];
    /* 0x110 */ s32 layer;
};

static inline f32 distanceSortKey(const DistanceSortEntry *entry)
{
    f32 x = 0.0f - entry->x;
    f32 y = 0.0f - entry->y;
    f32 z = 0.0f - (entry->z + entry->layer * 10.0f);
    return sqrtf(x * x + y * y + z * z) * 100.0f;
}

/* Compare radial distances with each layer offset ten units along Z. */
extern "C" s32 FUN_00221b34(const DistanceSortEntry *const *left,
                             const DistanceSortEntry *const *right)
{
    return static_cast<s32>(distanceSortKey(*left) - distanceSortKey(*right));
}
