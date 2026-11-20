/* NON_MATCHING: retail stores frame/state with a writeback str pair (no stm) and copies the zero register into the loop counter. */
#include "ui/UiSpriteApi.h"
#include "ui/SpriteRowList.h"

extern "C" {

/* Starts closing the row list: no row stays marked, and every row's base and cover play their
 * closing animation. */
void spriteRowListClose(SpriteRowList *list)
{
    list->frame = 0;
    list->state = SPRITE_ROW_STATE_CLOSING;
    list->selectedRow = 0;
    for (s32 i = 0; i < list->rowCount; i++) {
        spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_BASE], 8);
        spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_COVER], 8);
    }
}

} /* extern "C" */
