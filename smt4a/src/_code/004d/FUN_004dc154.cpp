/* NON_MATCHING: register swap only: retail loads the group count into r1 and the zero bestId into r0 (ours r0/r1) in the prologue and first-level clamp. */
#include "common.h"

extern "C" {

/* An id unlocked at a level. */
typedef struct LevelEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 level;
} LevelEntry;

/* Per-group level tables: entry counts, then the tables. */
typedef struct LevelTableSet {
    /* 0x00 */ u8 counts[0x44];
    /* 0x44 */ LevelEntry *tables[1];
} LevelTableSet;

s32 entryDefIsAvailable(LevelTableSet *set, u16 id);

/* Returns the usable id of `group` whose level is closest at or above `level` (clamped to the
 * group's first level), or 0 when there is none. */
u16 FUN_004dc154(LevelTableSet *set, s32 group, u32 level)
{
    u16 bestDiff = 999;
    u16 bestId = 0;
    s32 i;

    if (set->counts[group] != 0) {
        if (set->tables[group][0].level < level) {
            level = set->tables[group][0].level;
        }
        for (i = 0; i < set->counts[group]; i++) {
            if (set->tables[group][i].level >= level
                && (s32)(set->tables[group][i].level - level) < bestDiff
                && entryDefIsAvailable(set, set->tables[group][i].id)) {
                bestId = set->tables[group][i].id;
                bestDiff = set->tables[group][i].level - level;
            }
        }
    }
    return bestId;
}

} /* extern "C" */
