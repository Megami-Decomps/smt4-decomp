/* NON_MATCHING: marked-entry tests and roster halfword addressing use different registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "script/ScriptArgs.h"

extern "C" {
extern const u64 g_battleMaskPresets[];

// Set or clear the marker flag on the first eligible, marked reserve entry with the script id.
u32 FUN_00380e34(void)
{
    u32 id = scrGetArg(0);
    u32 enabled = scrGetArg(1);
    BtlMainStateA* battle = btlGetMainState();
    u64 active = g_battleMaskPresets[0];
    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA* entry = &battle->entries[i];
        if ((entry->flags & active) != 0 && (entry->flags & g_battleMaskPresets[3]) == 0 &&
            (entry->flags & g_battleMaskPresets[1]) != 0 && entry->selection.marked != 0 && entry->id == id) {
            if (enabled == 0) {
                battle->roster[i].marker.flags &= ~0x2000;
            } else {
                battle->roster[i].marker.flags |= 0x2000;
            }
            break;
        }
    }
    return 1;
}
}
