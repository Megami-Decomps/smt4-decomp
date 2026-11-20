/* NON_MATCHING: the mode change and the sprite wait agree with retail. Retail clears the transition's two integer words
 * with one stm of two zero registers (mov r2, r1): that is armcc's 64-bit zero store, so the words are one 64-bit value
 * (an 8-aligned u64 view of them reproduces it here and makes spriteListMenuResetSprites IDENTICAL), but 0x6ec is only 4-aligned in
 * this record, so a plain u64 member cannot sit there until the record's real base is known; this build stores them with
 * two str. Retail also loads the keyframe 5 after the sprite's address. */
#include "shard/SaveSlotHeaderWork.h"
#include "ui/UiSpriteApi.h"

extern "C" {
static void transitionValuesSet(SaveLoadTransitionValues *transition, u32 value0, u32 value1, f32 progress)
{
    transition->value0 = value0;
    transition->value1 = value1;
    transition->progress = progress;
}

// Restart a sprite's animation from its first keyframe and image.
static __inline void spriteRestart(UiSpriteState *sprite)
{
    uiSpriteSetKeyframe(sprite, 5, 0);
    uiSpriteSetImageKeyframe(sprite, 0, 0);
}

// Restart the slot sprites and the transition, then wait in mode 15 for the last one to resume the pending mode.
void saveLoadUiRestartSlotSpritesAndWait(SaveSlotHeaderWork *ui)
{
    for (s32 index = 0; index < ui->spriteCount; ++index) {
        spriteRestart(&ui->slotSprites[index]);
    }
    transitionValuesSet(&ui->transition, 0, 0, 0.0f);
    ui->transitionCounter = 0;
    /* Waits in mode 15; the pending mode stays queued. */
    saveLoadUiChangeMode(ui, 15, ui->phase);
    saveLoadUiWaitSprites(ui);
}
}
