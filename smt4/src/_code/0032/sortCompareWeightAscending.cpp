#include "common.h"

struct WeightedEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 weight;
};

/* Compares the entries' floating-point weights. */
extern "C" s32 sortCompareWeightAscending(const void *leftData, const void *rightData)
{
    const WeightedEntry *left = (const WeightedEntry *)leftData;
    const WeightedEntry *right = (const WeightedEntry *)rightData;
    return (s32)(left->weight - right->weight);
}
