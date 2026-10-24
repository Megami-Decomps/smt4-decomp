/* NON_MATCHING: retail has an extra literal-pool word (address 0x57f588) and loads the panel pointer before `mov r5, #1`; otherwise identical */
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct CounterPanel {
    u8 unk000[0x150];             // 0x000
    u32 mode;                     // 0x150
    u8 active;                    // 0x154
    u8 unk155[3];                 // 0x155
    u32 state;                    // 0x158
    u16 count;                    // 0x15C
    u16 displayCount;             // 0x15E
    f32 countValue;               // 0x160
    u8 unk164[0x30];              // 0x164
    u8 spriteSource[0xB9C];       // 0x194
    SpritePlaybackView sprite;    // 0xD30
};

struct CounterPanelOwner {
    u8 unk00[8];          // 0x00
    CounterPanel *panel;  // 0x08
};

extern "C" {

u16 gameDataBlocksGetCounter(void);
void FUN_0014e188(SpritePlaybackView *sprite, u32 value0, u32 value4, const void *source, u16 value38, f32 value20);
void pairSetFirstResetSecond(SpritePlaybackView *sprite, s32 value);
void uiSpriteSelectAnim(SpritePlaybackView *sprite, s32 group);

/* Script command: opens the counter panel in mode 10 with the current counter value and starts its sprite animation. */
u32 FUN_003a6a8c(u32 unused, CounterPanelOwner *owner)
{
    CounterPanel *panel = owner->panel;

    panel->mode = 10;
    panel->state = 1;
    u16 counter = gameDataBlocksGetCounter();
    panel->count = counter;
    panel->displayCount = counter;
    panel->countValue = (f32)counter;
    panel->active = 1;
    FUN_0014e188(&panel->sprite, 8, 0xFFFFFFFF, panel->spriteSource, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprite, 0x11);
    uiSpriteSelectAnim(&panel->sprite, 6);
    return 1;
}

} /* extern "C" */
