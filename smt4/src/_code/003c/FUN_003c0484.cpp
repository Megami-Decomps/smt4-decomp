/* NON_MATCHING: compiler combines independent battle flag tests and allocates different saved/argument registers. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlHelp.h"
#include "shard/battleGetEntryHalfword.h"

extern "C" {
u32 FUN_0022a5d8(u32 message, BtlEntry *entry, u32 context);
BtlMainState *btlGetMainState();
s32 playerPadTestBit(u32 bit);

u32 FUN_003c0484(BtlEntry *entry, u32 ignoredConditions, u32 context)
{
    u32 flags = btlGetMainState()->battleFlags;
    if ((flags & 0x40) != 0 || (flags & 0x100) != 0 || (flags & 0x200) != 0) {
        return 0;
    }
    if (8 & (entry->groupMask) != 0 && (ignoredConditions & 8) == 0) {
        return FUN_0022a5d8(0x24, entry, context);
    }
    if ((entry->groupMask & 0x200) != 0) {
        return FUN_0022a5d8(0x13, entry, context);
    }
    if ((entry->groupMask & 0x20) != 0) {
        return FUN_0022a5d8(0x14, entry, context);
    }
    if (battleGetEntryHalfword(entry->members.ids[0], 13) > 0) {
        return FUN_0022a5d8(0x1f, entry, context);
    }
    if ((entry->flags & 8) == 0 || playerPadTestBit(1) == 0) {
        return 0;
    }
    BtlMainState *state = btlGetMainState();
    if ((state->battleFlags & 0x40) == 0 && (state->battleFlags & 0x100) == 0) {
        return (u32)FUN_0022a4ac(0, 0, 0x15, state->dialog.messageHandle, NULL, context, -1);
    }
    return 0;
}
}
