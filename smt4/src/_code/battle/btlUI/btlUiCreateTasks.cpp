#include "battle/BtlUiGlobal.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

struct BattleUiTaskOwner {
    u32 process;
    u8 unk04[0x50];
    u32 uiTask; // 0x54
};
extern "C" {
void commonBgAcquire(void);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, void *, u32);
void FUN_003ad76c(BtlUi *, BattleUiTaskOwner *);
s32 FUN_0019e138(u32 job);
void btlEditorNotifyNoop(u32 job);
s32 btlUiDrawUpperScreen(u32 job);
s32 FUN_001e4bf0(u32 job);
s32 btlUiDrawFloatingNumbersWhenLoaded(u32 job);

// Allocate battle UI storage and register its calculation and screen draw passes.
void btlUiCreateTasks(BattleUiTaskOwner *owner)
{
    commonBgAcquire();
    if (!g_btlUi.ui) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlUI.cpp", 0xb52);
        g_btlUi.ui = static_cast<BtlUi *>(asdMemAlloc(0x100, 0x100, 0, sizeof(BtlUi), 1));
    }
    BtlUi *ui = g_btlUi.ui;
    u32 task = taskCreateDraw("btlUI Calc", 2, 0, 0, FUN_0019e138, btlEditorNotifyNoop, owner, owner->process);
    owner->uiTask = task;
    taskCreateDraw("btlUI DrawUpLeft", 0x7a, 0, 0, btlUiDrawUpperScreen, NULL, owner, task);
    taskCreateDraw("btlUI DrawUpRight", 0xd8, 0, 0, btlUiDrawUpperScreen, NULL, owner, owner->uiTask);
    taskCreateDraw("btlUI DrawDown", 0xe7, 0, 0, FUN_001e4bf0, NULL, owner, owner->uiTask);
    taskCreateDraw("btlUI DrawNumber", 0xe9, 0, 0, btlUiDrawFloatingNumbersWhenLoaded, NULL, owner, owner->uiTask);
    FUN_003ad76c(ui, owner);
    ui->owner = owner;
}
}
