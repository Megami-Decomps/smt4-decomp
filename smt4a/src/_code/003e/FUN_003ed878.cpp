/* NON_MATCHING: partner-state branch folding and 64-bit mask load/store grouping differ. */
#include "battle/btlMain.h"
#include "util/CalleeContracts.h"
#include "battle/btlPartnerAttack.h"
#include "battle/btlUnit.h"
#include "battle/BattleUnit.h"

// The queued command lies beyond the published BtlMainStateA extent.
struct BattleTransitionStateView {
    BtlMainStateA battle;
    /* 0x4CF0 */ u8 unk4CF0[0x78];
    /* 0x4D68 */ u32 command;
};
struct BattleTransitionSource {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ u32 command;
};
typedef char BattleTransitionCommandOffsetCheck[
    offsetof(BattleTransitionStateView, command) == 0x4D68 ? 1 : -1];
extern "C" {
extern BtlMainGlobalsA g_btlMain;
extern BtlPartnerAttackA* g_btlPartnerAttack;
extern u32 g_btlScriptUnit;
extern void* g_btlUiBlock;
BattleTransitionSource* FUN_003eaf20(BtlMainStateA* battle);
s32 hasFlag80Or1000(u32 id, BtlUnitA* unit);

// Begin the next partner-attack phase or queue the current unit's transition command.
u32 FUN_003ed878(BattleTransitionStateView* state)
{
    BtlMainStateA* main = g_btlMain.state;
    u32 phase;
    u64 flags = state->battle.stateFlags64.bits;
    u64 partnerMask = (u64)g_btlMain.selectionGate.words[0] |
                      ((u64)g_btlMain.selectionGate.words[1] << 32);
    if (flags & partnerMask) {
        if (g_btlPartnerAttack->state != 2) {
            ++g_btlPartnerAttack->state;
            phase = 15;
        } else {
            phase = 17;
        }
    } else {
        if (flags & g_btlMain.transition.mask)
            return 0;
        state->command = FUN_003eaf20(&state->battle)->command;
        BtlUnitA* unit = reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        u32 special = 0;
        if (unit != NULL && hasFlag80Or1000(g_btlScriptUnit, unit))
            special = 1;
        FUN_004abba8(g_btlUiBlock, special ^ 1);
        unit = reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if (unit != NULL)
            hasFlag80Or1000(g_btlScriptUnit, unit);
        state->battle.stateFlags64.bits |= g_btlMain.transition.mask;
        phase = 14;
        main = g_btlMain.state;
    }
    if (main != NULL)
        main->phase = phase;
    return 1;
}
}
