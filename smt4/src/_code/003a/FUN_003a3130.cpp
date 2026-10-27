/* NON_MATCHING: same state machine; armcc hoists the constants 5 and 2 into callee-saved registers (push r4-r8) where retail keeps only 5 in r5 and loads 2 inline, so frame, register numbers and tail merging differ. */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

struct ScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ s32 mode;
};

struct ShopExit {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 next;
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[0x154];
    /* 0x160 */ void *table;
    /* 0x164 */ u8 unk164[4];
    /* 0x168 */ void *process;
    /* 0x16C */ u8 unk16C[0x204];
    /* 0x370 */ void *resultData;
    /* 0x374 */ void *resultMessages;
    /* 0x378 */ ScriptProcess *resultProcess;
};

extern "C" {
s32 tableGroupFindEntryIndex(void *table, const char *name);
void scrScriptProcessStartEntry(void *process, s32 index);
void buttonHelpSetPreset(s32 preset);
s32 scrRunOpcodesStub(void *process);
s32 FUN_002c1658(s32 first, s32 second);
s32 messageMainIsWindowActive(void);
void msgWindowReset(void);
u32 FUN_00292bf0(void);
u32 gameSlotTableGetHeader(void);
void slotSetRequest(s32 slot, s32 kind, s32 value);
s32 screenFadeIsBusy(void);
void FUN_0029cc44(s32 value);
ScriptProcess *FUN_00297060(void *file, u32 owner);
}

/* Steps the shop-exit sequence: runs the exit script, then the result screen and its script. */
extern "C" void FUN_003a3130(ShopExit *exit)
{
    switch (exit->state) {
    case 0:
        scrScriptProcessStartEntry(exit->process, tableGroupFindEntryIndex(exit->table, "shop_exit"));
        buttonHelpSetPreset(158);
        exit->state = 1;
        break;
    case 1:
        if (scrRunOpcodesStub(exit->process) == 2) {
            exit->state = (FUN_00292bf0() == 0 || FUN_00292bf0() > gameSlotTableGetHeader()) ? 5 : 2;
            break;
        }
        if (FUN_002c1658(1, 1) != 0 && messageMainIsWindowActive() != 0) {
            msgWindowReset();
        }
        break;
    case 5:
        slotSetRequest(0, 10, 255);
        slotSetRequest(1, 10, 255);
        exit->state = 6;
        break;
    case 6:
        if (screenFadeIsBusy() == 0) {
            FUN_0029cc44(1);
            exit->next = 18;
            exit->state = 0;
        }
        break;
    case 2:
        asdLoadFileAsyncSimple("battle/Result.bf", reinterpret_cast<u32 *>(&exit->resultData), 0);
        asdLoadFileAsyncSimple("battle/ResultMsg.mbm", reinterpret_cast<u32 *>(&exit->resultMessages), 0);
        exit->state = 3;
        break;
    case 3:
        if (exit->resultData != NULL && exit->resultMessages != NULL) {
            exit->resultProcess = FUN_00297060(exit->resultData,
                reinterpret_cast<u32>(exit->resultMessages));
            exit->resultProcess->mode = 2;
            scrScriptProcessStartEntry(exit->resultProcess, tableGroupFindEntryIndex(exit->resultData, "ProcCharRequestSecond"));
            exit->state = 4;
        }
        break;
    case 4:
        if (scrRunOpcodesStub(exit->resultProcess) == 2) {
            exit->state = 5;
        }
        break;
    }
}
