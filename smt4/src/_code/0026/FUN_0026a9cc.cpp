/* NON_MATCHING: the loop index and the skill id are exchanged (r2/r1) relative to retail (r1/r2); the inner known-list scan matches. */
#include "gamedata/DevilRecord.h"

extern "C" {


/* Collects into `out` the skills of devil `id` learned above `level` that are not already in
 * `known` (8 entries); returns how many were added, none when `skip` is set. */
s32 FUN_0026a9cc(u16 id, u32 level, const u16 *known, s16 *out, s32 skip)
{
    if (skip != 0) {
        return 0;
    }
    s32 count = 0;
    const DevilRecord *devil = reinterpret_cast<const DevilRecord *>(devilGetRecord(id));
    for (s32 i = 0; i < 8; i++) {
        u16 skill = devil->learnedSkills.entries[i].id;
        if (skill != 0 && devil->learnedSkills.entries[i].unk00 > level) {
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
