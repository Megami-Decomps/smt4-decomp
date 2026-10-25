#include "battle/btlUI.h"

extern "C" {
extern BtlUi *g_btlUiBlock;
u32 scrGetArg(u32 argument);
s32 scrGetCommandFrame();
s32 scrWorkGetValue(u32 slot);
void scrWorkSetValue(u32 slot, s32 value);
void stateSetBitFlag(u32 unit, s32 mode);
void FUN_00295a18(u32 unit, s32 mode);
void FUN_00250d84(u32 unit, s32 mode);
void FUN_0028c040();
void FUN_0029e874(s32 mode);
void statusOpenSkillSelection(u16 unit, s32 mode);
void FUN_00218b9c(BtlUiObjC *panel);
s32 statusScreenIsClosed();
u32 statusDownGetValue();
void gameClearUnlockedSavedId(u16 id);
void playerSkillInsertFirstFree(u16 unit);
void beginStatusPanelClose();
s32 FUN_00295618();
void gameReleaseDataReference();
void FUN_002bd8d4(BtlUiObjC *panel);

// Suspend script execution while the selected unit's status/skill screen opens and closes.
u32 scrComm_Battle_ShowStatusScreen()
{
    u32 unit = scrGetArg(0);
    if (scrGetCommandFrame() == 0) {
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    switch (scrWorkGetValue(0)) {
    case 0:
        stateSetBitFlag(unit, 1);
        FUN_00295a18(unit, 1);
        FUN_00250d84(unit, 1);
        scrWorkSetValue(0, 1);
        break;
    case 1:
        scrWorkSetValue(0, 2);
        FUN_0028c040();
        FUN_0029e874(0);
        statusOpenSkillSelection(static_cast<u16>(unit), 0);
        FUN_00218b9c(&g_btlUiBlock->objC);
        break;
    case 2:
        if (statusScreenIsClosed()) {
            u32 value = statusDownGetValue();
            if (value)
                gameClearUnlockedSavedId(static_cast<u16>(value));
            playerSkillInsertFirstFree(static_cast<u16>(unit));
            beginStatusPanelClose();
            scrWorkSetValue(0, 3);
        }
        break;
    case 3:
        if (FUN_00295618()) {
            gameReleaseDataReference();
            FUN_002bd8d4(&g_btlUiBlock->objC);
            scrWorkSetValue(0, 4);
            return 1;
        }
        break;
    }
    return 0;
}
}
