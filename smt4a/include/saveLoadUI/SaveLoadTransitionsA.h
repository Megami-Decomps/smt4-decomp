#ifndef SAVELOADUI_SAVELOADTRANSITIONSA_H
#define SAVELOADUI_SAVELOADTRANSITIONSA_H

#include "shard/SaveSlotHeaderWork.h"
#include "saveLoadUI/SaveLoadInteractionsA.h"

/* Discard the last touch result before rebuilding the menu's registered regions. */
static __inline void clearSaveLoadTouchResult(SaveSlotHeaderWork *ui)
{
    ui->pending = 0;
    ui->confirmed = 0;
    ui->canceled = 0;
}

static void resetSaveLoadTouch(SaveSlotHeaderWork *ui, s32 enabled)
{
    clearSaveLoadTouchResult(ui);
    saveLoadUiRebuildTouchRegions(ui, enabled);
}

/* Restarts the steps before entering the new mode, saving the mode being left. */
static __inline void saveLoadUiRestartMode(SaveSlotHeaderWork *ui, u8 next, u8 phase)
{
    u8 previous = ui->mode;
    ui->step = 0;
    ui->mode = next;
    ui->previousMode = previous;
    ui->phase = phase;
}

#endif
