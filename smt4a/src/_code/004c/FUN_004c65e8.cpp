#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

/* The combatant flags that block the action (at g_btlSkillResponseMasks + 0x10). */
struct MaskOwner {
    /* 0x00 */ u8 unk00[16];
    /* 0x10 */ u64 mask;
};

extern "C" {
extern MaskOwner g_btlSkillResponseMasks;

/* Returns status 0x105 when the combatant has any of the blocking flags set, otherwise 0. */
u32 FUN_004c65e8(u32 id)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    u32 result = 0;
    if ((entry->flags & g_btlSkillResponseMasks.mask) != 0)
        result = 0x105;
    return result;
}
}
