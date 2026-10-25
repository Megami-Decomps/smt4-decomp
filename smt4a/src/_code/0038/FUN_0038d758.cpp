/* NON_MATCHING: the battle-mask high word and first combatant low word use swapped registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

extern "C" {
extern const u64 g_battleMaskPresets[];
u32 FUN_004fb798(s32, u32, u32, BattleRosterRecordA *, u32, s32, s32, u32,
                 u32, s32, s32, s32, u32, u32, s32);

u32 FUN_0038d758()
{
    u32 value = scrGetArg(0);
    if (!(btlGetMainState()->entries[0].flags & g_battleMaskPresets[0])) {
        FUN_004fb798(0, 0, 0, btlGetMainState()->roster, 0, value,
                     -1, -1, 2, -1, -1, -1, 0, 0, 0);
    }
    return 1;
}
}
