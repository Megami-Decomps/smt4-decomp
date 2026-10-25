/* NON_MATCHING: 64-bit masks combine retail's scalar loads and early-zero returns share an epilogue; 111 vs 105 instructions. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlMainAccess.h"
#include "mapnavi/naviMain.h"
extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_004c9160(u32 message, BtlCombatantEntryA *entry, s32 mode, u32 argument);
u32 FUN_004c8e30(u32 message, s32 mode, u32 argument);

// Choose the highest-priority newly gained ailment/help message, unless battle state suppresses it.
u32 FUN_004c8ee0(BtlCombatantEntryA *entry, u32 oldStatus, u32 argument)
{
    // The final suppression mask lies beyond the documented help-global prefix.
    struct HelpMaskView {
        u8 prefix[0x10];
        u64 specialEntry;
        u64 restrictedEntry;
        u64 blockedStates;
        u64 blockedTransitions;
        u64 blockedMessages;
    };
    typedef char HelpMaskOffsets[offsetof(HelpMaskView, blockedStates) == 0x20 && offsetof(HelpMaskView, blockedMessages) == 0x30 ? 1 : -1];
    const HelpMaskView *masks = reinterpret_cast<const HelpMaskView *>(&g_btlHelp);
    u64 battleFlags = btlGetMainState()->stateFlags64.bits;
    if ((battleFlags & masks->blockedStates) ||
        (battleFlags & masks->blockedTransitions) ||
        (battleFlags & masks->blockedMessages))
        return 0;
    u32 status = entry->statusFlags;
    if ((status & 8) && !(oldStatus & 8))
        return FUN_004c9160(0x24, entry, 0, argument);
    if ((status & 0x200) && !(oldStatus & 0x200))
        return FUN_004c9160(0x13, entry, 0, argument);
    if ((status & 0x20) && !(oldStatus & 0x20))
        return FUN_004c9160(0x14, entry, 0, argument);
    if ((status & 0x2000) && !(oldStatus & 0x2000) && !(entry->flags & masks->restrictedEntry))
        return FUN_004c9160(0x3d, entry, 0, argument);
    if (btlFindEntryValue(entry->unitIndex, 0xd) > 0)
        return FUN_004c9160(0x1f, entry, 0, argument);
    if ((entry->flags & masks->specialEntry) && playerHasFlagBit(1))
        return FUN_004c8e30(0x15, 0, argument);
    return 0;
}
}
