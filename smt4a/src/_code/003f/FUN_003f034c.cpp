/* NON_MATCHING: 137 lines. The mask clears one statement per mask, the resolved flag, the counter clamps, FUN_004fbf90's two arguments, the empty FUN_004c6294 call and the not-pending path first now follow retail; retail still loads the flag word and the masks in another order (ldm/ldrd pairs, mvn+and against bic), stores the resolved-branch clear with strd, and rematerialises the phase constants (mov #12/#24 before the NULL test) per branch. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "battle/BtlUiGlobal.h"

/* The battle main state (only the fields this step reads). */
struct BattleMainState {
    /* 0x0000 */ u8 unk0000[0x8C];
    /* 0x008C */ u32 phase;
};

struct BattleFlagsState {
    /* 0x0000 */ u8 unk0000[0xAC];
    /* 0x00AC */ s32 encounterKind;
    /* 0x00B0 */ u8 unk00B0[4];
    /* 0x00B4 */ s32 encounterTimer;
    /* 0x00B8 */ u8 unk00B8[0x44E8];
    /* 0x45A0 */ u64 flags;
    /* 0x45A8 */ u8 unk45A8[0x10];
    /* 0x45B8 */ u8 counterA;
    /* 0x45B9 */ u8 counterB;
    /* 0x45BA */ u8 unk45BA[0x716];
    /* 0x4CD0 */ u8 hasExtra;
    /* 0x4CD1 */ u8 unk4CD1[0xF];
    /* 0x4CE0 */ s32 counterC;
    /* 0x4CE4 */ u8 unk4CE4[0x84];
    /* 0x4D68 */ u32 extra;
    /* 0x4D6C */ u8 unk4D6C[0xE2];
    /* 0x4E4E */ u16 counterD;
};

/* The battle main globals: the state pointer and the flag masks the phases test. */
struct BattleMainGlobals {
    /* 0x000 */ BattleMainState *state;
    /* 0x004 */ u8 unk004[0xCC];
    /* 0x0D0 */ u64 pendingMask;
    /* 0x0D8 */ u8 unk0D8[0x18];
    /* 0x0F0 */ u64 clearMaskA;
    /* 0x0F8 */ u8 unk0F8[0x10];
    /* 0x108 */ u64 clearMaskB;
    /* 0x110 */ u64 clearMaskC;
    /* 0x118 */ u8 unk118[0x38];
    /* 0x150 */ u64 clearMaskD;
    /* 0x158 */ u8 unk158[0x40];
    /* 0x198 */ u64 clearMaskE;
    /* 0x1A0 */ u64 clearMaskF;
    /* 0x1A8 */ u8 unk1A8[0x10];
    /* 0x1B8 */ u64 resolveMask;
    /* 0x1C0 */ u64 clearMaskG;
    /* 0x1C8 */ u8 unk1C8[8];
    /* 0x1D0 */ u64 clearMaskH;
};

extern "C" {
extern BattleMainGlobals g_btlMain;


u32 *btlFindFirstEntryMatchingCategoryAndRequiredMask(BattleFlagsState *battle);
void btlAiBuildTurnOrder(BattleFlagsState *battle);
void btlUiIdsRefresh(BtlUiA *block);
void btlUiEnterStateEntryStartup(BtlUiA *block);
void FUN_004fbf90(s32 id, u32 options);
void FUN_003eafa0(BattleFlagsState *battle, s32 arg);
void btlClearActiveCombatantActions(BattleFlagsState *battle, s32 arg);
void btlClearPartitionSlotFlags(BattleFlagsState *battle, s32 arg);
void FUN_004c6294(void);

/* Runs one step of the battle phase: clears the masks of the phases that just ended and, depending on
 * whether the phase resolved, starts the next sub-phase. */
void FUN_003f034c(BattleFlagsState *battle)
{
    gameFlagSetValue(0x591, 0, 1);
    battle->flags &= ~g_btlMain.clearMaskC;
    battle->flags &= ~g_btlMain.clearMaskA;
    battle->flags &= ~g_btlMain.clearMaskD;
    battle->flags &= ~g_btlMain.clearMaskH;
    if (battle->hasExtra)
        battle->extra = btlFindFirstEntryMatchingCategoryAndRequiredMask(battle)[0x100];
    battle->flags &= ~g_btlMain.clearMaskE;
    battle->flags &= ~g_btlMain.clearMaskF;
    bool resolved = false;
    if (battle->flags & g_btlMain.resolveMask)
        resolved = true;
    battle->flags &= ~g_btlMain.resolveMask;
    battle->flags &= ~g_btlMain.clearMaskG;
    if (resolved) {
        btlAiBuildTurnOrder(battle);
        btlUiIdsRefresh(g_btlUiBlock);
        battle->flags &= ~g_btlMain.clearMaskA;
        battle->flags &= ~g_btlMain.clearMaskD;
        if (g_btlMain.state != NULL)
            g_btlMain.state->phase = 12;
        return;
    }
    btlUiEnterStateEntryStartup(g_btlUiBlock);
    if ((battle->flags & g_btlMain.pendingMask) == 0) {
        if (battle->encounterKind == 2 && battle->encounterTimer > 0)
            battle->encounterTimer--;
        FUN_004fbf90(0, 0);
        battle->flags = (battle->flags | g_btlMain.pendingMask) & ~g_btlMain.clearMaskB;
        battle->counterB++;
        battle->counterB = battle->counterB >= 255 ? 255 : battle->counterB;
        if (battle->counterC >= 0) {
            battle->counterC++;
            battle->counterC = battle->counterC >= 255 ? 255 : battle->counterC;
        }
        if (g_btlMain.state != NULL)
            g_btlMain.state->phase = 24;
        FUN_003eafa0(battle, 1);
        btlClearActiveCombatantActions(battle, 0);
        btlClearPartitionSlotFlags(battle, 1);
        FUN_004c6294();
        battle->counterD++;
        battle->counterD = battle->counterD >= 255 ? 255 : battle->counterD;
        return;
    }
    battle->flags &= ~g_btlMain.pendingMask;
    battle->flags &= ~g_btlMain.clearMaskB;
    battle->counterA++;
    battle->counterA = battle->counterA >= 255 ? 255 : battle->counterA;
    battle->counterB++;
    battle->counterB = battle->counterB >= 255 ? 255 : battle->counterB;
    if (battle->counterC >= 0) {
        battle->counterC++;
        battle->counterC = battle->counterC >= 255 ? 255 : battle->counterC;
    }
    if (g_btlMain.state != NULL)
        g_btlMain.state->phase = 24;
    FUN_003eafa0(battle, 0);
    btlClearActiveCombatantActions(battle, 1);
    btlClearPartitionSlotFlags(battle, 0);
    FUN_004c6294();
}

} /* extern "C" */
