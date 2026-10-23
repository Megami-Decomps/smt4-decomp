/* NON_MATCHING: packed-word load grouping and primary-parent comparison branch placement differ. */
#include "gamedata/PackedIdentifiers.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {
/* Compare result and both parent demons by race, descending level, ID and slot state. */
s32 FUN_002d0544(const PackedIdentifiers *packedLeft, const PackedIdentifiers *packedRight)
{
    /* Keep the public packed record's upper opaque bit field intact. */
    struct FusionOrderView {
        u64 firstIdentifier : 15;
        u64 secondIdentifier : 15;
        u64 firstState : 2;
        u64 secondState : 2;
        u64 resultIdentifier : 15;
        u64 unused : 15;
    };
    typedef char FusionOrderViewSize[sizeof(FusionOrderView) == sizeof(PackedIdentifiers) ? 1 : -1];
    const FusionOrderView *left = (const FusionOrderView *)packedLeft;
    const FusionOrderView *right = (const FusionOrderView *)packedRight;
    DevilSortRecord *leftRecord = devilGetRecord(left->resultIdentifier);
    DevilSortRecord *rightRecord = devilGetRecord(right->resultIdentifier);
    s32 difference = leftRecord->race - rightRecord->race;
    if (difference == 0) {
        difference = rightRecord->level - leftRecord->level;
        if (difference == 0)
            difference = u32(left->resultIdentifier) - u32(right->resultIdentifier);
    }
    leftRecord = devilGetRecord(left->firstIdentifier);
    rightRecord = devilGetRecord(right->firstIdentifier);
    if (difference == 0) {
        difference = leftRecord->race - rightRecord->race;
        if (difference == 0) {
            difference = rightRecord->level - leftRecord->level;
            if (difference == 0) {
                difference = u32(left->firstIdentifier) - u32(right->firstIdentifier);
                if (difference == 0)
                    difference = u32(left->firstState) - u32(right->firstState);
            }
        }
    }
    leftRecord = devilGetRecord(left->secondIdentifier);
    rightRecord = devilGetRecord(right->secondIdentifier);
    if (difference == 0) {
        difference = leftRecord->race - rightRecord->race;
        if (difference == 0) {
            difference = rightRecord->level - leftRecord->level;
            if (difference == 0) {
                difference = u32(left->secondIdentifier) - u32(right->secondIdentifier);
                if (difference == 0)
                    difference = u32(left->secondState) - u32(right->secondState);
            }
        }
    }
    return difference;
}
}
