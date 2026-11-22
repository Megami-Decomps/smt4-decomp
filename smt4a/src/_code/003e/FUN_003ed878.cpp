/* NON_MATCHING: 79 vs 80 rows (93 diff lines): separate phase updates and direct 64-bit masks improve structure; partner-state branch tail merging and register allocation (r4-r7) still differ. */
#include "battle/btlMain.h"
#include "code/Code004a.h"
#include "battle/btlPartnerAttack.h"
#include "battle/btlUnit.h"
#include "battle/BattleUnit.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

/* The queued command lies beyond the published BtlMainStateA extent. */
struct BattleTransitionStateView {
    BtlMainStateA battle;
    /* 0x4CF0 */ u8 unk4CF0[0x78];
    /* 0x4D68 */ u32 command;
};
struct BattleTransitionSource {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ u32 command;
};
struct BattleTransitionGlobals {
    /* 0x000 */ BtlMainStateA *state;
    /* 0x004 */ u8 unk004[0x104];
    /* 0x108 */ u64 transitionMask;
    /* 0x110 */ u8 unk110[0x80];
    /* 0x190 */ u64 partnerMask;
};
typedef char BattleTransitionCommandOffsetCheck[
    offsetof(BattleTransitionStateView, command) == 0x4D68 ? 1 : -1];

extern "C" {
extern BtlPartnerAttackA *g_btlPartnerAttack;
extern u32 g_btlScriptUnit;
BattleTransitionSource *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);
s32 hasFlag80Or1000(u32 id, BtlUnitA* unit);

/* Begin the next partner-attack phase or queue the current unit's transition command. */
u32 FUN_003ed878(BattleTransitionStateView *state)
{
    if (state->battle.stateFlags64.bits & ((const BattleTransitionGlobals *)&g_btlMain)->partnerMask) {
        BtlMainStateA *main = g_btlMain.state;
        if (g_btlPartnerAttack->state != 2) {
            ++g_btlPartnerAttack->state;
            if (main != NULL) {
                main->phase = 15;
            }
        } else {
            if (main != NULL) {
                main->phase = 17;
            }
        }
    } else {
        if (state->battle.stateFlags64.bits & ((const BattleTransitionGlobals *)&g_btlMain)->transitionMask) {
            return 0;
        }
        state->command = btlFindFirstEntryMatchingCategoryAndRequiredMask(&state->battle)->command;
        BtlUnitA *unit = (BtlUnitA *)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
        u32 special = 0;
        if (unit != NULL && hasFlag80Or1000(g_btlScriptUnit, unit)) {
            special = 1;
        }
        FUN_004abba8(g_btlUiBlock, special ^ 1);
        unit = (BtlUnitA *)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
        if (unit != NULL) {
            hasFlag80Or1000(g_btlScriptUnit, unit);
        }
        state->battle.stateFlags64.bits = ((const BattleTransitionGlobals *)&g_btlMain)->transitionMask | state->battle.stateFlags64.bits;
        if (g_btlMain.state != NULL) {
            g_btlMain.state->phase = 14;
        }
    }
    return 1;
}
} /* extern "C" */
