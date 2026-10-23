/* NON_MATCHING: roster loop bounds fold to constant 54 instead of a saved end index, changing constants and stack-pair stores. */
#include "battle/BattleUnitRecordState.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void FUN_004fe900(u32 owner, BattleUnitSlotState *slot, BattleRosterRecordA *record, u32 value,
    s32 firstDuration, s32 secondDuration, s32 mode, s32 enabled);
void FUN_004fd268(u32 owner, BattleUnitSlotState *slot, BattleRosterRecordA *record, u32 value,
    s32 duration, s32 enabled);
}

static inline bool rosterUsesTimedEffect(const BattleRosterRecordA *record)
{
    u32 flags = record->motion.flags;
    return (flags & 1) && (flags & 2) && (flags & 0x400);
}

// Trigger the timed roster color transition, and report when its mode-specific wait is complete.
extern "C" u32 FUN_004e753c(BattleUnitRecordState *work, BattleUnitSlotState *slot, s32 mode)
{
    if (mode != 0) {
        if (slot->effectTiming.frame == 20) {
            for (s32 i = 4; i < 54; ++i) {
                BattleRosterRecordA *record = &work->battle->roster[i];
                if (rosterUsesTimedEffect(record)) {
                    FUN_004fe900(0, slot, record, 0, 10, 10, 2, 1);
                }
            }
        }
        if (slot->effectTiming.frame <= 40) {
            return 0;
        }
    } else {
        if (slot->effectTiming.frame == 20) {
            for (s32 i = 4; i < 54; ++i) {
                BattleRosterRecordA *record = &work->battle->roster[i];
                if (rosterUsesTimedEffect(record)) {
                    FUN_004fd268(0, slot, record, 0, 10, 1);
                }
            }
        } else if (slot->effectTiming.frame == 30) {
            for (s32 i = 4; i < 54; ++i) {
                BattleRosterRecordA *record = &work->battle->roster[i];
                if (rosterUsesTimedEffect(record)) {
                    FUN_004fd268(0, slot, record, record->render.value70, 5, 1);
                }
            }
        }
        if (slot->effectTiming.frame <= 35) {
            return 0;
        }
    }
    return 1;
}
