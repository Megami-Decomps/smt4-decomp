#include "battle/btlUI.h"

extern "C" {
extern BtlUiA *g_btlUiBlock;
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
s32 scrWorkGetValue(u32 index);
void scrWorkSetValue(u32 index, s32 value);
void flagBitmapSetBit(u32 id, s32 value);
void flagValueAdd(u32 id, s32 value);
void flagValueSub(u32 id, s32 value);
void FUN_002c7e6c(void);
void FUN_002c8538(s32 mode);
void statusDownEnterState1(u16 id, s32 mode);
void FUN_002fb404(BtlUiObjCA *widget);
s32 stateHolderIsMissingOrState0(void);
s32 statusDownGetValue(void);
void FUN_0022e774(s32 value);
s32 FUN_0026c3a0(void);
void FUN_00333f6c(void);
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
        FUN_002c7e6c();
        FUN_002c8538(0);
        statusDownEnterState1(static_cast<u16>(id), 0);
        FUN_002fb404(&g_btlUiBlock->objC);
        break;
    case 2:
        if (stateHolderIsMissingOrState0() != 0) {
            FUN_0022e774(statusDownGetValue());
            scrWorkSetValue(0, 3);
        }
        break;
    case 3:
        if (FUN_0026c3a0() != 0) {
            FUN_00333f6c();
            FUN_0038e4c4(&g_btlUiBlock->objC);
            scrWorkSetValue(0, 4);
            return 1;
        }
        break;
    }
    return 0;
}
}
