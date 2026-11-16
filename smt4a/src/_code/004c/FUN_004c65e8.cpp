#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* The combatant flags that block the action (at DAT_005713f0 + 0x10). */
struct MaskOwner {
    /* 0x00 */ u8 unk00[16];
    /* 0x10 */ u64 mask;
};

extern "C" {
extern MaskOwner DAT_005713f0;
BtlCombatantEntryA *btlMainFindEntryByListedId(BtlMainStateA *battle, u32 id);

/* Returns status 0x105 when the combatant has any of the blocking flags set, otherwise 0. */
u32 FUN_004c65e8(u32 id)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    u32 result = 0;
    if ((entry->flags & DAT_005713f0.mask) != 0)
        result = 0x105;
    return result;
}
}
