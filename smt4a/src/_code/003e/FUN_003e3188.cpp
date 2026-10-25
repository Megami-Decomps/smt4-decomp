/* NON_MATCHING: mask-word address hoisting, roster flag indexing, final state-store order and saved registers differ. */
#include "battle/btlMain.h"
#include "battle/btlEncount.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/btlRosterGroupAllInactive.h"

extern "C" {
extern BtlEncounterGlobalsA g_btlEncount;
void FUN_004caca0(BtlMainStateA *battle, s32 group, s32 enabled, s32 animate);
void FUN_003ed238(BtlMainStateA *battle, u32 flags);
void FUN_003e025c(BtlStep *step, BtlMainStateA *battle);

// Wait for the roster to become inactive, count marked entries, and enter the next step.
void FUN_003e3188(BtlStep *step, BtlMainStateA *battle)
{
    if (((battle->stateFlags.words[0] & g_btlEncount.transition.words[0]) |
         (battle->stateFlags.words[1] & g_btlEncount.transition.words[1])) != 0) {
        FUN_004caca0(battle, 1, 1, 0);
    } else {
        FUN_004caca0(battle, 1, 1, 1);
    }
    step->state = 0x12;
    step->counters.unk10 = 0;
    step->counters.unk0C = 0;
    if (btlRosterGroupAllInactive(battle, 1) != 0) {
        FUN_003ed238(battle, 0x400);
        for (s32 index = 4; index < 54; ++index) {
            u32 flags = battle->roster[index].liveFlags.unk50;
            if ((flags & 1) != 0 && (flags & 0x80) != 0 && (flags & 0x400) != 0) {
                ++battle->flaggedRoster.count;
            }
        }
        step->counters.unk10 = 0;
        step->state = 0xD;
        step->counters.unk0C = 0;
        FUN_003e025c(step, battle);
    }
}
}
