#include "shard/SaveSlotHeaderWork.h"

extern "C" {

/* Restart the slot sprites and the transition, then wait in mode 15 for the last one to resume the pending mode. */
void saveLoadUiRestartSlotSpritesAndWait(SaveSlotHeaderWork *ui)
{
    saveLoadUiRestartSlotSprites(ui);
    saveLoadUiSetTransitionValues(&ui->transition, 0, 0.0f);
    ui->transitionCounter = 0;
    /* Waits in mode 15; the pending mode stays queued. */
    saveLoadUiChangeMode(ui, 15, ui->phase);
    saveLoadUiWaitSprites(ui);
}

} /* extern "C" */
