/* NON_MATCHING: singleton panel-resume helper recovers both UI base registers, but their copy is made inside mode 14 rather than at entry. */
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobals g_btlUi;
void FUN_00206270(BtlUiObjC *);
void playSceneTimerSubStart(BtlUiObjB *);
void playSceneFadeInStart(BtlUiObjA *);
s32 FUN_0028be84(BtlUiObjB *);
s32 playSceneIsFadeOutDone(BtlUiObjA *);
void FUN_00297f1c(BtlUiObjC *, u32 selection, s32 mode, u32 options);

static inline void battleUiRestorePanels()
{
    BtlUi *ui = g_btlUi.ui;
    if (playSceneIsFadeOutDone(&ui->objA)) {
        if (FUN_0028be84(&ui->objB)) {
            playSceneFadeInStart(&ui->objA);
            playSceneTimerSubStart(&ui->objB);
        }
    }
}

// Translate the battle UI mode and restore the faded panel when resuming it.
void FUN_00227b14(void *, u32 selection, u32 mode, u32 options)
{
    BtlUi *ui = g_btlUi.ui;
    s32 panelMode = -1;
    ui->panelState.state = 7;
    switch (mode) {
    case 1:
    case 2:
    case 3: panelMode = 1; break;
    case 4: panelMode = 9; break;
    case 5: panelMode = 8; break;
    case 6: panelMode = 5; break;
    case 7: panelMode = 3; break;
    case 8: panelMode = 7; break;
    case 14:
        panelMode = 11;
        battleUiRestorePanels();
        FUN_00206270(&ui->objC);
        ui->panelState.state = 11;
        break;
    }
    FUN_00297f1c(&ui->objC, selection, panelMode, options);
}
}
