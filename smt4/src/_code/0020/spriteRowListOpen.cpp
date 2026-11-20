#include "ui/UiSpriteApi.h"
#include "ui/SpriteRowList.h"
#include "sys/RuntimeObjects.h"

extern "C" {

void workSetStateByte(UiSpriteState *element, u8 state);

/* Opens the row list with `rowCount` rows, the last `selectedRow` of them marked: stops the flash timers,
 * hides every sprite and starts each row's opening animations with the image set `alternate` selects. */
void spriteRowListOpen(SpriteRowList *list, u32 alternate, u16 rowCount, u16 selectedRow)
{
    list->rowCount = rowCount;
    list->selectedRow = selectedRow;
    list->alternate = alternate;
    for (s32 index = 0; index < SPRITE_ROW_MAX; ++index)
        list->flashFrames[index] = -1;
    list->frame = 0;
    list->state = SPRITE_ROW_STATE_OPENING;
    for (s32 index = 0; index < SPRITE_ROW_SPRITES; ++index)
        workSetStateByte(&list->sprites[index], 0);
    for (s32 row = 0; row < list->rowCount; ++row) {
        if (list->alternate == 0) {
            pairSetFirstResetSecond(&list->sprites[row], 0);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_MARK], 7);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_GLOW], 2);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_LEAVING], 4006);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_FLASH], 4000);
        } else {
            pairSetFirstResetSecond(&list->sprites[row], 1);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_MARK], 8);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_GLOW], 3);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_LEAVING], 4007);
            pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_FLASH], 4001);
        }
        spriteStartAnimationByIndex(&list->sprites[row], 2);
        spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_MARK], 5);
        spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_GLOW], 3);
        spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_LEAVING], 10);
        pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_COVER], 6);
        spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_COVER], 1);
    }
}

} /* extern "C" */
