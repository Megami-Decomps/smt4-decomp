#include "ui/SpriteRowList.h"
#include "ui/UiSpriteApi.h"

/* Applies row and mark deltas and restarts the affected sprite animations. */
extern "C" void spriteRowListRefreshMarks(SpriteRowList *list, s32 rowDelta, s32 markDelta)
{
    s32 row;

    if (list == NULL) {
        return;
    }
    list->rowCount += rowDelta;
    list->selectedRow += markDelta;
    for (row = 0; row < list->rowCount; ++row) {
        spriteStartAnimationByIndex(&list->sprites[SPRITE_ROW_MARK + row], 6);
        spriteStartAnimationByIndex(&list->sprites[SPRITE_ROW_GLOW + row], 4);
        spriteStartAnimationByIndex(&list->sprites[SPRITE_ROW_COVER + row], 0);
        spriteStartAnimationByIndex(&list->sprites[SPRITE_ROW_BASE + row], 2);
        if (list->alternate == 0) {
            pairSetFirstResetSecond(&list->sprites[SPRITE_ROW_BASE + row], 0);
        } else {
            pairSetFirstResetSecond(&list->sprites[SPRITE_ROW_BASE + row], 1);
        }
    }
    if (list->selectedRow > 0) {
        for (row = 0; row < list->selectedRow; ++row) {
            s32 index = list->rowCount - row - 1;
            pairSetFirstResetSecond(&list->sprites[SPRITE_ROW_COVER + index], 6);
            spriteStartAnimationByIndex(&list->sprites[SPRITE_ROW_COVER + index], 1);
            spriteStartAnimationByIndex(&list->sprites[SPRITE_ROW_MARK + index], 6);
            spriteStartAnimationByIndex(&list->sprites[SPRITE_ROW_GLOW + index], 4);
        }
    }
}
