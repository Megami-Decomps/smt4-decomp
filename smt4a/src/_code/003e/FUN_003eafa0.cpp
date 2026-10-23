/* NON_MATCHING: Mask loads and command-subobject bases fold differently, omitting retail's subobject null test. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void rt_memclr(void *buffer, u32 size);
void clearTwoWords(void *value);
extern BtlMainGlobalsA g_btlMain;

/* Clears queued commands for the requested roster category, excluding inactive combatants. */
void FUN_003eafa0(BtlMainStateA *battle, s32 category)
{
    /* Word fields here cannot be inserted into the shared combatant's halfword-aligned union. */
    struct CommandView {
        /* 0x000 */ u8 unk000[0x322];
        /* 0x322 */ u8 current[8];
        /* 0x32A */ u8 unk32A[0x10];
        /* 0x33A */ u8 queued[0x50];
        /* 0x38A */ u8 unk38A[2];
        /* 0x38C */ u32 count;
    };
    typedef char CommandViewOffsetsCheck[offsetof(CommandView, current) == 0x322 &&
        offsetof(CommandView, queued) == 0x33A && offsetof(CommandView, count) == 0x38C ? 1 : -1];
    for (s32 index = 0; index < 109; ++index) {
        s32 combatantIndex = battle->roster[index].combatant.combatantIndex;
        if (combatantIndex >= 0) {
            BtlCombatantEntryA *entry = &battle->entries[combatantIndex];
            u64 flags = entry->flags;
            if ((g_btlMain.combatantMasks.required & flags) != 0 &&
                (g_btlMain.exclusionMask & flags) == 0) {
                bool clear;
                if (category == 0) {
                    clear = (g_btlMain.actorCategories[2] & flags) == 0 &&
                        (g_btlMain.actorCategories[3] & flags) == 0;
                } else {
                    clear = category != 1 || (g_btlMain.actorCategories[2] & flags) != 0;
                }
                if (clear) {
                    CommandView *commands = (CommandView *)entry;
                    commands->count = 0;
                    clearTwoWords(commands->current);
                    rt_memclr(commands->queued, sizeof(commands->queued));
                }
            }
        }
    }
}
}
