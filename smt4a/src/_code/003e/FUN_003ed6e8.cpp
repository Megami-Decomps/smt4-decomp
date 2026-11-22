/* NON_MATCHING: 100 vs 100 rows (36 diff lines): control flow, zero-return placement and blocked/required mask loads match retail; r5/r6 swap (count address vs devil pointer) and 64-bit `and` operand registers remain. */
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/NkmBaseRecordA.h"
#include "util/Random.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);
s32 gameFlagIsSet(u32 flag);

u32 FUN_003ed6e8(BtlMainStateA *state)
{
    /* The extra-action counters extend beyond the common state prefix. */
    struct ExtraActionView {
        u8 prefix[0x4D6C];
        u32 count;
        u32 forcedCount;
    };
    struct ExtraActionMasks {
        u8 prefix[0x58];
        u64 required;
        u8 unk60[0x20];
        u64 excluded;
        u8 unk88[0x48];
        u64 blocked;
        u8 unkD8[0x28];
        u64 secondaryBlocked;
        u64 alternateBlocked;
        u8 unk110[0x20];
        u64 forced;
        u8 unk138[0x90];
        u64 finalBlocked;
    };
    if ((((const ExtraActionMasks *)&g_btlMain)->blocked & state->stateFlags64.bits) ||
            (((const ExtraActionMasks *)&g_btlMain)->alternateBlocked & state->stateFlags64.bits) ||
            (((const ExtraActionMasks *)&g_btlMain)->secondaryBlocked & state->stateFlags64.bits) ||
            (((const ExtraActionMasks *)&g_btlMain)->finalBlocked & state->stateFlags64.bits) || gameFlagIsSet(505)) {
        return 0;
    }
    ExtraActionView *extra = (ExtraActionView *)state;
    extra->count = 0;
    BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(state);
    if (!entry) {
        return 0;
    }
    if (!(((const ExtraActionMasks *)&g_btlMain)->required & entry->flags) ||
            (((const ExtraActionMasks *)&g_btlMain)->excluded & entry->flags)) {
        return 0;
    }
    const BattleSlotSourceRecordA *source = (const BattleSlotSourceRecordA *)entry->data.specialRecord;
    if (!source) {
        return 0;
    }
    const NkmBaseRecordA *devil = nkmBaseGetRecord(source->id);
    if (!devil) {
        return 0;
    }
    if (!devil->extraActionChance) {
        return 0;
    }
    if (!(((const ExtraActionMasks *)&g_btlMain)->forced & state->stateFlags64.bits)) {
        if (devil->extraActionChance < (s32)lcgRandomRange(99)) {
            return 0;
        }
        s32 random = (s32)lcgRandomRange(99);
        u32 count;
        if (random < 40) {
            count = 1;
        } else if (random < 70) {
            count = 2;
        } else if (random < 90) {
            count = 3;
        } else {
            count = 4;
        }
        extra->count = count;
        return 1;
    } else {
        extra->count = extra->forcedCount;
        return 1;
    }
}
} /* extern "C" */
