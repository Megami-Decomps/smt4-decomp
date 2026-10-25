/* NON_MATCHING: retail clears the offset's two integer words with one stm of two zero registers (mov r2, r1), this build stores them with two str. */
#include "common.h"

struct SpriteOffset41e3a0 {
    s32 x;
    s32 y;
    f32 z;
};

struct SpriteListMenu41e3a0 {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ s32 count;
    /* 0x01C */ u8 unk01C[0x458];
    /* 0x474 */ u8 cursor[0x8C];
    /* 0x500 */ u8 items[2][0x8C];
    /* 0x618 */ u8 unk618[0x8];
    /* 0x620 */ s32 shownCount;
    /* 0x624 */ u8 unk624[0xC8];
    /* 0x6EC */ SpriteOffset41e3a0 offset;
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
    SpriteOffset41e3a0 *offset = &menu->offset;
    offset->x = 0;
    offset->y = 0;
    offset->z = 0.0f;
    menu->shownCount = menu->count;
}

} /* extern "C" */
