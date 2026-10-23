/* NON_MATCHING: regular apply and remove blocks are laid out in the opposite order, changing branch and literal-pool offsets. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {
BtlMainState *btlGetMainState(void);
u32 FUN_002463e8(u32 status);
u32 FUN_00246134(s32 side, u32 status, s32 kind, u32 mask);
void FUN_00246080(s32 side, s32 actor, ScriptUnit *source, BtlActionRecord *action, s32 kind);
void FUN_00246e24(s32 side, ScriptUnit *source, BtlActionRecord *action, u32 mask, s32 enabled);
void FUN_00246d38(s32 side, ScriptUnit *source, BtlActionRecord *action, u32 mask);
void FUN_002505c0(s32 side, ScriptUnit *source, u32 message, s32 value, s32 option, s32 extra, s32 flags);

// Add or remove one status; optionally handle status immunity before applying it.
u32 FUN_003003b0(void)
{
    u32 status = scrGetArg(0);
    s32 apply = scrGetArg(1);
    s32 checkImmunity = scrGetArg(2);
    ScriptUnit *source = btlUnitGet(g_btlScriptUnit);
    BtlMainState *battle = btlGetMainState();
    if (apply != 0) {
        if (checkImmunity != 0 &&
            (FUN_00246134(0, FUN_002463e8(status), 2, ~0u) & 0x10000) != 0) {
            FUN_00246080(0, 0, source, battle->actions, 4);
            FUN_002505c0(0, source, 0x10001EA, 0, 1, 0, 0);
        } else {
            FUN_00246e24(0, source, battle->actions, 1u << status, 1);
            FUN_002505c0(0, source, 0x10001BD, 0, 0, 0, 0);
        }
    } else {
        FUN_00246d38(0, source, battle->actions, 1u << status);
    }
    return 1;
}
}
