/* NON_MATCHING: starts a scroll of the sprite list pool by `delta` entries with `count` rows moving; written from the decompilation, the sprite address arithmetic and loop shapes not compared with retail */
#include "ui/UiSpriteApi.h"
#include "ui/SpriteRowList.h"
#include "sys/RuntimeObjects.h"


#define LIST_BANK 10
#define LIST_MAX_BASE 10
#define LIST_SCROLL_SOUND 0x1000173

extern "C" {
void soundPlaySeUnpanned(u32 sound);

void spriteRowListChange(SpriteRowList *pool, s32 delta, s32 count)
{
    pool->frame = 0;
    pool->state = 3;
    pool->rowCountChange = (s16)delta;
    pool->selectedChange = (s16)count;
    s32 index = pool->rowCount;
    if (index + delta < 0)
        pool->rowCountChange = -pool->rowCount;
    if (pool->rowCountChange + index > LIST_MAX_BASE)
        pool->rowCountChange = LIST_MAX_BASE - pool->rowCount;

    if (count > 0) {
        if (pool->rowCountChange > 0)
            index += pool->rowCountChange;
        soundPlaySeUnpanned(LIST_SCROLL_SOUND);
        for (s32 i = 0; i < pool->selectedChange; i++) {
            s32 slot = index - pool->selectedRow - i;
            pairSetFirstResetSecond(&pool->sprites[slot + 0x13], pool->alternate == 0 ? 7 : 8);
            UiSpriteState *upper = &pool->sprites[slot + 0x31];
            spriteStartAnimationByIndex(upper, 10);
            pairSetFirstResetSecond(upper, pool->alternate != 0 ? 0xFA7 : 0xFA6);
        }
    }

    if (pool->rowCountChange > 0) {
        for (s32 i = 0; i < pool->rowCountChange; i++) {
            s32 entry = pool->rowCount + i;
            spriteStartAnimationByIndex(&pool->sprites[entry], 2);
            spriteStartAnimationByIndex(&pool->sprites[entry + LIST_BANK], 2);
            u32 icon;
            if (pool->alternate != 0) {
                pairSetFirstResetSecond(&pool->sprites[entry], 1);
                pairSetFirstResetSecond(&pool->sprites[entry + 2 * LIST_BANK], 8);
                pairSetFirstResetSecond(&pool->sprites[entry + 3 * LIST_BANK], 3);
                icon = 0xFA1;
            } else {
                pairSetFirstResetSecond(&pool->sprites[entry], 0);
                pairSetFirstResetSecond(&pool->sprites[entry + 2 * LIST_BANK], 7);
                pairSetFirstResetSecond(&pool->sprites[entry + 3 * LIST_BANK], 2);
                icon = 4000;
            }
            pairSetFirstResetSecond(&pool->sprites[entry + 4 * LIST_BANK], icon);
        }
    } else if (pool->rowCountChange < 0) {
        s32 i = 0;
        do {
            s32 entry = pool->rowCount + i;
            spriteStartAnimationByIndex(&pool->sprites[entry - 1], 8);
            spriteStartAnimationByIndex(&pool->sprites[entry + LIST_BANK - 1], 8);
            spriteStartAnimationByIndex(&pool->sprites[entry + 2 * LIST_BANK - 1], 9);
            spriteStartAnimationByIndex(&pool->sprites[entry + 3 * LIST_BANK - 1], 8);
            i--;
        } while (pool->rowCountChange < i);
    }
}

} /* extern "C" */
