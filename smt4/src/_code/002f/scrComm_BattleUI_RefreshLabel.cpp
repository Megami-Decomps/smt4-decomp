/* NON_MATCHING: register allocation only: retail keeps the battle state in r4 and the option label in r5 (and loads g_btlUiBlock's address before the flag update); built swaps r4/r5 and loads it after. */
#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 uiFlags;
} BattleState;

typedef struct GameOptions {
    /* 0x000 */ u8 unk000[0x604];
    /* 0x604 */ s16 labelA;
    /* 0x606 */ u16 labelB;
} GameOptions;

typedef struct Label {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ s16 number;
} Label;

extern u32 g_btlUiBlock;

GameOptions *gameGetSupportUnitData(void);
s32 btlApplyOptionAndSnapshotReserve(void);
Label *supportUnitGetEntry(s32 a, u16 b);
s32 FUN_002942c4(s32 number, s32 arg);
s32 FUN_003ae620(u32 block);

/* Script command: refreshes the battle UI label from the options' selection and flags the battle UI for redraw. */
u32 scrComm_BattleUI_RefreshLabel(void)
{
    BattleState *state = reinterpret_cast<BattleState *>(btlGetMainState());
    u16 labelB;
    Label *label;

    btlApplyOptionAndSnapshotReserve();
    labelB = gameGetSupportUnitData()->labelB;
    label = supportUnitGetEntry(gameGetSupportUnitData()->labelA, labelB);
    FUN_002942c4((s16)(label->number + 1), 0);
    state->uiFlags |= 0x2000000;
    FUN_003ae620(g_btlUiBlock);
    return 1;
}

} /* extern "C" */
