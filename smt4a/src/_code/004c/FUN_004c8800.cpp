/* NON_MATCHING: the 64-bit state load (ldrd) matches; retail loads the first suppression mask word by word (ldr/ldr) and ands the halves before combining, the build uses ldm pairs. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

namespace {
struct BattleHelpMasks {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u64 first;
    /* 0x28 */ u64 second;
};
}
extern "C" {
extern BattleHelpMasks g_btlHelp;
u32 FUN_004c9160(u32 kind, u32 subject, s32 unused, u32 parameter);

/* Dispatches the help action selected by mode unless the battle state intersects a suppression mask. */
u32 FUN_004c8800(u32 subject, s32 mode, u32 parameter)
{
    BtlMainStateA *state = btlGetMainState();
    u64 flags = state->stateFlags64.bits;
    if ((flags & g_btlHelp.first) != 0 || (flags & g_btlHelp.second) != 0) {
        return 0;
    }
    u32 kind = 0;
    if (mode == 1) {
        kind = 0x1A;
    } else if (mode == 2) {
        kind = 0x1B;
    } else if (mode == 3) {
        kind = 0x36;
    }
    return FUN_004c9160(kind, subject, 0, parameter);
}
}
