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

extern DevilRecord *FUN_002498ec(u16 id);
extern s32 FUN_0024c52c(u16 skillId);
extern SkillRecord *FUN_002ae164(u16 skillId);

/* qsort-style comparison of two devil ids by the skill's rank (FUN_0024c52c), then its sort key, then id (descending). */
s32 devilCompareBySkillRank(u16 *a, u16 *b)
{
    DevilRecord *recordA = FUN_002498ec(*a);
    DevilRecord *recordB = FUN_002498ec(*b);
    s32 rankB = FUN_0024c52c(recordB->skillId);
    s32 rankA = FUN_0024c52c(recordA->skillId);
    s32 result = rankB - rankA;

    if (result == 0) {
        u16 keyA = FUN_002ae164(recordA->skillId)->sortKey;

        result = keyA - FUN_002ae164(recordB->skillId)->sortKey;
        if (result == 0) {
            result = *b - *a;
        }
    }
    return result;
}

} /* extern "C" */
