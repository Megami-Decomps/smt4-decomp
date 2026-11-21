/* NON_MATCHING: 27 lines; all three BtlMainStateA flag checks match, only entry->flags load forms (ldr/ldr and ldm {r1,r3} vs ldm/ldrd) differ. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlMainAccess.h"
#include "mapnavi/naviMain.h"

struct HelpMaskView {
    u8 prefix[0x10];
    u64 specialEntry;
    u64 restrictedEntry;
    u64 blockedStates;
    u64 blockedTransitions;
    u64 blockedMessages;
};

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_004c9160(u32 message, void *entry, s32 mode, u32 argument);
u32 FUN_004c8e30(u32 message, s32 mode, u32 argument);

/* Sibling help-dispatch functions (FUN_004c8c10, FUN_004c909c, FUN_004c9160) read the same mask view. */
static __inline const HelpMaskView *helpMasks(void)
{
    return (const HelpMaskView *)&g_btlHelp;
}

/* Shows the battle help prompt triggered by a combatant's status change or traits, if none is blocked. */
u32 FUN_004c8ee0(BtlCombatantEntryA *entry, u32 oldStatus, u32 argument)
{
    BtlMainStateA *state = btlGetMainState();
    if ((state->stateFlags64.bits & helpMasks()->blockedStates) != 0 ||
        (helpMasks()->blockedTransitions & state->stateFlags64.bits) != 0 ||
        (helpMasks()->blockedMessages & state->stateFlags64.bits) != 0)
        return 0;
    u32 result = 0;
    u32 status = entry->data.statusFlags;
    if ((status & 8) && !(oldStatus & 8))
        return FUN_004c9160(0x24, entry, 0, argument);
    if ((status & 0x200) && !(oldStatus & 0x200))
        return FUN_004c9160(0x13, entry, 0, argument);
    if ((status & 0x20) && !(oldStatus & 0x20))
        return FUN_004c9160(0x14, entry, 0, argument);
    if ((status & 0x2000) && !(oldStatus & 0x2000) && (entry->flags & helpMasks()->restrictedEntry) == 0)
        return FUN_004c9160(0x3D, entry, 0, argument);
    if (btlFindEntryValue(entry->ids[0], 0xD) > 0)
        return FUN_004c9160(0x1F, entry, 0, argument);
    if ((helpMasks()->specialEntry & entry->flags) != 0 && playerHasFlagBit(1))
        return FUN_004c8e30(0x15, 0, argument);
    return result;
}

} /* extern "C" */
