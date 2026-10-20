#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 skillId;
} DevilRecord;

typedef struct SkillRecord {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u16 sortKey;
} SkillRecord;

extern DevilRecord *FUN_00480ba0(u16 id);
extern s32 FUN_003a6868(u16 skillId);
extern SkillRecord *dataTable04FindById(u16 skillId);

/* qsort-style comparison of two devil ids by the skill's rank (FUN_003a6868), then its sort key, then id (descending). */
s32 devilCompareBySkillRank(u16 *a, u16 *b)
{
    DevilRecord *recordA = FUN_00480ba0(*a);
    DevilRecord *recordB = FUN_00480ba0(*b);
    s32 rankB = FUN_003a6868(recordB->skillId);
    s32 rankA = FUN_003a6868(recordA->skillId);
    s32 result = rankB - rankA;

    if (result == 0) {
        u16 keyA = dataTable04FindById(recordA->skillId)->sortKey;

        result = keyA - dataTable04FindById(recordB->skillId)->sortKey;
        if (result == 0) {
            result = *b - *a;
        }
    }
    return result;
}

} /* extern "C" */
