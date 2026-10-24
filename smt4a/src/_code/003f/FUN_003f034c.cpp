/* NON_MATCHING: readable rebuild from asm of a battle phase step that clears the phase's flag masks and advances to the next sub-phase; armcc here schedules the 64-bit mask updates (retail loads each mask half separately and uses bic/mvn chains) and the saturating counters differently. */
#include "common.h"

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
extern u32 g_btlUiBlock;

void gameFlagSetValue(s32 flag, s32 value);
u32 *FUN_003eaf20(BattleFlagsState *battle);
void FUN_003f26d4(BattleFlagsState *battle);
void btlUiIdsRefresh(u32 block);
void FUN_004a9d1c(u32 block);
void FUN_004fbf90(s32 arg);
void FUN_003eafa0(BattleFlagsState *battle, s32 arg);
void FUN_003f22fc(BattleFlagsState *battle, s32 arg);
void FUN_003eb0cc(BattleFlagsState *battle, s32 arg);
void FUN_004c6294(void);

/* Clamps a byte counter's increment at 255. */
static void bumpByte(u8 *counter)
{
    u32 value = (u8)(*counter + 1);
    if (value >= 255)
        value = 255;
    *counter = (u8)value;
}

/* Runs one step of the battle phase: clears the masks of the phases that just ended and, depending on
 * whether the phase resolved, starts the next sub-phase. */
void FUN_003f034c(BattleFlagsState *battle)
{
    gameFlagSetValue(0x591, 0);
    battle->flags &= ~g_btlMain.clearMaskC & ~g_btlMain.clearMaskA & ~g_btlMain.clearMaskD & ~g_btlMain.clearMaskH;
    if (battle->hasExtra)
        battle->extra = FUN_003eaf20(battle)[0x100];
    battle->flags &= ~g_btlMain.clearMaskE & ~g_btlMain.clearMaskF;
    bool resolved = (battle->flags & g_btlMain.resolveMask) != 0;
    battle->flags &= ~g_btlMain.resolveMask & ~g_btlMain.clearMaskG;
    if (resolved) {
        FUN_003f26d4(battle);
        btlUiIdsRefresh(g_btlUiBlock);
        battle->flags &= ~g_btlMain.clearMaskA & ~g_btlMain.clearMaskD;
        if (g_btlMain.state != NULL)
            g_btlMain.state->phase = 12;
        return;
    }
    FUN_004a9d1c(g_btlUiBlock);
    if (battle->flags & g_btlMain.pendingMask) {
        battle->flags &= ~g_btlMain.pendingMask & ~g_btlMain.clearMaskB;
        bumpByte(&battle->counterA);
        bumpByte(&battle->counterB);
        if (battle->counterC >= 0) {
            battle->counterC++;
            if (battle->counterC >= 255)
                battle->counterC = 255;
        }
        if (g_btlMain.state != NULL)
            g_btlMain.state->phase = 24;
        FUN_003eafa0(battle, 0);
        FUN_003f22fc(battle, 1);
        FUN_003eb0cc(battle, 0);
        FUN_004c6294();
        return;
    }
    if (battle->encounterKind == 2 && battle->encounterTimer > 0)
        battle->encounterTimer--;
    FUN_004fbf90(0);
    battle->flags = (battle->flags | g_btlMain.pendingMask) & ~g_btlMain.clearMaskB;
    bumpByte(&battle->counterB);
    if (battle->counterC >= 0) {
        battle->counterC++;
        if (battle->counterC >= 255)
            battle->counterC = 255;
    }
    if (g_btlMain.state != NULL)
        g_btlMain.state->phase = 24;
    FUN_003eafa0(battle, 1);
    FUN_003f22fc(battle, 0);
    FUN_003eb0cc(battle, 1);
    u32 value = battle->counterD + 1;
    if ((u16)value >= 255)
        value = 255;
    battle->counterD = (u16)value;
}

} /* extern "C" */
