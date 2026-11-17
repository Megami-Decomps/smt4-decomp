#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
/* Returns status 0x105 when the combatant has any of the blocking flags set, otherwise 0. */
u32 FUN_004c65e8(u32 id)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    u32 result = 0;
    if ((entry->flags & g_btlSkillResponseMasks.actionBlocked) != 0)
        result = 0x105;
    return result;
}
}
