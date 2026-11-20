#include "shard/SaveSlotHeaderWork.h"

extern "C" {

/* Restart every sprite and the transition, then wait in mode 15 for the last slot sprite to resume the pending mode. */
void saveLoadUiRestartSpritesAndWait(SaveSlotHeaderWork *ui)
{
    uiSpriteSetKeyframe(&ui->sprite, 5, 0);
    uiSpriteSetImageKeyframe(&ui->sprite, 0, 0);
    saveLoadUiRestartSlotSprites(ui);
    saveLoadUiSetTransitionValues(&ui->transition, 0, 0.0f);
    ui->transitionCounter = 0;
    /* Waits in mode 15; the pending mode stays queued. */
    saveLoadUiChangeMode(ui, 15, ui->phase);
    saveLoadUiWaitSprites(ui);
}

} /* extern "C" */
