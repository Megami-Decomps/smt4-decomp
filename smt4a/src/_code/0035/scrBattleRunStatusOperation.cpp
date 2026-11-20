#include "battle/btlUI.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
s32 scrWorkGetValue(u32 index);
void scrWorkSetValue(u32 index, s32 value);
void flagBitmapSetBit(u32 id, s32 value);
void flagValueAdd(u32 id, s32 value);
void flagValueSub(u32 id, s32 value);
void statusAcquireSharedResources(void);
void gameGlobalsSetOverlayActive(s32 mode);
void statusDownEnterState1(u16 id, s32 mode);
void btlUiWidgetEnterStatusMode(BtlUiObjCA *widget);
s32 stateHolderIsMissingOrState0(void);
s32 statusDownGetValue(void);
void statusPanelClose(s32 value);
s32 gameGlobalsIsActiveStateFour(void);
void gameGlobalsReleaseReference(void);
void FUN_0038e4c4(BtlUiObjCA *widget);

// Suspend the battle widget while the requested status-screen operation runs.
u32 scrBattleRunStatusOperation(void)
{
    u32 id = scrGetArg(0);
    if (scrGetCommandFrame() == 0) {
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    switch (scrWorkGetValue(0)) {
    case 0:
        flagBitmapSetBit(id, 1);
        flagValueAdd(id, 1);
        flagValueSub(id, 1);
        scrWorkSetValue(0, 1);
        break;
    case 1:
        scrWorkSetValue(0, 2);
        statusAcquireSharedResources();
        gameGlobalsSetOverlayActive(0);
        statusDownEnterState1(static_cast<u16>(id), 0);
        btlUiWidgetEnterStatusMode(&g_btlUiBlock->objC);
        break;
    case 2:
        if (stateHolderIsMissingOrState0() != 0) {
            statusPanelClose(statusDownGetValue());
            scrWorkSetValue(0, 3);
        }
        break;
    case 3:
        if (gameGlobalsIsActiveStateFour() != 0) {
            gameGlobalsReleaseReference();
            FUN_0038e4c4(&g_btlUiBlock->objC);
            scrWorkSetValue(0, 4);
            return 1;
        }
        break;
    }
    return 0;
}
}
