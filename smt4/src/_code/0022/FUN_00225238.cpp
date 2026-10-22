/* NON_MATCHING: boolean argument moves, the second loop's counter initialization and its saved sprite-pointer setup are scheduled differently from retail. */
#include "common.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include <stddef.h>

struct SpriteBankUpdate {
    u8 unk0000[0x20];
    UiAnimatedSprite first[10]; // 0x0020
    UiAnimatedSprite second[10]; // 0x0598
    UiAnimatedSprite third[10]; // 0x0b10
    UiAnimatedSprite fourth[10]; // 0x1088
    u8 unk1600[0xb84];
    s32 mode; // 0x2184
    u32 unk2188;
    s16 active; // 0x218c
    s16 pending; // 0x218e
};
typedef char CheckSpriteBankCounts[offsetof(SpriteBankUpdate, active) == 0x218c ? 1 : -1];
extern "C" void FUN_002bee58(UiAnimatedSprite *sprite, s32 key);
extern "C" void pairSetFirstResetSecond(UiAnimatedSprite *sprite, s32 value);

// Apply count changes and refresh active and departing sprite rows.
extern "C" void FUN_00225238(SpriteBankUpdate *bank, s32 added, s32 removed)
{
    if (bank == NULL)
        return;
    bank->active += added;
    bank->pending += removed;
    for (s32 i = 0; i < bank->active; ++i) {
        FUN_002bee58(&bank->third[i], 6);
        FUN_002bee58(&bank->fourth[i], 4);
        FUN_002bee58(&bank->second[i], 0);
        FUN_002bee58(&bank->first[i], 2);
        pairSetFirstResetSecond(&bank->first[i], bank->mode != 0);
    }
    for (s32 i = 0; i < bank->pending; ++i) {
        s32 index = bank->active - i - 1;
        UiAnimatedSprite *sprite = &bank->second[index];
        pairSetFirstResetSecond(sprite, 6);
        FUN_002bee58(sprite, 1);
        FUN_002bee58(&bank->third[index], 6);
        FUN_002bee58(&bank->fourth[index], 4);
    }
}
