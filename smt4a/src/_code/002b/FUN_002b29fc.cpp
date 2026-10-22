#include "shard/W6_W6Match8_DevilRecordA.h"

namespace {
struct DevilSecondarySortEntry {
    /* 0x00 */ u16 devilId;
    /* 0x02 */ u16 tableKey;
};
struct SecondarySortRecord {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 sortKey;
};
}
extern "C" {
SecondarySortRecord *FUN_00282b9c(u16 key);
s32 FUN_0023e60c(s32 key);

/* Sorts by the mapped secondary key, then race, descending level, and devil ID. */
s32 FUN_002b29fc(const DevilSecondarySortEntry *left, const DevilSecondarySortEntry *right)
{
    SecondarySortRecord *leftSecondary = FUN_00282b9c(left->tableKey);
    SecondarySortRecord *rightSecondary = FUN_00282b9c(right->tableKey);
    FUN_00184310(left->devilId);
    FUN_00184310(right->devilId);
    s32 order = FUN_0023e60c(leftSecondary->sortKey) - FUN_0023e60c(rightSecondary->sortKey);
    if (order == 0) {
        DevilRecordA *leftRecord = FUN_00184310(left->devilId);
        DevilRecordA *rightRecord = FUN_00184310(right->devilId);
        order = leftRecord->race - rightRecord->race;
        if (order == 0) {
            order = rightRecord->level - leftRecord->level;
            if (order == 0) {
                order = leftRecord->id - rightRecord->id;
            }
        }
    }
    return order;
}
}
