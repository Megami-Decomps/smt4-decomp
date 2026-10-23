/* NON_MATCHING: mask-load scheduling, saved registers, and shared zero-return placement differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/DevilRecordA.h"
extern "C" {
extern BtlMain g_btlMain;
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
DevilRecordA *FUN_00184310(u32 id);
s32 gameFlagIsSet(u32 flag);
s32 lcgRandomRange(u32 limit);

u32 FUN_003ed6e8(BtlMainStateA *state)
{
    // The extra-action counters extend beyond the common state prefix.
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
    const ExtraActionMasks *masks = (const ExtraActionMasks *)&g_btlMain;
    u64 flags = state->stateFlags64.bits;
    if ((flags & masks->blocked) || (flags & masks->alternateBlocked) ||
            (flags & masks->secondaryBlocked) || (flags & masks->finalBlocked) || gameFlagIsSet(505))
        return 0;
    ExtraActionView *extra = (ExtraActionView *)state;
    extra->count = 0;
    BtlCombatantEntryA *entry = FUN_003eaf20(state);
    if (!entry)
        return 0;
    if ((entry->flags & masks->required) && !(entry->flags & masks->excluded)) {
        const BattleSlotSourceRecordA *source = (const BattleSlotSourceRecordA *)entry->specialMaximum.record;
        if (!source)
            return 0;
        const DevilTableRecordA *devil = (const DevilTableRecordA *)FUN_00184310(source->id);
        if (!devil || !devil->extraAction.chance)
            return 0;
        if (!(state->stateFlags64.bits & masks->forced)) {
            if (devil->extraAction.chance >= lcgRandomRange(99)) {
                s32 random = lcgRandomRange(99);
                u32 count;
                if (random < 40)
                    count = 1;
                else if (random < 70)
                    count = 2;
                else if (random < 90)
                    count = 3;
                else
                    count = 4;
                extra->count = count;
                return 1;
            }
        } else {
            extra->count = extra->forcedCount;
            return 1;
        }
    }
    return 0;
}
}
