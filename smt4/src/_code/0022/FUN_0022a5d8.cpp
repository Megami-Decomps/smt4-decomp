/* NON_MATCHING: the two flag tests now stay separate (tst/tsteq) and the u8 option goes through without masking; retail keeps the mode/value saved registers swapped and addresses the second battle-flag test with add+add instead of the pooled 0x44A0 offset. */
/* Submits a battle action, selecting the alternate route when a mode is supplied. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

/* These fields extend beyond the shared IV battle-state prefix. */
struct ActionStateView {
    u8 unk0000[0x2230];
    u32 command;
    u8 unk2234[0x226C];
    u64 flags;
};

static __inline s32 actionBlocked(const ActionStateView *state)
{
    if (state->flags & 0x40)
        return 1;
    if (state->flags & 0x100)
        return 1;
    return 0;
}

extern "C" {
u32 FUN_0022a5d8(u32 owner, s32 mode, u8 value)
{
    ActionStateView *state = (ActionStateView *)btlGetMainState();
    if (!actionBlocked(state)) {
        if (mode != 0) {
            return (u32)FUN_0022a4ac(1, 0, owner, state->command, (const void *)mode, value, 13);
        }
        BtlMainState *battle = btlGetMainState();
        u32 flags = battle->battleFlags;
        if (flags & 0x40)
            return 0;
        if (flags & 0x100)
            return 0;
        return (u32)FUN_0022a4ac(0, 0, owner, battle->dialog.messageHandle, NULL, value, -1);
    }
    return 0;
}
}
