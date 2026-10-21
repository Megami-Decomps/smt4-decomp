#include "common.h"

struct WeightedEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 weight;
};

/* Compares the entries' floating-point weights. */
extern "C" s32 sortCompareWeightDescending(const WeightedEntry *left, const WeightedEntry *right)
{
    return (s32)(right->weight - left->weight);
}
