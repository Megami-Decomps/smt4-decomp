/* NON_MATCHING: ARMCC combines the two flag tests and shares argument setup differently. */
/* Submits a battle action, selecting the alternate route when a mode is supplied. */
#include "battle/btlMain.h"

extern "C" {
BtlMainState *btlGetMainState(void);
u32 FUN_0022a4ac(u32 alternate, s32 zero, u32 owner, u32 command, s32 mode, u32 value, u32 route);

u32 FUN_0022a5d8(u32 owner, s32 mode, u32 value)
{
    /* These fields extend beyond the shared IV battle-state prefix. */
    struct ActionStateView {
        u8 unk0000[0x2230];
        u32 command;
        u8 unk2234[0x226C];
        u64 flags;
    };
    ActionStateView *state = (ActionStateView *)btlGetMainState();
    if ((state->flags & 0x40) == 0 && (state->flags & 0x100) == 0) {
        u32 command;
        u32 route;
        u32 alternate;
        if (mode != 0) {
            command = state->command;
            route = 13;
            alternate = 1;
        } else {
            state = (ActionStateView *)btlGetMainState();
            if ((state->flags & 0x40) != 0 || (state->flags & 0x100) != 0) {
                return 0;
            }
            command = state->command;
            route = ~0u;
            mode = 0;
            alternate = 0;
        }
        return FUN_0022a4ac(alternate, 0, owner, command, mode, value, route);
    }
    return 0;
}
}
