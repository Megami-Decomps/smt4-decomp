/* NON_MATCHING: visibility clearing unrolls into direct byte stores instead of retail's per-sprite accessor loop; alternate branch layout and ID constants differ. */
#include "ui/SpriteRowList.h"
#include "sys/RuntimeObjects.h"

extern "C" {
void spriteStartAnimationByIndex(UiSpriteState *sprite, s32 layer);

void FUN_00206368(SpriteRowList *list, u32 alternate, u16 rowCount, u16 selectedRow)
{
    list->rowCount = rowCount;
    list->selectedRow = selectedRow;
    list->alternate = alternate;
    for (s32 index = 0; index < 10; ++index)
        list->entryIds[index] = -1;
    list->cursor = 0;
    list->state = 2;
    for (s32 index = 0; index < 61; ++index)
        list->sprites[index].visibility.active = 0;
    for (s32 row = 0; row < list->rowCount; ++row) {
        if (list->alternate) {
            pairSetFirstResetSecond(&list->sprites[row], 1);
            pairSetFirstResetSecond(&list->sprites[row + 20], 8);
            pairSetFirstResetSecond(&list->sprites[row + 30], 3);
            pairSetFirstResetSecond(&list->sprites[row + 50], 4007);
            pairSetFirstResetSecond(&list->sprites[row + 40], 4001);
        } else {
            pairSetFirstResetSecond(&list->sprites[row], 0);
            pairSetFirstResetSecond(&list->sprites[row + 20], 7);
            pairSetFirstResetSecond(&list->sprites[row + 30], 2);
            pairSetFirstResetSecond(&list->sprites[row + 50], 4006);
            pairSetFirstResetSecond(&list->sprites[row + 40], 4000);
        }
        spriteStartAnimationByIndex(&list->sprites[row], 2);
        spriteStartAnimationByIndex(&list->sprites[row + 20], 5);
        spriteStartAnimationByIndex(&list->sprites[row + 30], 3);
        spriteStartAnimationByIndex(&list->sprites[row + 50], 10);
        pairSetFirstResetSecond(&list->sprites[row + 10], 6);
        spriteStartAnimationByIndex(&list->sprites[row + 10], 1);
    }
}
}
