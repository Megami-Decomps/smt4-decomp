/* NON_MATCHING: starts a scroll of the sprite list pool by `delta` entries with `count` rows moving; written from the decompilation, the sprite address arithmetic and loop shapes not compared with retail */
#include "common.h"
#include "sys/RuntimeObjects.h"

struct ListSprite {
    /* 0x00 */ u8 data[0x8C];
};

/* The sprite pool of the list screen: six banks of ten sprites and the scroll state after them. */
struct ListPool {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ ListSprite sprites[0x3D];
    /* 0x217C */ s32 phase;
    /* 0x2180 */ s32 mode;
    /* 0x2184 */ s32 alternate;      /* selects the second sprite style */
    /* 0x2188 */ f32 unk2188;
    /* 0x218C */ s16 base;           /* first visible entry */
    /* 0x218E */ s16 offset;
    /* 0x2190 */ s16 delta;          /* entries to scroll */
    /* 0x2192 */ s16 count;          /* rows that move */
};

#define LIST_BANK 10
#define LIST_MAX_BASE 10
#define LIST_SCROLL_SOUND 0x1000173

extern "C" {
void spriteStartAnimationByIndex(ListSprite *sprite, s32 animation);
void FUN_002bf810(u32 sound);

void FUN_001e0de0(ListPool *pool, s32 delta, s32 count)
{
    pool->phase = 0;
    pool->mode = 3;
    pool->delta = (s16)delta;
    pool->count = (s16)count;
    s32 index = pool->base;
    if (index + delta < 0)
        pool->delta = -pool->base;
    if (pool->delta + index > LIST_MAX_BASE)
        pool->delta = LIST_MAX_BASE - pool->base;

    if (count > 0) {
        if (pool->delta > 0)
            index += pool->delta;
        FUN_002bf810(LIST_SCROLL_SOUND);
        for (s32 i = 0; i < pool->count; i++) {
            s32 slot = index - pool->offset - i;
            pairSetFirstResetSecond(&pool->sprites[slot + 0x13], pool->alternate == 0 ? 7 : 8);
            ListSprite *upper = &pool->sprites[slot + 0x31];
            spriteStartAnimationByIndex(upper, 10);
            pairSetFirstResetSecond(upper, pool->alternate != 0 ? 0xFA7 : 0xFA6);
        }
    }

    if (pool->delta > 0) {
        for (s32 i = 0; i < pool->delta; i++) {
            s32 entry = pool->base + i;
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
    } else if (pool->delta < 0) {
        s32 i = 0;
        do {
            s32 entry = pool->base + i;
            spriteStartAnimationByIndex(&pool->sprites[entry - 1], 8);
            spriteStartAnimationByIndex(&pool->sprites[entry + LIST_BANK - 1], 8);
            spriteStartAnimationByIndex(&pool->sprites[entry + 2 * LIST_BANK - 1], 9);
            spriteStartAnimationByIndex(&pool->sprites[entry + 3 * LIST_BANK - 1], 8);
            i--;
        } while (pool->delta < i);
    }
}

} /* extern "C" */
