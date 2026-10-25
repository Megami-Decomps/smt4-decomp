/* NON_MATCHING: bestDiff kept in sl is stored with sxth (s16) where retail stores uxth; everything else matches. */
#include "common.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

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


/* Returns the usable id of `group` whose level is closest at or above `level` (clamped to the
 * group's first level), or 0 when there is none. */
u16 FUN_004dc154(LevelTableSet *set, s32 group, u32 level)
{
    s16 bestDiff = 999;
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
                bestDiff = (u16)(set->tables[group][i].level - level);
            }
        }
    }
    return bestId;
}

} /* extern "C" */
