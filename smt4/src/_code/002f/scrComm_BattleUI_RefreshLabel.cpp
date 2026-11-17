#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {


typedef struct GameOptions {
    /* 0x000 */ u8 unk000[0x604];
    /* 0x604 */ s16 labelA;
    /* 0x606 */ u16 labelB;
} GameOptions;

typedef struct Label {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ s16 number;
} Label;


GameOptions *gameGetSupportUnitData(void);
void btlApplyOptionAndSnapshotReserve(BtlMainState *state);
Label *supportUnitGetEntry(s32 a, u16 b);
s32 statusBustUpPortraitAcquire(s32 number, s32 arg);
s32 FUN_003ae620(BtlUi *block);

/* Script command: refreshes the battle UI label from the options' selection and flags the battle UI for redraw. */
u32 scrComm_BattleUI_RefreshLabel(void)
{
    BtlMainState *state = btlGetMainState();

    btlApplyOptionAndSnapshotReserve(state);
    const Label *label = supportUnitGetEntry(gameGetSupportUnitData()->labelA, gameGetSupportUnitData()->labelB);
    statusBustUpPortraitAcquire((s16)(label->number + 1), 0);
    state->battleMask |= 0x2000000;
    FUN_003ae620(g_btlUiBlock);
    return 1;
}

} /* extern "C" */
