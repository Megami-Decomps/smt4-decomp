/* NON_MATCHING: the loop index, skill id and known-list pointer rotate through r3/r1/r2 where retail uses r1/r2/r3. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {

/* Collects into `out` the skills demon `id` learns above `level` that are not already in
 * `known` (8 entries); returns how many were added, none when `skip` is set. */
s32 FUN_004bcaa8(u16 id, u32 level, const u16 *known, s16 *out, s32 skip)
{
    if (skip != 0) {
        return 0;
    }
    s32 count = 0;
    NkmBaseRecordA *devil = nkmBaseGetRecord(id);
    for (s32 i = 0; i < 8; i++) {
        u16 skill = devil->learnedSkills[i].id;
        if (skill != 0 && devil->learnedSkills[i].level > level) {
            s32 j;
            for (j = 0; j < 8; j++) {
                if (known[j] == skill) {
                    break;
                }
            }
            if (j >= 8) {
                out[count++] = skill;
            }
        }
    }
    return count;
}

} /* extern "C" */
