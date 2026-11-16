#include "battle/btlMain.h"
#include "battle/btlEncount.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
extern BtlEncounterGlobalsA g_btlEncount;
void FUN_004caca0(BtlMainStateA *battle, s32 group, s32 enabled, s32 animate);
void FUN_003ed238(BtlMainStateA *battle, u32 flags);
void FUN_003e025c(BtlStep *step, BtlMainStateA *battle);

// Wait for the roster to become inactive, count marked entries, and enter the next step.
void FUN_003e3188(BtlStep *step, BtlMainStateA *battle)
{
    if ((g_btlEncount.transition.mask & battle->stateFlags64.bits) != 0) {
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
            BattleRosterRecordA *record = &battle->roster[index];
            u32 flags = record->liveFlags.unk50;
            if ((flags & 1) != 0 && (flags & 0x80) != 0 && (flags & 0x400) != 0) {
                ++battle->flaggedRoster.count;
            }
        }
        btlStepEnter(step, 0xD);
        FUN_003e025c(step, battle);
    }
}
}
