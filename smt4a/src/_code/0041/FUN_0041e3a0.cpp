/* NON_MATCHING: retail clears the offset through its address with an stm of two zero words plus one vstr; this build stores three vstr. */
#include "common.h"

struct SpriteListMenu41e3a0 {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ s32 count;
    /* 0x01C */ u8 unk01C[0x458];
    /* 0x474 */ u8 cursor[0x8C];
    /* 0x500 */ u8 items[2][0x8C];
    /* 0x618 */ u8 unk618[0x8];
    /* 0x620 */ s32 shownCount;
    /* 0x624 */ u8 unk624[0xC8];
    /* 0x6EC */ f32 offset[3];
};
typedef char SpriteListMenu41e3a0Check[sizeof(SpriteListMenu41e3a0) == 0x6F8 ? 1 : -1];

extern "C" {

void uiSpriteSetKeyframe(void *sprite, s32 keyframe, s32 arg);
void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 arg);

// Reset the cursor (when asked) and every item sprite to keyframe 8 / image 1 and clear the offset.
void FUN_0041e3a0(SpriteListMenu41e3a0 *menu, s32 withCursor)
{
    if (withCursor) {
        uiSpriteSetKeyframe(menu->cursor, 8, 0);
        uiSpriteSetImageKeyframe(menu->cursor, 1, 0);
    }
    for (s32 i = 0; i < menu->count; i++) {
        uiSpriteSetKeyframe(menu->items[i], 8, 0);
        uiSpriteSetImageKeyframe(menu->items[i], 1, 0);
    }
    menu->offset[0] = 0.0f;
    menu->offset[1] = 0.0f;
    menu->offset[2] = 0.0f;
    menu->shownCount = menu->count;
}

} /* extern "C" */
