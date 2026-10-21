/* NON_MATCHING: only the first flag-load registers/order differ at default flags; -O2 restores those registers but adds a second offset literal, and -Ospace changes the branch layout. */
#include "battle/btlMain.h"
#include "shard/W4_Match6_BtlScript.h"

// Additional read-only fields of the script state used by this guard.
struct BattleGuardState {
    u8 unk0000[0xe4];
    u32 statusFlags; // 0x00e4
    u8 unk00e8[0x43c0];
    u32 extraFlags; // 0x44a8
};

extern "C" {
extern BtlMain *g_btlMain;

bool FUN_00256940(BtlMain *context, const BtlScript *script, s32 checkMain)
{
    const BattleGuardState *state = (const BattleGuardState *)script;
    u32 flags = script->flags;
    if (((state->extraFlags & 0x40000000) == 0 || (flags & 0x04000000) == 0) &&
        (flags & 4) == 0 && (state->statusFlags & 0x10) == 0 &&
        (flags & 0x200) == 0 &&
        (checkMain == 0 || g_btlMain == NULL || (g_btlMain->flags & 0x02000000) == 0)) {
        return true;
    }
    return false;
}
}
