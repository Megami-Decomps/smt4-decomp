/* NON_MATCHING: loops are the retail countdown shape; with multifile [btlUnitGet] the remaining difference is where the entries table is loaded (retail loads it after the mode == 2 compare, build hoists it above). */
#include "battle/BattleUnitSlot.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {

#define BTL_MARK_UNIT_PRESENT 0x001
#define BTL_MARK_UNIT_HIDDEN 0x020
#define BTL_MARK_UNIT_EXCLUDED 0x040
#define BTL_MARK_UNIT_TARGETABLE 0x400

/* A battle unit slot (0x288 bytes): only its flags are read here. */


typedef struct BtlMarkContext {
    /* 0x00 */ BtlMainState *state;
} BtlMarkContext;

/* The unit record whose per-slot marks this unit sets. */
typedef struct BtlMarkTarget {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 marks[109];
} BtlMarkTarget;


/* Marks the unit slots a command may target: present units in mode 2, the enemy side's
 * targetable units (4..53) for side 1, otherwise every targetable visible unit. */
void FUN_003d0fcc(BtlMarkContext *context, s32 side, s32 mode)
{
    BtlMarkTarget *target = reinterpret_cast<BtlMarkTarget *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(context)));

    if (mode == 2) {
        BtlEntry *units = context->state->entries;
        for (s32 remaining = 109, i = 0; remaining != 0; --remaining, i++) {
            if ((units[i].flags & BTL_MARK_UNIT_PRESENT) && !(units[i].flags & BTL_MARK_UNIT_EXCLUDED)) {
                target->marks[i] = 1;
            }
        }
        return;
    }
    BtlEntry *units = context->state->entries;
    if (side == 1) {
        for (s32 remaining = 50, i = 0; remaining != 0; --remaining, i++) {
            if (units[4 + i].flags & BTL_MARK_UNIT_TARGETABLE) {
                target->marks[4 + i] = 1;
            }
        }
        return;
    }
    for (s32 remaining = 109, i = 0; remaining != 0; --remaining, i++) {
        if ((units[i].flags & BTL_MARK_UNIT_TARGETABLE) && !(units[i].flags & BTL_MARK_UNIT_HIDDEN)) {
            target->marks[i] = 1;
        }
    }
}

} /* extern "C" */
