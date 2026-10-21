/* NON_MATCHING: affinity-selection loop has different register allocation and loop comparison encoding. */
#include "common.h"

namespace {
struct AffinityRecord {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s16 affinities[8];
    /* 0x84 */ u8 unk84[0x14];
    /* 0x98 */ u16 order;
};
}

extern "C" {
AffinityRecord *dataTable08Sub2GetRecord(u32 id);
s32 FUN_0028886c(s32 left, s32 right);
extern s32 DAT_00402638[2];

/* Sorts records by their strongest affinity, then their table order. */
s32 FUN_002dcdd0(const u16 *left, const u16 *right)
{
    AffinityRecord *leftRecord = dataTable08Sub2GetRecord(*left);
    AffinityRecord *rightRecord = dataTable08Sub2GetRecord(*right);
    s32 leftAffinity = 0;
    s32 rightAffinity = 0;
    s32 leftIndex = DAT_00402638[0];
    s32 rightIndex = DAT_00402638[1];
    for (s32 index = 0; index < 8; index++) {
        if (FUN_0028886c(leftAffinity, leftRecord->affinities[index] >> 10) > 0) {
            leftIndex = index;
            leftAffinity = leftRecord->affinities[index] >> 10;
        }
        if (FUN_0028886c(rightAffinity, rightRecord->affinities[index] >> 10) > 0) {
            rightIndex = index;
            rightAffinity = rightRecord->affinities[index] >> 10;
        }
    }
    s32 difference = leftIndex - rightIndex;
    if (difference != 0) {
        return difference;
    }
    difference = FUN_0028886c(leftAffinity, rightAffinity);
    if (difference != 0) {
        return difference;
    }
    leftRecord = dataTable08Sub2GetRecord(*left);
    rightRecord = dataTable08Sub2GetRecord(*right);
    return leftRecord->order - rightRecord->order;
}
}
