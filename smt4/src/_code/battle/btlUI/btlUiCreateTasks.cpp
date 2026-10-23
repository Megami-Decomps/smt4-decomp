#include "battle/btlUI.h"
#include "AsdSDK/AsdDebug.h"

struct BattleUiTaskOwner {
    u32 process;
    u8 unk04[0x50];
    u32 uiTask; // 0x54
};
extern "C" {
void FUN_002898e4(void);
void *asdMemAlloc(u32, u32, u32, u32, u32);
u32 taskCreateDraw(const char *, u32, u32, u32, void (*)(), void (*)(), void *, u32);
void FUN_003ad76c(BtlUi *, BattleUiTaskOwner *);
void FUN_0019e138(void);
void btlEditorNotifyNoop(void);
void FUN_001b72e0(void);
void FUN_001e4bf0(void);
void btlUiDrawFloatingNumbersWhenLoaded(void);
extern BtlUiGlobals g_btlUi;

// Allocate battle UI storage and register its calculation and screen draw passes.
void btlUiCreateTasks(BattleUiTaskOwner *owner)
{
    FUN_002898e4();
    if (!g_btlUi.ui) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlUI.cpp", 0xb52);
        g_btlUi.ui = static_cast<BtlUi *>(asdMemAlloc(0x100, 0x100, 0, sizeof(BtlUi), 1));
    }
    BtlUi *ui = g_btlUi.ui;
    u32 task = taskCreateDraw("btlUI Calc", 2, 0, 0, FUN_0019e138, btlEditorNotifyNoop, owner, owner->process);
    owner->uiTask = task;
    taskCreateDraw("btlUI DrawUpLeft", 0x7a, 0, 0, FUN_001b72e0, NULL, owner, task);
    taskCreateDraw("btlUI DrawUpRight", 0xd8, 0, 0, FUN_001b72e0, NULL, owner, owner->uiTask);
    taskCreateDraw("btlUI DrawDown", 0xe7, 0, 0, FUN_001e4bf0, NULL, owner, owner->uiTask);
    taskCreateDraw("btlUI DrawNumber", 0xe9, 0, 0, btlUiDrawFloatingNumbersWhenLoaded, NULL, owner, owner->uiTask);
    FUN_003ad76c(ui, owner);
    ui->owner = owner;
}
}
