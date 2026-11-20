#include "shard/SaveSlotHeaderWork.h"

extern "C" {

/* Reset the header sprite (when asked) and every slot sprite to keyframe 8 / image 1, clear the transition and
 * set its counter to the sprite count. */
void spriteListMenuResetSprites(SaveSlotHeaderWork *ui, s32 resetHeader)
{
    if (resetHeader) {
        uiSpriteSetKeyframe(&ui->sprite, 8, 0);
        uiSpriteSetImageKeyframe(&ui->sprite, 1, 0);
    }
    for (s32 i = 0; i < ui->spriteCount; i++) {
        uiSpriteSetKeyframe(&ui->slotSprites[i], 8, 0);
        uiSpriteSetImageKeyframe(&ui->slotSprites[i], 1, 0);
    }
    SaveLoadTransitionValues *transition = &ui->transition;
    transition->values = 0;
    transition->progress = 0.0f;
    ui->transitionCounter = ui->spriteCount;
}

} /* extern "C" */
