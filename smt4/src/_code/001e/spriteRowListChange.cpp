/* NON_MATCHING: retail forms the pool + 0x2000 base once for frame/state and alternate; this build recomputes it. */
#include "ui/UiSpriteApi.h"
#include "ui/SpriteRowList.h"
#include "sys/RuntimeObjects.h"


enum { LIST_SCROLL_SOUND = 0x1000173 };

extern "C" {
void soundPlaySeUnpanned(u32 sound);

/* Starts scrolling the sprite list by `delta` rows, with `count` selected marks changing. */
void spriteRowListChange(SpriteRowList *pool, s32 delta, s32 count)
{
    pool->frame = 0;
    pool->state = SPRITE_ROW_STATE_CHANGING;
    pool->rowCountChange = (s16)delta;
    pool->selectedChange = (s16)count;
    s32 index = pool->rowCount;
    if (index + delta < 0)
        pool->rowCountChange = -index;
    if (pool->rowCountChange + index > SPRITE_ROW_MAX)
        pool->rowCountChange = SPRITE_ROW_MAX - index;

    if (count > 0) {
        if (pool->rowCountChange > 0)
            index += pool->rowCountChange;
        soundPlaySeUnpanned(LIST_SCROLL_SOUND);
        for (s32 i = 0; i < pool->selectedChange; i++) {
            s32 mark = SPRITE_ROW_MARK + (index - pool->selectedRow - i - 1);
            if (pool->alternate == 0)
                pairSetFirstResetSecond(&pool->sprites[mark], 7);
            else
                pairSetFirstResetSecond(&pool->sprites[mark], 8);
            s32 leaving = SPRITE_ROW_LEAVING + (index - pool->selectedRow - i - 1);
            spriteStartAnimationByIndex(&pool->sprites[leaving], 10);
            if (pool->alternate == 0)
                pairSetFirstResetSecond(&pool->sprites[leaving], 0xFA6);
            else
                pairSetFirstResetSecond(&pool->sprites[leaving], 0xFA7);
        }
    }

    if (pool->rowCountChange > 0) {
        for (s32 i = 0; i < pool->rowCountChange; i++) {
            spriteStartAnimationByIndex(&pool->sprites[pool->rowCount + i], 2);
            spriteStartAnimationByIndex(&pool->sprites[pool->rowCount + i + SPRITE_ROW_COVER], 2);
            if (pool->alternate == 0) {
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i], 0);
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i + SPRITE_ROW_MARK], 7);
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i + SPRITE_ROW_GLOW], 2);
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i + SPRITE_ROW_FLASH], 4000);
            } else {
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i], 1);
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i + SPRITE_ROW_MARK], 8);
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i + SPRITE_ROW_GLOW], 3);
                pairSetFirstResetSecond(&pool->sprites[pool->rowCount + i + SPRITE_ROW_FLASH], 0xFA1);
            }
        }
    } else if (pool->rowCountChange < 0) {
        s32 i = 0;
        do {
            spriteStartAnimationByIndex(&pool->sprites[pool->rowCount + i - 1], 8);
            spriteStartAnimationByIndex(&pool->sprites[pool->rowCount + i + SPRITE_ROW_COVER - 1], 8);
            spriteStartAnimationByIndex(&pool->sprites[pool->rowCount + i + SPRITE_ROW_MARK - 1], 9);
            spriteStartAnimationByIndex(&pool->sprites[pool->rowCount + i + SPRITE_ROW_GLOW - 1], 8);
            i--;
        } while (pool->rowCountChange < i);
    }
}

} /* extern "C" */
