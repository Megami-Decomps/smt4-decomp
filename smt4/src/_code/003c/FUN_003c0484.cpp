/* NON_MATCHING: guard tests, tail calls and the u8 context now match; retail addresses the final battleFlags read with add/add (not the literal-pool index form), merges the zero returns and numbers the saved argument registers r6/r5. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"
#include "battle/BtlMainAccess.h"
#include "code/Code0029_Smt4.h"

extern "C" {
u32 FUN_0022a5d8(u32 message, BtlEntry *entry, u32 context);

u32 FUN_003c0484(BtlEntry *entry, u32 ignoredConditions, u8 context)
{
    u32 flags = btlGetMainState()->battleFlags;
    if ((flags & 0x40) != 0)
        return 0;
    if ((flags & 0x100) != 0)
        return 0;
    if ((flags & 0x200) != 0)
        return 0;
    u32 result = 0;
    if ((entry->groupMask & 8) != 0 && (ignoredConditions & 8) == 0) {
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
        return result;
    }
    u32 kind = 0x15;
    BtlMainState *state = btlGetMainState();
    if ((state->battleFlags & 0x40) != 0)
        return 0;
    if ((state->battleFlags & 0x100) != 0)
        return 0;
    u32 message = state->dialog.messageHandle;
    return (u32)FUN_0022a4ac(0, 0, kind, message, NULL, context, -1);
}
}
