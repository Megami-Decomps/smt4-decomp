/* NON_MATCHING: retail sets the enemy group's range constants (mov r4, #4; mov r0, #50) after the duration and
 * enable constants, the build before them (4 lines). */
#include "battle/BattleUnitRecordState.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "util/SlotRangeSelect.h"

extern "C" {
void btlReflectQueueTransitionPair(u32 owner, BattleUnitSlotState *slot, BattleRosterRecordA *record, u32 value,
    s32 firstDuration, s32 secondDuration, s32 mode, s32 enabled);
void btlReflectCreateKind2b(u32 owner, BattleUnitSlotState *slot, BattleRosterRecordA *record, u32 value,
    s32 duration, s32 enabled);
}

static __inline bool rosterUsesTimedEffect(const BattleRosterRecordA *record)
{
    u32 flags = record->motion.flags;
    return (flags & 1) && (flags & 2) && (flags & 0x400);
}

/* Trigger the timed roster color transition, and report when its mode-specific wait is complete. */
extern "C" u32 btlEnemyGroupColorTransitionStep(BattleUnitRecordState *work, BattleUnitSlotState *slot, s32 mode)
{
    s32 first = 0;
    s32 count = 0;
    btlRosterGroupRange(1, first, count);

    if (mode != 0) {
        if (slot->effectTiming.frame == 20) {
            for (s32 i = first; i < first + count; ++i) {
                BattleRosterRecordA *record = &work->battle->roster[i];
                if (rosterUsesTimedEffect(record)) {
                    btlReflectQueueTransitionPair(0, slot, record, 0, 10, 10, 2, 1);
                }
            }
        }
        if (slot->effectTiming.frame <= 40) {
            return 0;
        }
    } else {
        switch (slot->effectTiming.frame) {
        case 20:
            for (s32 i = first; i < first + count; ++i) {
                BattleRosterRecordA *record = &work->battle->roster[i];
                if (rosterUsesTimedEffect(record)) {
                    btlReflectCreateKind2b(0, slot, record, 0, 10, 1);
                }
            }
            break;
        case 30:
            for (s32 i = first; i < first + count; ++i) {
                BattleRosterRecordA *record = &work->battle->roster[i];
                if (rosterUsesTimedEffect(record)) {
                    btlReflectCreateKind2b(0, slot, record, record->render.value70, 5, 1);
                }
            }
            break;
        }
        if (slot->effectTiming.frame <= 35) {
            return 0;
        }
    }
    return 1;
}
