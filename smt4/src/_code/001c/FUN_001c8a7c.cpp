/* NON_MATCHING: slot scan, countdown duplicate scan, unrolled shift/clear loops and the self tail call match retail; retail additionally spills the swapped flag and slot (strd) and addresses dirty[slot] through the literal 0xd2d0, so registers and 11 rows differ. */
#include "common.h"

extern "C" {

/* The skill slot state inside the demon screen block (only the fields used here). */
typedef struct SkillSlots {
    /* 0x0000 */ u8 unk0000[0xD114];
    /* 0xD114 */ u16 active[8];         /* the demon's current skills */
    /* 0xD124 */ u16 passiveFlag[8];    /* 1 when the slot holds a counted passive */
    /* 0xD134 */ u16 pool[8];           /* the pending list; pool[0] is the slot being edited */
    /* 0xD144 */ u8 unkD144[0x180];
    /* 0xD2C4 */ s32 poolCount;
    /* 0xD2C8 */ s32 passiveCount;
    /* 0xD2CC */ u8 unkD2CC[4];
    /* 0xD2D0 */ u8 dirty[8];
} SkillSlots;

/* The candidate record (only the skill list is read). */
typedef struct SkillSource {
    u8 unk00[0x34];
    u16 skills[8];
} SkillSource;

void FUN_002b7bca(void *base, s32 count, s32 size, s32 (*compare)(const u16 *, const u16 *));
s32 FUN_002c6e64(const u16 *left, const u16 *right);
s32 FUN_0026b738(u16 skill);
s32 recordContainsPairedId(u32 record, u16 skill);

/* Removes the entry equal to pool[0] from the rest of the pool (it moved to the front). */
static void poolDropDuplicate(SkillSlots *slots)
{
    s32 i = 0;
    for (s32 remaining = 7; remaining != 0; --remaining, ++i) {
        if (slots->pool[1 + i] == slots->pool[0]) {
            slots->pool[1 + i] = 0;
            FUN_002b7bca(slots->pool, 8, 2, FUN_002c6e64);
        }
    }
}

/* Swaps skills between the demon's slots and the source record's list: whenever an active slot
 * already holds the skill the source has at `swapIndex`, that slot takes the source's skill
 * instead, the pool is shifted to make room for the displaced one, and the counters are fixed up. */
void FUN_001c8a7c(SkillSlots *slots, u32 record, SkillSource *source, s32 swapIndex)
{
    for (s32 slot = 0; slot < 8; slot++) {
        if (!(slots->active[slot] != 0 && swapIndex != -1 && slot != swapIndex &&
              slots->active[slot] == source->skills[swapIndex])) {
            continue;
        }
        u16 replaced = slots->active[slot];

        slots->active[slot] = source->skills[slot];
        slots->dirty[slot] = 1;
        poolDropDuplicate(slots);
        for (s32 i = slots->poolCount; i > 0; i--) {
            slots->pool[i] = slots->pool[i - 1];
        }
        for (s32 i = slots->poolCount; i < 8; i++) {
            slots->pool[i] = 0;
        }
        if (recordContainsPairedId(record, source->skills[slot]) != 0) {
            if (slots->pool[1] == source->skills[slot]) {
                slots->pool[0] = 0;
            } else {
                slots->pool[0] = source->skills[slot];
                poolDropDuplicate(slots);
            }
        } else {
            slots->pool[0] = 0;
            FUN_002b7bca(slots->pool, 8, 2, FUN_002c6e64);
        }
        if (FUN_0026b738(replaced) == 0 || recordContainsPairedId(record, source->skills[slot]) != 0) {
            if (FUN_0026b738(replaced) == 0 && recordContainsPairedId(record, source->skills[slot]) != 0) {
                slots->passiveCount++;
                slots->passiveFlag[slot] = 1;
            } else if ((FUN_0026b738(replaced) == 0 && recordContainsPairedId(record, source->skills[slot]) == 0) ||
                       source->skills[slot] == 0) {
                slots->poolCount--;
            }
        } else {
            if (source->skills[slot] != 0) {
                slots->passiveCount--;
            }
            slots->poolCount--;
            slots->passiveFlag[slot] = 0;
        }
        FUN_001c8a7c(slots, record, source, slot);
        return;
    }
}

}
