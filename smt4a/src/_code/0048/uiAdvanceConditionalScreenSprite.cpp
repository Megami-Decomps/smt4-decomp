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
s8 uiSpriteGetCompletionState(const UiTexSprite *sprite);

// Advances the sprite while conditions hold and switches state when its flag is set.
void uiAdvanceConditionalScreenSprite(ConditionalUiScreen* screen)
{
    if (FUN_0048e40c() != 0) {
        FUN_00163aa4(&screen->sprite, 1.0f);
        if (uiSpriteGetCompletionState(&screen->sprite) != 0) {
            screen->state = 2;
            screen->step = 0;
        }
    }
}
}
