/* NON_MATCHING: retail computes the sprite address through R0 and uses a signed-byte flag load; compiled code uses R5 directly and an unsigned-byte load. */
#include "shard/S2UiTexLoader.h"

struct ConditionalUiScreen {
    u32 unk00;        // 0x00
    u32 state;        // 0x04
    u32 step;         // 0x08
    u8 unk0c[0x10a0 - 0x0c]; // 0x0c
    UiTexSprite sprite; // 0x10a0
};

extern "C" {
u32 FUN_0048e40c(void);
s32 FUN_00163aa4(UiTexSprite* sprite, f32 speed);

// Advances the sprite while conditions hold and switches state when its flag is set.
void FUN_004863f8(ConditionalUiScreen* screen)
{
    if (FUN_0048e40c() != 0) {
        UiTexSprite* sprite = &screen->sprite;
        FUN_00163aa4(sprite, 1.0f);
        if (sprite->animating != 0) {
            screen->state = 2;
            screen->step = 0;
        }
    }
}
}
